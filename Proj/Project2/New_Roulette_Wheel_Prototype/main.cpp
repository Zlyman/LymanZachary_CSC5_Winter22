
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on February 7, 2022 4:00 PM
 * Purpose: Prototype new roulette wheel based on more advanced concepts
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>
#include <ctime>
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
    int random,space,indx;
    int nGames=10;
    int wheel[ROWS][COLS]={{37,28,9,26,30,11,7,20,32,17,5,22,34,15,3,24,36,13,
                             1,38,27,10,25,29,12,8,19,31,18,6,21,33,16,4,23,35,
                            14,2},{0,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,0,2,1,
                             2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}};
    string color;
    //Initialize Variables
    random=rand()%720;
    indx=spinWhl(wheel,COLS, random);
    
    //Map the inputs/knowns to the outputs
    space=asgnNum (wheel,COLS,indx);
    color=asgnClr(wheel,COLS,indx);
    
    //Display the outputs
    cout<<"Ball landed on "<<space<<" "<<color<<endl;
    //Exit the program
    return 0;
}

string asgnClr(int array[ROWS][COLS],int size,int indx){
    int colNum;
    string color;
    for(int i=0;i<indx;i++){
        colNum=array[1][i];
    }
    switch(colNum){
        case 0:color="";break;
        case 1:color="black";break;
        default:color="red";break;
    }
    return color;
}

int asgnNum (int array[ROWS][COLS],int size,int indx){
    int space;
    for(int i=0;i<indx;i++){
        space=array[0][i];
    }
    return space;
}

int spinWhl(int array[ROWS][COLS],int size,int random){
    int spin,space,colNum;
    float indx;
    string color;
    if(random>360)spin=random-360;
    else spin=random;
    indx=spin/9.47f;
    floor(indx);
    return indx;
}


