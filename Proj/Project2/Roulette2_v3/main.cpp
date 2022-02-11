
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 10, 2022, 8:00 PM
 * Purpose: Implament new wheel and functions
 */


// System Level Libraries

#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
#include <string>   //String Library
#include <cstdlib>  //Need for random number
#include <ctime>    //Need for random number
#include <fstream>  //File I/O
#include <cmath>    //Math Library
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
bool choice(vector <unsigned char> &,vector <float> &,float,vector<int> &);
void readlog(fstream &,string,unsigned char &);
void sgleNum(vector<int> ,unsigned char);
unsigned char readSel(vector<unsigned char> &);
float readBet(vector<float> &,int);
bool quit;
//Execution begins here!

int main(int argc, char** argv) {

    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    unsigned int random;
    int space,indx,sglNum;     //Number of games to play test
    int wheel[ROWS][COLS]={{37,28,9,26,30,11,7,20,32,17,5,22,34,15,3,24,36,13,
                             1,38,27,10,25,29,12,8,19,31,18,6,21,33,16,4,23,35,
                            14,2},{0,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,0,2,1,
                             2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}};
    vector<int> betNum;
    vector<unsigned char> select;
    vector<float> bet;
    float usrBank,betAmnt;
    unsigned char sel,//User selection
                  repeat;//Make repeative bets
    string ballPos,//Stores ball position for 0 and 00
           logLine,//Stores previous ball positions
             color;//Stores number color
    fstream ballLog;

    //Initialize Variables
    usrBank=200;
    
    
    //Resets ball log for a new game
    ballLog.open("BallLog.txt",ios::out);
        if(ballLog){
            ballLog<<"Ball Log"<<endl;
            ballLog.close();
        }
  
    //Map the inputs/knowns to the outputs
    do{
        cout<<"-----------------------ROULETTE-----------------------"<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Enter bet by choosing an option from the menu"<<endl;
        cout<<"Please remember that the minimum bet is $5.00"<<endl;
        
        
        quit=choice(select,bet,usrBank,betNum);
        if(quit==true)sel='q';
        
        

        cout<<"*******************************************"<<endl;
        
        
    for(int i=0;i<select.size();i++){
        //Reset variables
        indx=0;
        betAmnt=0;//Resets bet to 0
        //Read bet from vector
        betAmnt=bet[i];
        //Remove bet from user's bank
        usrBank=usrBank-betAmnt;
        //Read selection vector
        sel=select[i];
        //Read single number vector
        sglNum=betNum[i];
        //Simulate the spin of a roulette wheel
        random=rand()%720;
            
        //Simulate the spin of a roulette wheel
        indx=spinWhl(wheel,COLS, random);
        //Set number and color for each number on roulette wheel
        space=asgnNum (wheel,COLS,indx);
        color=asgnClr(wheel,COLS,indx);
            

        //If ball lands on non zero space
        if(space>0&&space<37){
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"The ball landed on "<<space;
            //Ball lands on black number
            //Win on black
            if(color=="black"){
                cout<<" "<<color<<endl;
                if(sel=='b'||sel=='B'){//Win on black
                    usrBank+=betAmnt*2;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='r'||sel=='R'){//Lose on black
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }
            }//Ball lands on red number
            else if(color=="red"){ 
                cout<<" "<<color<<endl;
                if(sel=='r'||sel=='R'){//Win on Red
                    usrBank+=betAmnt*2;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='b'||sel=='B'){//Lose on Red
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }
            }//Ball lands on even number  
            if(space%2==0){
                if(sel=='e'||sel=='E'){//Win on even
                    usrBank+=betAmnt+betAmnt;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='o'||sel=='O'){//Lose on even
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }
            }//Ball lands on odd number
            else if(space%2==1){
                if(sel=='o'||sel=='O'){//Win on odd
                    usrBank+=betAmnt*2;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='e'||sel=='E'){//Lose on odd
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }
            }//Ball lands 1-18
            if(space>=1&&space<19){
                if(sel=='l'||sel=='L'){//Win on  low
                    usrBank+=betAmnt+betAmnt;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='h'||sel=='H'){//Lose on low
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }   
            }//Ball lands 19-36
            else if(space>18&&space<37){
                if(sel=='h'||sel=='H'){//Win on high
                    usrBank+=betAmnt*2;
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(sel=='l'||sel=='L'){//Lose on high
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                }
            }
            ballLog.open("BallLog.txt",ios::app);
            if(ballLog){
               ballLog<<setw(2)<<space<<" - ";
               if(color=="black")ballLog<<color<<endl;
               if(color=="red")ballLog<<color<<endl;
               ballLog.close();
            }

        }//If ball lands on zero space
        else{
            space==37?ballPos="0":ballPos="00";

            ballLog.open("BallLog.txt",ios::app);
            if(ballLog){
               ballLog<<setw(2)<<ballPos<<endl;
               ballLog.close();
            }
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"The ball landed on "<<ballPos<<endl;
            if(sel!='s'||sel!='S')cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
        }
        if(sel=='s'||sel=='S'){
            if(sglNum==space){
                usrBank+=(35*betAmnt)+betAmnt;
                cout<<"You win  $"<<setw(6)<<(35*betAmnt)+betAmnt<<endl;
            }
            else if(sglNum!=space){
                cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
            }
        }
        cout<<"You have $"<<setw(6)<<usrBank<<endl;
        if(usrBank<5){
            cout<<"You have insuficient funds - GAME OVER!"<<endl;
            sel='q';
        }
        if(sel=='q'||sel=='Q'){
            cout<<"Payout   $"<<setw(6)<<usrBank<<endl;
            cout<<"-----------------------END-GAME-----------------------";
        }
    }
         //Empty Vectors to make new bets
        select.clear();
        bet.clear();
        betNum.clear();
    }while(sel!='q'&&sel!='Q');
    
 
    //Exit the program

    return 0;

}

void sgleNum(vector<int> betNum,unsigned char s){
    int num;
    if(s=='s'||s=='S'){
        cout<<"What number would you like to bet on?"<<endl;
        cout<<"Input a number 1-36, or 37 for 0 or 38 for 00"<<endl;
        cin>>num;
        betNum.push_back(num);
    }
    else betNum.push_back(0);
}

void log(fstream &ballLog,string logLine){
    //Display Previous ball positions  
    ballLog.open("BallLog.txt",ios::in);
    if(ballLog){
       while(getline(ballLog,logLine)){
           cout<<logLine<<endl;
        }
       ballLog.close();
    }
}

bool choice(vector <unsigned char> &select,vector <float> &bet
    ,float usrBank,vector<int> &betNum){
    unsigned char repeat,s;
    float b;
    bool quit;
    fstream ballLog;
    string logLine;
    dpslMnu(usrBank);
    repeat='n';
    do{
       cout<<"Input your selection"<<endl;
       cin>>s;
       if(repeat=='y'||repeat=='Y'){
           while(s=='q'||s=='Q'){
               cout<<"You have a bet in progress"<<endl;
               cout<<"Please choose a bet from the menu"<<endl;
               cin>>s;
           }
       }
       if(s!='q'&&s!='Q'){
           if(s=='p'||s=='P'){
               log(ballLog,logLine);
               cout<<"Enter new selection"<<endl;
               cin>>s;
           }
           select.push_back(s);
           if(s=='s'||s=='S'){
               int num;
               if(s=='s'||s=='S'){
                    cout<<"What number would you like to bet on?"<<endl;
                    cout<<"Input a number 1-36, or 37 for 0 or 38 for 00"<<endl;
                    cin>>num;
                    betNum.push_back(num);
                }
                else betNum.push_back(1);
           }
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
           repeat='n';
           return quit=true;
       }
    }while(repeat!='n'&&repeat!='N');
    return quit=false;
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


