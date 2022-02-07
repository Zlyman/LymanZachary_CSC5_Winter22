
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 19, 2022, 8:31 PM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
#include <cstring>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
void prob0();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"\nChoose from the following Menu Items"<<endl;
        cout<<"Problem 0: Books - Gaddis 9thEd Ch4 Prob11"<<endl;
        cout<<"Problem 1: Banking Charges - Gaddis 9thEd Ch4 Prob12"<<endl;
        cout<<"Problem 2: Sort Names - Gaddis 9thEd Ch4 Prob8"<<endl;
        cout<<"Problem 3: Race - Gaddis 9thEd Ch4 Prob14"<<endl;
        cout<<"Problem 4: ISP - Gaddis 9thEd Ch4 Prob23"<<endl;
        cout<<"Problem 5: Roshambo - Savitch 9thEd Ch3 Prob1"<<endl;
        cout<<"Problem 6: Roman Conv. - Savitch 9thEd Ch3 Prob3"<<endl;
        cout<<"Problem 7: Comp. Signs - Savitch 9thEd Ch3 Prob4"<<endl;
        cout<<"8 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:prob0();break;
            case 1:prob1();break;
            case 2:prob2();break;
            case 3:prob3();break;
            case 4:prob4();break;
            case 5:prob5();break;
            case 6:prob6();break;
            case 7:prob7();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=7);

    return 0;
}

void prob0() {
    //Declare Variables
     short nBooks,    //Number of books purchased 
          nPoints;    //Number of points 
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>nBooks;
    //Map Input/Outputs
    switch (nBooks){
        case 0: nPoints=0;break;
        case 1: nPoints=5;break;
        case 2: nPoints=15;break;
        case 3: nPoints=30;break;
        default: nPoints=60;break;
    }
    //Display the Outputs
    cout<<"Books purchased ="<<setw(3)<<nBooks<<endl;
    cout<<"Points earned   ="<<setw(3)<<nPoints;
}

void prob1() {
    //Declare Variables
    unsigned short numCks;  //Number of checks
    float balance,          //Starting balance in $'s
           monFee,          //Monthly charge in $'s
          lBalFee,          //Low balance charge in $'s
           cksFee,          //Total check fee in $'s
           sumFee,          //Sum of all monthly fees in $'s
             nBal;          //Balance after monthly fee deduction 
    //Initialize or input i.e. set variable values
    monFee=10.0;
    
    //Promp user for input 
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>numCks;
    //Map inputs -> outputs
    
    //Check for overdraft 
    while(balance<0){
        cout<<"Urgent! Your account is overdawn"<<endl;
    }
    
    //Check for Invalid check input 
    while(numCks<0){
        cout<<"Invalid input."<<endl;
    }
    //Display starting balance
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $"<<setw(9)<<balance<<endl;
    
    //Calculate and display check fee
    if(numCks<20){
        cksFee=0.10f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else if(numCks>=20 && numCks<39){
        cksFee=0.08f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else if(numCks>=40 && numCks<59){
        cksFee=0.06f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
    else{
        cksFee=0.04f*numCks;
        cout<<"Check Fee   $"<<setw(9)<<cksFee<<endl;
    }
     
    //Display monthly fee
    cout<<"Monthly Fee $"<<setw(9)<<monFee<<endl;
    
    //Check for low balance 
    if(balance>=0 && balance<400.0f){
        lBalFee=15.0f;
        cout<<"Low Balance $"<<setw(9)<<lBalFee<<endl;
    }
    else{
        lBalFee=0;
        cout<<"Low Balance $"<<setw(9)<<lBalFee<<endl;
    }
    
    //Calculate new Balance
    nBal=balance-(cksFee+monFee+lBalFee);
    cout<<"New Balance $"<<setw(9)<<nBal;

}

void prob2() {
    //Declare Variables
    string n1, n2, n3;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    //Map inputs -> outputs
    if (n1<=n2 && n1<=n3 && n2<=n3){
        cout<<n1<<endl<<n2<<endl<<n3;
    }
    else if(n1<=n2 && n1<=n3 && n3<=n2){
        cout<<n1<<endl<<n3<<endl<<n2;
    }
    else if(n2<=n1 && n2<=n3 && n1<=n3){
        cout<<n2<<endl<<n1<<endl<<n3;
    }
    else if(n2<=n1 && n2<=n3 && n3<=n1){
        cout<<n2<<endl<<n3<<endl<<n1;
    }
    else if(n3<=n1 && n3<=n2 && n1<=n2){
        cout<<n3<<endl<<n1<<endl<<n2;
    }
    else{
        cout<<n3<<endl<<n2<<endl<<n1;
    }
 
}

void prob3() {
    //Declare Variables
    char   n1[20]{},      //Racer names 
           n2[20]{}, 
           n3[20]{}; 
    unsigned short t1, t2, t3;  //Race times 
   
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"input 3 Runners"<<endl;
    cin>>n1>>t1;
    cin>>n2>>t2;
    cin>>n3>>t3;
    
    //Map inputs -> outputs
    cout<<"Their names, then their times"<<endl;
    
    if(t1<t2 && t1<t3 && t2<t3){
        cout<<n1<<setw(3)<<t1<<endl;
        cout<<n2<<setw(3)<<t2<<endl;
        cout<<n3<<setw(3)<<t3;
    }
    else if(t2<t1 && t2<t3 && t1<t3){
        cout<<n2<<setw(3)<<t2<<endl;
        cout<<n1<<setw(3)<<t1<<endl;
        cout<<n3<<setw(3)<<t3;
    }
    else if(t1<t2 && t1<t3 && t3<t2){
        cout<<n1<<setw(3)<<t1<<endl;
        cout<<n3<<setw(3)<<t3<<endl;
        cout<<n2<<setw(3)<<t2;
    }
    else if(t2<t1 && t2<t3 && t3<t1){
        cout<<n2<<"   "<<setw(3)<<t2<<endl;
        cout<<n3<<"   "<<setw(3)<<t3<<endl;
        cout<<n1<<"   "<<setw(3)<<t1;
    }
    else if(t3<t1 && t3<t2 && t1<t2){
        cout<<n3<<"   "<<setw(3)<<t3<<endl;
        cout<<n1<<"   "<<setw(3)<<t1<<endl;
        cout<<n2<<"   "<<setw(4)<<t2;
    }
    else{
        cout<<n3<<setw(3)<<t3<<endl;
        cout<<n2<<setw(3)<<t2<<endl;
        cout<<n1<<setw(3)<<t1;
    }

}

void prob4() {
    //Declare Variables
    float aPrice,       //A package base price
          bPrice,       //B package base price
          cPrice,       //C package base price 
          cPerHr,       //Carge per additional hour
            bill;       //Total bill
    char  choice;       //Package choice
    unsigned short hour;//Number of additional hours 
    //Initialize or input i.e. set variable values
    aPrice=9.95;
    bPrice=14.95;
    cPrice=19.95;
    //Get user input 
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>choice>>hour;
    //Map inputs -> outputs
    switch(choice){
        case 'A':
            if(hour>10 && hour<=744){
                cPerHr=(hour-10)*2.00f;
            }
            else if(hour<=10 && hour>=0){
                cPerHr=0.00f;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=aPrice+cPerHr;
        break;
        case 'B':
            if(hour>20 && hour<=744){
                cPerHr=(hour-20)*1.00f;
            }
            else if(hour<=20 && hour>=0){
                cPerHr=0.00f;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=bPrice+cPerHr;
        break;
        case 'C':
            if(hour>=0 && hour<=744){
                cPerHr=0.00F;
            }
            else{
                cout<<"You entered an invalid number of hours"<<endl;
            }
            bill=cPrice;
        break;
        default: cout<<"You entered an invalid letter and or number"<<endl;
    }   
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Bill = $"<<setw(6)<<bill;
 
}

void prob5() {
    //Declare Variables
    char ply1,ply2;//The 2 players playing RoShamBo
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>ply1>>ply2;
    //Map the inputs/known to the outputs
    if(ply1==ply2){
        cout<<"This is Tie!";
    }else if(ply1=='R'||ply1=='r'){
        if(ply2=='S'||ply2=='s')cout<<"Rock breaks scissors.";
        if(ply2=='P'||ply2=='p')cout<<"Paper covers rock.";
    }else if(ply1=='P'||ply1=='p'){
        if(ply2=='R'||ply2=='r')cout<<"Paper covers rock.";
        if(ply2=='S'||ply2=='s')cout<<"Scissors cuts paper.";
    }else if(ply1=='S'||ply1=='s'){
        if(ply2=='P'||ply2=='p')cout<<"Scissors cuts paper.";
        if(ply2=='R'||ply2=='r')cout<<"Rock breaks scissors.";
    }

}

void prob6() {
    //Declare Variables
    unsigned char n1000s, n100s, n10s, n1s;
    unsigned short arabic;
    string roman="";
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    //Validate input
    if(arabic<1000 || arabic>3000){
        cout<<arabic<<" is Out of Range!";
    }
    else{
        //Map the inputs/knowns to the outputs
        n1000s=arabic/1000;
        n100s=(arabic-n1000s*1000)/100;
        n10s=arabic%100/10;
        n1s=arabic%10;
        
        //Convert the 1000's place
        switch(n1000s){
            case 3:roman+="M";
            case 2:roman+="M";
            case 1:roman+="M";
        }
        //Convert the 100's place
        switch(n100s){
            case 9:roman+="CM";break;
            case 8:roman+="DCCC";break;
            case 7:roman+="DCC";break;
            case 6:roman+="DC";break;
            case 5:roman+="D";break;
            case 4:roman+="CD";break;
            case 3:roman+="CCC";break;
            case 2:roman+="CC";break;
            case 1:roman+="C";break;
        }
        //Convert the 10's place
        switch(n10s){
            case 9:roman+="XC";break;
            case 8:roman+="LXXX";break;
            case 7:roman+="LXX";break;
            case 6:roman+="LX";break;
            case 5:roman+="L";break;
            case 4:roman+="XL";break;
            case 3:roman+="XXX";break;
            case 2:roman+="XX";break;
            case 1:roman+="X";break;
        }
        //Convert the 1's place
        switch(n1s){
            case 9:roman+="IX";break;
            case 8:roman+="VIII";break;
            case 7:roman+="VII";break;
            case 6:roman+="VI";break;
            case 5:roman+="V";break;
            case 4:roman+="IV";break;
            case 3:roman+="III";break;
            case 2:roman+="II";break;
            case 1:roman+="I";break;
        }
        //Output the conversion
        cout<<arabic<<" is equal to "<<roman;
    }

}

void prob7() {
    //Declare Variables
    string sign1, sign2;                //User inputs
    bool fire1, earth1, air1, water1,   //Elements
         fire2, earth2, air2, water2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
   
    //Determine first signs element 
    if(sign1=="Aries"||sign1=="Leo"||sign1=="Sagittarius"){
        fire1=true;
    }
    else if(sign1=="Taurus"||sign1=="Virgo"||sign1=="Capricorn"){
        earth1=true;
    }
    else if(sign1=="Gemini"||sign1=="Libra"||sign1=="Aquarius"){
        air1=true;
    }
    else if(sign1=="Cancer"||sign1=="Scorpio"||sign1=="Pisces"){
        water1=true;
    }
    else{
        cout<<"Invalid input for sign 1."<<endl;
    }
    
    //Determine second signs element 
    if(sign2=="Aries"||sign2=="Leo"||sign2=="Sagittarius"){
        fire2=true;
    }
    else if(sign2=="Taurus"||sign2=="Virgo"||sign2=="Capricorn"){
        earth2=true;
    }
    else if(sign2=="Gemini"||sign2=="Libra"||sign2=="Aquarius"){
        air2=true;
    }
    else if(sign2=="Cancer"||sign2=="Scorpio"||sign2=="Pisces"){
        water2=true;
    }
    else{
        cout<<"Invalid input for sign 2."<<endl;
    }
            
    //Compare elements and dispaly outputs
    if(fire1==true && fire2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Fire signs.";
    }
    else if(earth1==true && earth2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Earth signs.";
    }
    else if(air1==true && air2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Air signs.";
    }
    else if(water1==true && water2==true){
        cout<<sign1<<" and "<<sign2
            <<" are compatible Water signs.";
    }
    else{
        cout<<sign1<<" and "<<sign2
            <<" are not compatible signs.";
    }

}

