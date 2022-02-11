
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 10, 2022, 5:00 PM
 * Purpose: Implament new wheel and functions 
 */

// System Level Libraries

#include <iostream> //Input-Output Library
#include <iomanip>
#include <string>
#include <cstdlib>  //Need for random number
#include <ctime>    //Need for random number
#include <cmath>
#include <vector>

using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const int ROWS=2;
const int COLS=38;
//Function Prototypes
int spinWhl(int [ROWS][COLS],int,int);
int asgnNum (int [ROWS][COLS],int,int);
string asgnClr(int [ROWS][COLS],int,int);
void dpslMnu(float);
unsigned char choice(vector <unsigned char> &,vector <float> &,float,unsigned char);
void dsplCh(vector<unsigned char> &);
void dsplBt(vector<float> &);
//Execution begins here!

int main(int argc, char** argv) {

    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nGames,space,indx;     //Number of games to play test
    int wheel[ROWS][COLS]={{37,28,9,26,30,11,7,20,32,17,5,22,34,15,3,24,36,13,
                             1,38,27,10,25,29,12,8,19,31,18,6,21,33,16,4,23,35,
                            14,2},{0,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,0,2,1,
                             2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}};
    vector<unsigned char> select;
    vector<float> bet;
    string color,ballPos;
    unsigned int random,spins;
    float usrBank,betAmnt;
    unsigned char sel;
    

    //Initialize Variables
    usrBank=200;
    //Display the outputs
    do{
        cout<<"-----------------------ROULETTE-----------------------"<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Enter bet by choosing an option from the menu"<<endl;
        cout<<"Please remember that the minimum bet is $5.00"<<endl;
        
        
        sel=choice(select,bet,usrBank,sel);
        dsplCh(select);
        dsplBt(bet);

        cout<<"*******************************************"<<endl;
        betAmnt=0;//Resets bet to 0 
        spins=1;//Resets spins to 1
        
        //Empty Vectors to make new bets
        select.clear();
        bet.clear();
    }while(sel!='q'&&sel!='Q');
    
   

    //Map the inputs/knowns to the outputs
   
 

    
    //Exit the program

    return 0;

}

void dsplBt(vector<float> &bet){
    for(unsigned int i=0;i<bet.size();i++){
        cout<<bet[i]<<" ";
    }
    cout<<endl;
}

void dsplCh(vector<unsigned char> &select){
    for(unsigned int i=0;i<select.size();i++){
        cout<<select[i]<<" ";
    }
    cout<<endl;
}

unsigned char choice(vector <unsigned char> &select,vector <float> &bet,float usrBank,unsigned char sel){
    unsigned char repeat,s;
    float b;
    dpslMnu(usrBank);
    do{
       cout<<"Input your selection"<<endl;
       cin>>s;
       if(s!='q'&&s!='Q'){
           select.push_back(s);
           cout<<"Enter your bet in dollars"<<endl;
           cin>>b;
           //Validate user input
            while(b<5){
            cout<<"$5.00 minimum bet"<<endl;
            cout<<"Please enter a valid bet"<<endl;
            cin>>b;
            }
           bet.push_back(b);
           cout<<"Would you like to place more bets? Y/N"<<endl;
           cin>>repeat;
       }
       else{
           sel='q';
       }
    }while(repeat!='n'&&repeat!='N');
}
   

void dpslMnu(float usrBank){
    cout<<"-------------------------MENU-------------------------"<<endl;
    cout<<"You have $"<<usrBank<<" to bet with."<<endl;
    cout<<"B - All Black Numbers           -  1:1 Payout"<<endl;
    cout<<"R - All Red Numbers             -  1:1 Payout"<<endl;
    cout<<"E - All Even Numbers            -  1:1 Payout"<<endl;
    cout<<"O - All Odd Numbers             -  1:1 Payout"<<endl;
    cout<<"L - Numbers from 1 to 18        -  1:1 Payout"<<endl;
    cout<<"H - Numbers from 19 to 36       -  1:1 Payout"<<endl;
    cout<<"C - First, Second, Third Column -  2:1 Payout"<<endl;
    cout<<"D - First, Second, Third Column -  2:1 Payout"<<endl;
    cout<<"F - Four Number Corner          -  8:1 Payout"<<endl;
    cout<<"S - Chose a Single Number       - 35:1 Payout"<<endl;
    cout<<"P - View Previous Numbers"<<endl;
    cout<<"Q - Quit playing"<<endl;
    cout<<"-------------------------PLAY-------------------------"<<endl;
}

string asgnClr(int array[ROWS][COLS],int size,int indx){
    int colNum;
    string color;
    colNum=array[1][indx];
    switch(colNum){
        case 1:color="black";break;
        case 2:color="red";break;
        default:color="green";break;
    }
    return color;
}

int asgnNum (int array[ROWS][COLS],int size,int indx){
    int space;
    space=array[0][indx];
    return space;
}

int spinWhl(int array[ROWS][COLS],int size,int random){
    int space,colNum;
    float indx;
    indx=random%38;
    return floor(indx);
}
