
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 19, 2022, 10:40 AM
 * Purpose:  Rock-Paper-Scissors
 */

//System Level Libraries
#include <iostream>  //Input-Output Library


using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
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
    //Exit the program
    return 0;
}