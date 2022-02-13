
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 11, 2022, 1:00 PM
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
void dspBL(vector<float> &);
void dspSL(vector<unsigned char> &);
void bublSrt(vector<unsigned char> &,vector<float> &);
void fillAns(int[],int);
void bblSrtA(int[],int);
int  binSrch(int [],int,int);
//Execution begins here!

int main(int argc, char** argv) {

    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    const int ANSWR=100;
    unsigned int random;
    int space,indx,sglNum;     
    int wheel[ROWS][COLS]={{37,28,9,26,30,11,7,20,32,17,5,22,34,15,3,24,36,13,
                             1,38,27,10,25,29,12,8,19,31,18,6,21,33,16,4,23,35,
                            14,2},{0,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,0,2,1,
                             2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}};
    int ans[ANSWR];
    vector<int> betNum;
    vector<unsigned char> select;
    vector<float> bet;
    vector<float> betLog;
    vector<unsigned char> selLog;
    float usrBank,betAmnt;
    unsigned char sel,//User selection
               betSel;
    string ballPos,//Stores ball position for 0 and 00
           logLine,//Stores previous ball positions
             color;//Stores number color
    fstream ballLog;
    //bool quit;

    //Initialize Variables
    usrBank=200;
    sel='B';
    
    
    //Resets ball log for a new game
    ballLog.open("BallLog.txt",ios::out);
        if(ballLog){
            ballLog<<"Ball Log"<<endl;
            ballLog.close();
        }
 
    //Map the inputs/knowns to the outputs
    //Functions to fill and sort answer array
    fillAns(ans,ANSWR);
    bblSrtA(ans,ANSWR);
    
    do{
        //Game Header
        cout<<"-----------------------ROULETTE-----------------------"<<endl;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Enter bet by choosing an option from the menu"<<endl;
        cout<<"Please remember that the minimum bet is $5.00"<<endl;
        
        //Calls choice function for player input
        if(choice(select,bet,usrBank,betNum)){
            sel='q';
        }
        cout<<"******************************************************"<<endl;
        indx=0;
        //Simulate the spin of a roulette wheel
        random=rand()%720;
        indx=spinWhl(wheel,COLS, random);
        //Set number and color for each number on roulette wheel
        space=asgnNum (wheel,COLS,indx);
        color=asgnClr(wheel,COLS,indx);
        
    //Loop to determine bet results    
    for(unsigned int i=0;i<select.size();i++){
        //Reset variables
        betAmnt=0;//Resets bet to 0
        //Read bet from vector
        betAmnt=bet[i];
        //Remove bet from user's bank
        usrBank=usrBank-betAmnt;
        //Read selection vector
        betSel=select[i];
        //Read single number vector
        sglNum=betNum[i];
        //Inputs ball position to a file
        if(i==0){
            if(space>0&&space<37){
                ballLog.open("BallLog.txt",ios::app);
                if(ballLog){
                    ballLog<<setw(2)<<space<<" - ";
                    if(color=="black")ballLog<<color<<endl;
                    if(color=="red")ballLog<<color<<endl;
                    ballLog.close();
                }
            }
            else{
                space==37?ballPos="0":ballPos="00";
                ballLog.open("BallLog.txt",ios::app);
                if(ballLog){
                    ballLog<<setw(2)<<ballPos<<endl;
                    ballLog.close();
                }
            }
        }
        //If ball lands on non zero space
        if(space>0&&space<37){
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"Your bet - "<<betSel<<" - $"<<betAmnt;
            cout<<"\nThe ball landed on "<<space;
            //Ball lands on black number
            //Win on black
            if(color=="black"){
                cout<<" "<<color<<endl;
                if(betSel=='b'||betSel=='B'){//Win on black
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='r'||betSel=='R'){//Lose on black
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }
            }//Ball lands on red number
            else if(color=="red"){
                cout<<" "<<color<<endl;
                if(betSel=='r'||betSel=='R'){//Win on Red
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='b'||betSel=='B'){//Lose on Red
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }
            }//Ball lands on even number  
            if(space%2==0){
                if(betSel=='e'||betSel=='E'){//Win on even
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='o'||betSel=='O'){//Lose on even
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }
            }//Ball lands on odd number
            else if(space%2==1){
                if(betSel=='o'||betSel=='O'){//Win on odd
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='e'||betSel=='E'){//Lose on odd
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }
            }//Ball lands 1-18
            if(space>=1&&space<19){
                if(betSel=='l'||betSel=='L'){//Win on  low
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='h'||betSel=='H'){//Lose on low
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }   
            }//Ball lands 19-36
            else if(space>18&&space<37){
                if(betSel=='h'||betSel=='H'){//Win on high
                    usrBank+=betAmnt*2;
                    betLog.push_back(betAmnt*2);
                    cout<<"You win  $"<<setw(6)<<betAmnt*2<<endl;
                }
                else if(betSel=='l'||betSel=='L'){//Lose on high
                    cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                    betLog.push_back(0);
                }
            }
            selLog.push_back(betSel);
        }//If ball lands on zero space
        else{
            space==37?ballPos="0":ballPos="00";
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"The ball landed on "<<ballPos<<endl;
            if(betSel!='s'||betSel!='S')cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
            selLog.push_back(betSel);
            betLog.push_back(0);
        }
        if(betSel=='s'||betSel=='S'){
            if(sglNum==space){
                usrBank+=(35*betAmnt)+betAmnt;
                betLog.push_back((35*betAmnt)+betAmnt);
                cout<<"You win  $"<<setw(6)<<(35*betAmnt)+betAmnt<<endl;
            }
            else if(sglNum!=space){
                cout<<"You lose $"<<setw(6)<<betAmnt<<endl;
                betLog.push_back(0);
            }
        }
        cout<<"You have $"<<setw(6)<<usrBank<<endl;
        if(usrBank<5){
            cout<<"You have insuficient funds - GAME OVER!"<<endl;
            sel='q';
        }
        if(sel=='q'||sel=='Q'){
            cout<<"Payout   $"<<setw(6)<<usrBank<<endl;
            cout<<"-----------------------END-GAME-----------------------"<<endl;
        }
    }

        //Empty Vectors to make new bets
        select.clear();
        bet.clear();
        betNum.clear();
    }while(sel!='q'&&sel!='Q');
     cout<<"-----------------------BET--LOG-----------------------"<<endl;
    bublSrt(selLog,betLog);
    dspSL(selLog);
    cout<<endl;
    dspBL(betLog);
    cout<<endl;
    cout<<"Payout   $"<<setw(6)<<usrBank<<endl;
    cout<<"-----------------------END-GAME-----------------------";
    cout<<"\nWhat is the answer to the ultimate question in life?"<<endl;
    int val=42;
    int ansI=binSrch(ans,ANSWR,val);
    if(ansI!=-1)cout<<"The answer is: "<<val<<" at index "<<ansI<<endl;
    else cout<<"\nAnswer was not found"<<endl;
 
    //Exit the program

    return 0;

}

int  binSrch(int a[],int n,int val){
    static int gameNum
    int high=n-1,low=0;
    do{
        int middle=(high+low)/2;
        if(val==a[middle]){
            return middle;
        }else if(val<a[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<high);
    return -1;
}

void bblSrtA(int a[],int n){
    bool swap;
    do{
        swap=false;
        n--;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                swap=true;
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }while(swap);
}

void fillAns(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

void bublSrt(vector<unsigned char> &selLog, vector<float> &betLog){
    unsigned int n=selLog.size();
    bool swap;
    do{
        swap=false;
        n--;
        for(int i=0;i<n;i++){
            if(selLog[i]>selLog[i+1]){
                swap=true;
                unsigned char tempCh=selLog[i];
                selLog[i]=selLog[i+1];
                selLog[i+1]=tempCh;
                float tempFl=betLog[i];
                betLog[i]=betLog[i+1];
                betLog[i+1]=tempFl;
            }
        }
    }while(swap);
}

void dspBL(vector<float> &betLog){
    for(int i=0;i<betLog.size();i++){
        cout<<"$"<<betLog[i]<<"\t";
        if(i==5)cout<<endl;
    }
}

void dspSL(vector<unsigned char> &selLog){
    for(int i=0;i<selLog.size();i++){
        cout<<"  "<<selLog[i]<<"\t";
        if(i==5)cout<<endl;
    }
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
    //bool quit;
    fstream ballLog;
    string logLine;
    dpslMnu(usrBank);
    repeat='n';
    do{
       cout<<"Input your selection"<<endl;
       cin>>s;
       if(s=='x'||s=='X'){
           exit(0);
       }
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
                cout<<"What number would you like to bet on?"<<endl;
                cout<<"Input a number 1-36, or 37 for 0 or 38 for 00"<<endl;
                cin>>num;
                betNum.push_back(num);
           }
           else betNum.push_back(1);
           
           cout<<"Enter your bet in dollars"<<endl;
           cin>>b;
           //Validate user input
           while(b<5){
                cout<<"$5.00 minimum bet"<<endl;
                cout<<"Please enter a valid bet"<<endl;
                cin>>b;
            }
           while(b>usrBank){
               cout<<"You only have $"<<usrBank<<" to bet with"<<endl;
               cout<<"Enter a bet that does not exceed $"<<usrBank<<endl;
               cin>>b;
           }
           bet.push_back(b);
           usrBank-=b;
           cout<<"You have $"<<usrBank<<" remaining"<<endl;
           cout<<"Would you like to place more bets? Y/N"<<endl;
           cin>>repeat;
           if(usrBank<5.0f)repeat='n';
       }
       else{
           //repeat='n';
           return true;
       }
    }while(repeat!='n'&&repeat!='N');
    return false;
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
    cout<<"S - Chose a Single Number       - 35:1 Payout"<<endl;
    cout<<"P - View Previous Numbers"<<endl;
    cout<<"Q - Quit playing"<<endl;
    cout<<"X - Terminate Game - Warning! No Payout"<<endl;
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
    float indx;
    indx=random%38;
    return floor(indx);
}