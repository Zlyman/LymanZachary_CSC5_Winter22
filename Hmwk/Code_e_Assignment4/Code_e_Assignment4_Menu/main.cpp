
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 12th, 2021, 10:51 AM
 * Purpose:  Basic Menu with Functions for exams and homework
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <math.h>
#include <iomanip>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float CNVL2G = 0.264179;
const int PERCENT=100;
//Function Prototypes
void prob0();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void getNum(float &,float &,float &);
float max1(float,float);
float max2(float ,float, float);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        cout<<"\nChoose from the following Menu Items"<<endl;
        cout<<"Problem 0: Sum Gaddis 9e Ch5 Prob1"<<endl;
        cout<<"Problem 1: Pay In Pennies Gaddis 9e Ch5 Prob7"<<endl;
        cout<<"Problem 2: Min Max Gaddis 9e Ch5 Prob13"<<endl;
        cout<<"Problem 3: Rectangle Gaddis 9e Ch5 Prob22"<<endl;
        cout<<"Problem 4: Pattern Gaddis 9e Ch5 Prob23"<<endl;
        cout<<"Problem 5: MPG Savitch 9e Ch4 Prob1"<<endl;
        cout<<"Problem 6: 2 Car MPG Savitch 9e Ch4 Prob2"<<endl;
        cout<<"Problem 7: Inflation Rate Savitch 9e Ch4 Prob4"<<endl;
        cout<<"Problem 8: Future Inflation Rate Savitch 9e Ch4 Prob5"<<endl;
        cout<<"Problem 9: Max Number Savitch 9e Ch4 Prob9"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
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
            case 8:prob8();break;
            case 9:prob9();break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}

void prob0(){
    //Declare Variables
    int strtNum,    //Starting point for the sum
         usrNum,    //User input number
            sum;    //Holds the final sum
    //Initialize or input i.e. set variable values
    sum=0;
    cin>>usrNum;
    //Map inputs -> outputs
    
    for(strtNum=1;strtNum<usrNum;strtNum++){
        sum=sum+strtNum;
    }
    //Display the outputs
    cout<<"Sum = "<<sum+usrNum;
}

void prob1(){
    //Declare Variables
    int day;
    //Initialize or input i.e. set variable values

    //Map inputs -> outputs
    cin >> day;
    if (day >= 1){
    //Display the outputs
    
    cout << fixed << setprecision(2);
    cout << "Pay = $" << setw(3) << ((pow(2,day) - 1) * 0.01);
    }
}

void prob2(){
    //Declare Variables
    int numEtrd,        //Number user entered
         numMin,        //Minimum Number 
         numMax;        //Maximum Number 
    //Initialize or input i.e. set variable values
    numMin=10000000;
    numMax=0;
    
    do{
        cin>>numEtrd;
        if(numEtrd>numMax) numMax=numEtrd;
        if(numEtrd<numMin && numEtrd>-99) numMin=numEtrd;
    }
    while(numEtrd!=-99);
    //Display the outputs
    cout<<"Smallest number in the series is"<<setw(2)<<numMin<<endl;
    cout<<"Largest  number in the series is"<<setw(2)<<numMax;
}

void prob3(){
    //Declare Variables
    char letter;        //User letter input
    int  usrNum;        //User num input 
    //Initialize or input i.e. set variable values
    cin>>usrNum>>letter;
    //Map inputs -> outputs
    for(int i=0;i<usrNum;i++){
        for(int j=0;j<usrNum;j++){
            cout<<letter;
        }
        if(i!=usrNum-1){
            cout<<endl;
        }
    }
}

void prob4(){
     //Declare Variables
    char plus;
    int userNum;
    //Initialize or input i.e. set variable values
    plus='+';
    cin>>userNum;
    //Map inputs -> outputs
    //First half of triangle
    for(int i=1;i<=userNum;i++){
        for(int j=0;j<i;j++){
            cout<<plus;
        }
        if(i!=userNum){
            cout<<endl;
        }
        if(i!=userNum){
            cout<<endl;
        }
    }
    cout<<endl;
    cout<<endl;
    
    //Second half of triangle 
     for(int i=userNum;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<plus;
        }
        if(i>1){
            cout<<endl;
        }
        if(i>1){
            cout<<endl;
        }
    }
}

void prob5(){
     //Declare Variables
    char  again{};
    int    liters,
            miles;
    float gallons,
              mpg;
    //Initialize or input i.e. set variable values
  liters=0;
   miles=0;
  
   do{
       cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>liters;
    cout<<"\nEnter number of miles traveled:"<<endl;
    cin>>miles;
    
    //Convert Liters to Gallons
    gallons=liters*CNVL2G;
    
    //Calculate Miles per gallon
    mpg=miles/gallons;
    
    //Display output to user
    cout<<"\nmiles per gallon:"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(4)<<mpg<<endl;
    //Prompt the user to run again
    cout<<"Again:"<<endl;
    cin>>again;
    if(again=='Y'||again=='y'){
       cout<<endl; 
    }
   }
   while(again=='Y'||again=='y');
}

void prob6(){
    //Declare Variables
    char  again{};
    int    liters1,     //Liters Car 1  
           liters2,     //Liters Car 2 
            miles1,     //Miles Car 1 
            miles2;     //Miles Car 2
    float   galns1,     //Gallons Car 1 
            galns2,     //Gallons Car 2 
              mpg1,     //Miles per Gallon Car 1 
              mpg2;     //Miles per Gallon car 2
    //Initialize or input i.e. set variable values
  liters1=liters2=0;
   miles1=miles2=0;
  
   do{
       //Car 1
       cout<<"Car 1"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>liters1;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>miles1;
    
       //Convert Liters to Gallons Car 1
       galns1=liters1*CNVL2G;
    
       //Calculate Miles per gallon Car 1
       mpg1=miles1/galns1;
    
       //Display output to user Car 1
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"miles per gallon: "<<setw(4)<<mpg1<<endl;
       
       //Car 2
       cout<<"\nCar 2"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>liters2;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>miles2;
    
       //Convert Liters to Gallons Car 2
       galns2=liters2*CNVL2G;
    
       //Calculate Miles per gallon Car 2
       mpg2=miles2/galns2;
    
       //Display output to user Car 2
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"miles per gallon: "<<setw(4)<<mpg2<<endl;
       
       //Calculate and display which car is most efficient
       if(mpg1>mpg2){
           cout<<"\nCar 1 is more fuel efficient"<<endl;
       }
       else{
           cout<<"\nCar 2 is more fuel efficient"<<endl;
       }
       //Prompt the user to run again
       cout<<"\nAgain:"<<endl;
       cin>>again;
       if(again=='Y'||again=='y'){
          cout<<endl; 
       }
   }
   while(again=='Y'||again=='y');
}

void prob7(){
    //Declare Variables
    float crntPr,       //Current Price $'s
           pstPr,       //Year ago Price $'s
          inflRt;       //Inflation rate &
    char   again{};       //hold user selection to terminate program or not
          
    //Initialize or input i.e. set variable values
    crntPr=pstPr=inflRt=0;
    
    //Start of Loop
    do{
        cout<<"Enter current price:"<<endl;
        cin>>crntPr;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pstPr;
        
        //Calculate Inflation rate
        inflRt=(crntPr-pstPr)/pstPr;
        
        //Convert to Percentage
        inflRt=inflRt*PERCENT;
        
        //Display Inlation rate to user
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Inflation rate: "<<setw(4)<<inflRt<<"%"<<endl;
        
        //Prompt user to run program again or terminate 
        cout<<"\nAgain:"<<endl;
        cin>>again;
        
        if(again=='Y'||again=='y'){
            cout<<endl;
        }
    }
    while(again=='Y'||again=='y');
}

void prob8(){
    //Declare Variables
    float crntPr,       //Current Price $'s
           pstPr,       //Year ago Price $'s
          inflRt,       //Inflation rate &
         ftrCst1,       //Future cost 1 year
         ftrCst2;       //Future cost 2 years
    char again{};       //Hold user selection to terminate program or not
          
    //Initialize or input i.e. set variable values
    crntPr=pstPr=inflRt=0;
    
    //Start of Loop
    do{
        cout<<"Enter current price:"<<endl;
        cin>>crntPr;
        cout<<"Enter year-ago price:"<<endl;
        cin>>pstPr;
        
        //Calculate Inflation rate
        inflRt=(crntPr-pstPr)/pstPr;
        
        //Convert to Percentage
        inflRt=inflRt*PERCENT;
        
        //Display Inlation rate to user
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Inflation rate: "<<setw(4)<<inflRt<<"%"<<endl;
        
        //Calculate the future cost after 1 and 2 years
        inflRt/=PERCENT;
        ftrCst1=(inflRt*crntPr)+crntPr;
        ftrCst2=(inflRt*ftrCst1)+ftrCst1;
        
        //Display future costs  
        cout<<"\nPrice in one year: $"<<setw(4)<<ftrCst1<<endl;
        cout<<"Price in two year: $"<<setw(4)<<ftrCst2<<endl;
        
        //Prompt user to run program again or terminate 
        cout<<"\nAgain:"<<endl;
        cin>>again;
        
        if(again=='Y'||again=='y'){
            cout<<endl;
        }
    }
    while(again=='Y'||again=='y');
}

void prob9(){
    //Declare Variables
    float x,y,z;
    //Initialize or input i.e. set variable values
    x=y=z=0;
    getNum(x,y,z);
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<max1(x,y)<<endl;
    cout<<"\nLargest number from three parameter function:"<<endl;
    cout<<max2(x,y,z)<<endl;
 
}

void getNum(float &x, float &y, float&z){
    //Prompt for inputs
    cout<<"Enter first number:"<<endl;
    cin>>x;
    cout<<"\nEnter Second number:"<<endl;
    cin>>y;
    cout<<"\nEnter third number:"<<endl;
    cin>>z;
    cout<<endl;
}

float max1(float x, float y){
    float largest1=x;
    if (y>x)largest1=y;
    return largest1;
}
    
float max2(float x, float y, float z){
    float largest2=x;
    if(y>x && y>z)largest2=y;
    if(z>x && z>y)largest2=z;
    return largest2;
}
