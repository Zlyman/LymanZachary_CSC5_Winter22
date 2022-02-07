
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on January 29, 2022, 5:45 PM
 * Purpose: Play Roulette Ver.3
 */

// System Level Libraries

#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
#include <string>
#include <cstdlib>  //Need for random number
#include <ctime>    //Need for random number

using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables

// These are recognized constants from the sciences

//Physics/Chemistry/Engineering and Conversions between

//systems of units!

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {

    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    int nGames;     //Number of games to play test
    unsigned int const NUMMIN =1;
    unsigned int const NUMMAX =38;
    unsigned int random,betNum;
    float usrBank,bet,house;
    unsigned char select;
    string ballPos;
    bool black, red, green;

    //Initialize Variables
    usrBank=200;
    house=0;

    //Map the inputs/knowns to the outputs
    cout<<"-----------------------ROULETTE-----------------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"You have $"<<usrBank<<" to bet with."<<endl;
    cout<<"Enter your bet by choosing an option from the menu"
           <<"\nfollowed by a dollar amount."<<endl;
    cout<<"Please remember that the minimum bet is $5.00"<<endl;
    do{
    bet=0;
    cout<<"-------------------------MENU-------------------------"<<endl;
    cout<<"B - All Black Numbers      -  1:1 Payout"<<endl;
    cout<<"R - All Red Numbers        -  1:1 Payout"<<endl;
    cout<<"E - All Even Numbers       -  1:1 Payout"<<endl;
    cout<<"O - All Odd Numbers        -  1:1 Payout"<<endl;
    cout<<"L - Numbers from 1 to 18   -  1:1 Payout"<<endl;
    cout<<"H - Numbers from 19 to 36  -  1:1 Payout"<<endl;
    cout<<"S - Chose a Single Number  - 35:1 Payout"<<endl;
    cout<<"Q - Quit playing"<<endl;
    cout<<"Input your selection"<<endl;
    cin>>select;
    cout<<"Input your bet in dollars"<<endl;
    cin>>bet;
    //Validate user input
    while(bet<5){
        cout<<"$5.00 minimum bet"<<endl;
        cout<<"Please enter a valid bet"<<endl;
        cin>>select>>bet;
    }
    if(select=='s'||select=='S'){
        cout<<"What number would you like to bet on?"<<endl;
        cout<<"Input a number 1-36, or 37 for 0 or 38 for 00"<<endl;
        cin>>betNum;
    }
    usrBank=usrBank-bet;
        //Reset variables
        black=red=green=false;
        //Simulate the spin of a roulette wheel
        random=rand()%(NUMMAX-NUMMIN +1)+NUMMIN;
        //Set a color for each number of the roulette wheel
        switch(random){
            case 1:red=true;break;
            case 2:black=true;break;
            case 3:red=true;break;
            case 4:black=true;break;
            case 5:red=true;break;
            case 6:black=true;break;
            case 7:red=true;break;
            case 8:black=true;break;
            case 9:red=true;break;
            case 10:black=true;break;
            case 11:red=true;break;
            case 12:black=true;break;
            case 13:red=true;break;
            case 14:black=true;break;
            case 15:red=true;break;
            case 16:black=true;break;
            case 17:red=true;break;
            case 18:black=true;break;
            case 19:red=true;break;
            case 20:black=true;break;
            case 21:red=true;break;
            case 22:black=true;break;
            case 23:red=true;break;
            case 24:black=true;break;
            case 25:red=true;break;
            case 26:black=true;break;
            case 27:red=true;break;
            case 28:black=true;break;
            case 29:black=true;break;
            case 30:red=true;break;
            case 31:black=true;break;
            case 32:red=true;break;
            case 33:black=true;break;
            case 34:red=true;break;
            case 35:black=true;break;
            case 36:red=true;break;
            default:green=true;break;         
        }
     
        //If ball lands on non zero space
        if(random<36){
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"The ball landed on "<<random;
            //Ball lands on black number
            //Win on black
            if(black==true){
                cout<<" black"<<endl;
                if(select=='b'||select=='B'){//Win on black
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='r'||select=='R'){//Lose on black
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            //Ball lands on red number
            else if(red==true){ 
                cout<<" Red"<<endl;
                if(select=='r'||select=='R'){//Win on Red
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='b'||select=='B'){//Lose on Red
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            //Ball lands on even number  
            if(random%2==0){
                if(select=='e'||select=='E'){//Win on even
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='o'||select=='O'){//Lose on even
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            //Ball lands on odd number
            else if(random%2==1){
                if(select=='o'||select=='O'){//Win on odd
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='e'||select=='E'){//Lose on odd
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            //Ball lands 1-18
            if(random>=1&&random<19){
                if(select=='l'||select=='L'){//Win on  low
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='h'||select=='H'){//Lose on low
                    cout<<"You lose $"<<bet<<endl;
                }   
            }
            //Ball lands 19-36
            else if(random>18&&random<37){
                if(select=='h'||select=='H'){//Win on high
                    usrBank+=bet+bet;
                    cout<<"You win $"<<bet+bet<<endl;
                }
                else if(select=='l'||select=='L'){//Lose on high
                    cout<<"You lose $"<<bet<<endl;
                }
            }
        }
        //If ball lands on zero space
        if(random>36){
            if(random==37){
                ballPos="0";
                if(select=='o'||select=='O'){
                    usrBank+=(35*bet)+bet;
                    cout<<"You win $"<<(35*bet)+bet<<endl;
                }
                else if(select=='d'||select=='D'){
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            if(random==38){
                ballPos="00";
                if(select=='d'||select=='D'){
                    usrBank+=(35*bet)+bet;
                    cout<<"You win $"<<(35*bet)+bet<<endl;
                }
                else if(select=='o'||select=='O'){
                    cout<<"You lose $"<<bet<<endl;
                }
            }
            cout<<"------------------------RESULT------------------------"<<endl;
            cout<<"The ball landed on "<<ballPos<<endl;
        }
        if(select=='s'||select=='S'){
            if(betNum==random){
                usrBank+=(35*bet)+bet;
                cout<<"You win $"<<(35*bet)+bet<<endl;
            }
            else if(betNum!=random){
                cout<<"You lose $"<<bet<<endl;
            }
        }
        cout<<"You have $"<<usrBank<<" remaining"<<endl;
        if(usrBank<5){
            cout<<"You have insificient funds - GAME OVER!"<<endl;
            select='q';
        }
        if(select=='q'||select=='Q')cout<<"final payout $"<<usrBank<<endl;
    }
    while(select!='q'&&select!='Q');
    //Display the outputs
 
    //Exit the program

    return 0;

}