
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 3, 2022, 11:20 AM
 * Purpose: All Projects start by using the CPP Template
 *          It shows where to place/code your projects
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>
#include <ctime>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
unsigned char rollDie(int,int);//Any number of sides and any number of dice
//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int nGames=36000000;
    int winTot,lossTot;
    int w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12;
    int l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12;
    //Initialize Variables
    w2=w3=w4=w5=w6=w7=w8=w9=w10=w11=w12=0;
    l2=l3=l4=l5=l6=l7=l8=l9=l10=l11=l12=0;
    winTot=lossTot=0;
    
    //Map the inputs/knowns to the outputs
    for(int game=1;game<=nGames;game++){
        
        unsigned char toss=rollDie(2,6);
        if(toss==7){
            w7++;winTot++;
        }
        else if(toss==11){
            w11++;winTot++;
        }
        if(toss==2){
            l2++;lossTot++;
        }
        if(toss==3){
            l3++;lossTot++;
        }
        if(toss==12){
            l12++;lossTot++;
        }
        bool loop;
        do{
            loop=true;
            unsigned char toss2=rollDie(2,6);
            if(toss2==7){
                lossTot++;
                loop=false;
            }
            else if(toss=toss2){
                 switch (toss){
                    case 2:w2++;break;
                    case 3:w3++;break;
                    case 4:w4++;break;
                    case 5:w5++;break;
                    case 6:w6++;break;
                    case 7:w7++;break;
                    case 8:w8++;break;
                    case 9:w9++;break;
                    case 10:w10++;break;
                    case 11:w11++;break;
                    case 12:w12++;break;
                 }
                 loop=false;
            }
        }while(loop);
    }
    cout<<"Sum  2="<<s2<<endl;
    cout<<"Sum 3="<<s3<<endl;
    cout<<"Sum 4="<<s4<<endl;
    cout<<"Sum 5="<<s5<<endl;
    cout<<"Sum 6="<<s6<<endl;
    cout<<"Sum 7="<<s7<<endl;
    cout<<"Sum 8="<<s8<<endl;
    cout<<"Sum 9="<<s9<<endl;
    cout<<"Sum 10="<<s10<<endl;
    cout<<"Sum 11="<<s11<<endl;
    cout<<"Sum 12="<<s12<<endl;
    cout<<"Sum All="<<s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12<<endl;
    cout<<"Num games="<<nGames<<endl;
    //Display the outputs
    
    //Exit the program
    return 0;
}

unsigned char rollDie(int nDice,int nSides){
    unsigned char sum=0;
    for(int dice=1;dice<=nDice;dice++){
        sum+=rand()%nSides+1;
    }
    return sum;
}

