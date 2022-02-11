
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 10, 2022, 5:00 PM
 * Purpose: Implament new wheel and functions 
 */

// System Level Libraries

#include <iostream> //Input-Output Library
#include <string>
#include <cstdlib>  //Need for random number
#include <ctime>    //Need for random number
#include <cmath>

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
    string color,ballPos;
    int wBlk, wRed, wEven, wOdd, wLow, wHigh, wZero, wDblZ;
    int lBlk, lRed, lEven, lOdd, lLow, lHigh, lZero, lDblZ;
    unsigned int random;

    //Initialize Variables
    nGames=1000000;
    wBlk=wRed=wEven=wOdd=wLow=wHigh=wZero=wDblZ=0;
    lBlk=lRed=lEven=lOdd=lLow=lHigh=lZero=lDblZ=0;

    //Map the inputs/knowns to the outputs
    for(int games=1;games<nGames;games++){
        random=rand()%720;
        indx=0;
        //Simulate the spin of a roulette wheel
        indx=spinWhl(wheel,COLS, random);
        //Set number and color for each number on roulette wheel
        space=asgnNum (wheel,COLS,indx);
        color=asgnClr(wheel,COLS,indx);
        //If ball lands on non zero space
        if(space>0&&space<37){
            if(color=="black"){    //Ball lands on black number
                wBlk+=1;
            }
            if(color=="red"){       //Ball lands on red number
                wRed+=1;
            }
           
                
            if(space%2==0){//Ball lands on even number
                wEven+=1;
            }
            if(space%2==1){                       //Ball lands on odd number
                wOdd+=1;
            }
           
            if(space>=1&&space<19){//Ball lands 1-18
                wLow+=1;
            }
            if(space>18&&space<37){//Ball lands 19-36
                wHigh+=1;
            }
            
        }
        //If ball lands on zero space
        if(space>36){
            if(space==37){
                ballPos="0";
                wZero+=1;
                lDblZ+=1;
            }
            if(space==38){
                ballPos="00";
                wDblZ+=1;
                lZero+=1;
            }
        }
    }

    //Display the outputs
    //cout<<"Ball landed on"<<space<<" "<<color<<endl;
    cout<<"Black wins =  "<<wBlk<<"   Percentage = "<<(static_cast<float>(wBlk)/nGames)*100<<"%"<<endl;
    cout<<"Red wins =    "<<wRed<<"   Percentage = "<<(static_cast<float>(wRed)/nGames)*100<<"%"<<endl;
    cout<<"Even wins =   "<<wEven<<"   Percentage = "<<(static_cast<float>(wEven)/nGames)*100<<"%"<<endl;
    cout<<"Odd wins =    "<<wOdd<<"   Percentage = "<<(static_cast<float>(wOdd)/nGames)*100<<"%"<<endl;
    cout<<"Low wins =    "<<wLow<<"   Percentage = "<<(static_cast<float>(wLow)/nGames)*100<<"%"<<endl;
    cout<<"High wins =   "<<wHigh<<"   Percentage = "<<(static_cast<float>(wHigh)/nGames)*100<<"%"<<endl;
    cout<<"0 wins =       "<<wZero<<"   Percentage = "<<(static_cast<float>(wZero)/nGames)*100<<"%"<<endl;
    cout<<"00 wins =      "<<wDblZ<<"   Percentage = "<<(static_cast<float>(wDblZ)/nGames)*100<<"%"<<endl;
    //Exit the program

    return 0;

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
