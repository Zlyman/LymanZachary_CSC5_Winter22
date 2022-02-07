
/*
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 2, 2022, 2:00 PM
 * Purpose: Play Roulette Ver.4
 */
//Pseudocode
/*
 * Librarys needed:iostream, iomanip, string, cstdlib, ctime
 *   fstream, cmath
 * 
 * Initialize random seed, type cast to unsigned int
 * 
 * Declare Variables:NUMMIN, NUMMAX, random, betNum, spins
 *   usrBank, bet, select, repeat, ballPos, logLine, black
 *   red, green, ballLog
 * 
 * Initialize usrBank=$200
 * 
 * Write "Ball Log" to file to overwrite log from previous game
 * 
 * Display game and instructions to user:
 *   "You have money to bet with"
 *   "Enter bet by choosing an option from menu"
 *   "Remember minimum bet is $5.00"
 * 
 * Start do-while loop that the game will run in until end of game
 *   conditions are met
 * 
 * Reset bet=0 and spins=1 at the start of the loop
 * 
 * Display menu with multiple choices:Black/Red, Odd/Even, High/Low,
 *      single number, previous numbers, quit
 * 
 * Prompt for selection into select variable
 * 
 * Test if end game condition met, user inputs Q for quit
 * If not, continue through loop
 * 
 * Check if user inputs P for previous numbers.
 * If select==P, open ballLog file 
 * Check if ballLog opened successfully
 * Use while loop and getline to iterate through all of the strings 
 *      in the file and display them to the user
 * Close the file
 * Prompt user for new selection
 * 
 * Prompt user to input a bet in dollars
 * Verify that the bet meets the $5.00 minimum
 * If it does not, remind the user and re-prompt for bet input
 * Once a valid bet is placed, continue through loop.
 * 
 * Ask the user if they would like to play a repetitive bet
 * Prompt for Y/N answer
 * If Y, Prompt for how many repititions and store into spins variable
 *      and continue through loop
 * If N, continue through loop
 * 
 * Check if user input S for single number bets
 * Display to the user the valid numbers to bet on, 1-38
 * store in betNum variable
 * 
 * Start for loop that plays the game once by default or
 * as many number of times the user wished to repeat it
 * 
 * Subtract the bet from the users bank usrBank=usrBank-bet
 * 
 * set boolean color variables to false
 * 
 * simulate the wheel spin using random numbers
 * random=rand()%(NUMMAX-NUMMIN +1)+NUMMIN;
 * 
 * Use switch case to assign a color to the number generated
 * 
 * Evaluate if the number is non zero
 * 
 * Start displaying a portion of the result, it will be completed further 
 *      down the loop
 * Display the result header, "Ball landed on" random
 * 
 * If the number was black
 *  Display "black"
 *  If user bet on black
 *      usrBank+=bet+bet and display win and amount to user
 *  If user bet on red
 *      Display loss and amount lost to user
 * 
 * If the number was red
 *  Display "red"
 *  If user bet on red
 *      usrBank+=bet+bet and display win and amount to user
 *  If user bet on red
 *      Display loss and amount lost to user
 * 
 * If the number was even
 *  If user bet on even
 *     usrBank+=bet+bet and display win and amount to user
 *  If user bet on odd
 *      Display loss and amount lost to user
 * 
 * If the number was odd
 *  If the user bet on odd
 *     usrBank+=bet+bet and display win and amount to user
 *  If the user bet on even
 *     Display loss and amount lost to user 
 * 
 * If the number was between 1-18
 *  If the user bet on low
 *      usrBank+=bet+bet and display win and amount to user 
 *  If the user bet on high
 *      Display loss and amount lost to user   
 * 
 * If the number was between 19-36
 *  If the user bet on high
 *      usrBank+=bet+bet and display win and amount to user 
 *  If the user bet on low
 *      Display loss and amount lost to user
 * 
 * Open ballLog file to write
 * if number was black
 *      write random and "black" to file
 * if number was red
 *      write random and "red" to file
 * close ballLog file
 * 
 * If ball lands on zero space
 *  If random==37, ballPos="0"
 *  Else ballPos="00"
 * 
 * Open ballLog file to write
 *  Write ballPos into ballLog file
 * close ballLog file
 * 
 * Display result header
 * Display "Ball landed on" ballPos
 * If user did not select S for single number bet, display loss and lost amount
 * 
 * If user selects S for single number bet
 *  If betNum==random
 *      usrBank+=(35*bet)+bet
 *      Display win and amount
 *  else display loss and lost amount 
 * 
 * Display "You have $" usrBank money left
 *  If usrBank<5
 *      Display "You have insuficient funds - GAME OVER!"
 *      set select='Q'
 * 
 * If select='Q'
 *  Display "Payout $" usrBank
 *  Display end game footer
 * 
 * continue loop while select!='Q'
 * If select='Q'
 *  return 0
 * Exit Program
 
 
 
 
 */

// System Level Libraries

#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
#include <string>   //String Library
#include <cstdlib>  //Need for random number
#include <ctime>    //Need for random number
#include <fstream>  //File I/O
#include <cmath>    //Math Library


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
    const unsigned int NUMMIN =1;//Lowest number on a Roulette wheel
    const unsigned int NUMMAX =38;//Highest number on a Roulette wheel
    unsigned int random,betNum,spins;
    float usrBank,bet;
    unsigned char select,//User selection
                  repeat;//Make repeative bets
    string ballPos,//Stores ball position for 0 and 00
           logLine;//Stores previous ball positions
    bool black, red, green;//Set colors for numbers
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
    cout<<"-----------------------ROULETTE-----------------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"You have $"<<usrBank<<" to bet with."<<endl;
    cout<<"Enter bet by choosing an option from the menu"<<endl;
    cout<<"Please remember that the minimum bet is $5.00"<<endl;
    do{
    bet=0;//Resets bet to 0 
    spins=1;//Resets spins to 1
    cout<<"-------------------------MENU-------------------------"<<endl;
    cout<<"B - All Black Numbers      -  1:1 Payout"<<endl;
    cout<<"R - All Red Numbers        -  1:1 Payout"<<endl;
    cout<<"E - All Even Numbers       -  1:1 Payout"<<endl;
    cout<<"O - All Odd Numbers        -  1:1 Payout"<<endl;
    cout<<"L - Numbers from 1 to 18   -  1:1 Payout"<<endl;
    cout<<"H - Numbers from 19 to 36  -  1:1 Payout"<<endl;
    cout<<"S - Chose a Single Number  - 35:1 Payout"<<endl;
    cout<<"P - View Previous Numbers"<<endl;
    cout<<"Q - Quit playing"<<endl;
    cout<<"-------------------------PLAY-------------------------"<<endl;
    cout<<"Input your selection"<<endl;
    cin>>select;
    if(select!='q'&&select!='Q'){
        //Display Previous ball positions
        while(select=='p'||select=='P'){  
           ballLog.open("BallLog.txt",ios::in);
           if(ballLog){
               while(getline(ballLog,logLine)){
                   cout<<logLine<<endl;
                }
               ballLog.close();
            }
            cout<<"Input a new selection"<<endl;
            cin>>select;
        }
        if(select!='q'&&select!='Q'){
            cout<<"Input your bet in dollars"<<endl;
            cin>>bet;
                //Validate user input
                while(bet<5){
                    cout<<"$5.00 minimum bet"<<endl;
                    cout<<"Please enter a valid bet"<<endl;
                    cin>>bet;
                }

            cout<<"Would you like to have your bet repeat?"<<endl;
            cout<<"Y/N"<<endl;
            cin>>repeat;
            if(repeat=='y'||repeat=='Y'){
                cout<<"How many spins would you like to repeat?"<<endl;
                cin>>spins;
            }
        }
    }    
    //Input for single number bets
    if(select=='s'||select=='S'){
        cout<<"What number would you like to bet on?"<<endl;
        cout<<"Input a number 1-36, or 37 for 0 or 38 for 00"<<endl;
        cin>>betNum;
    }
    for(int i=1;i<spins+1;i++){
        //Remove bet from user's bank
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
            if(random<37){
                cout<<"------------------------RESULT------------------------"<<endl;
                cout<<"The ball landed on "<<random;
                //Ball lands on black number
                //Win on black
                if(black==true){
                    cout<<" black"<<endl;
                    if(select=='b'||select=='B'){//Win on black
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<pow(bet,1.0)+bet<<endl;
                    }
                    else if(select=='r'||select=='R'){//Lose on black
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }
                }
                //Ball lands on red number
                else if(red==true){ 
                    cout<<" Red"<<endl;
                    if(select=='r'||select=='R'){//Win on Red
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<bet+bet<<endl;
                    }
                    else if(select=='b'||select=='B'){//Lose on Red
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }
                }
                //Ball lands on even number  
                if(random%2==0){
                    if(select=='e'||select=='E'){//Win on even
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<bet+bet<<endl;
                    }
                    else if(select=='o'||select=='O'){//Lose on even
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }
                }
                //Ball lands on odd number
                else if(random%2==1){
                    if(select=='o'||select=='O'){//Win on odd
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<bet+bet<<endl;
                    }
                    else if(select=='e'||select=='E'){//Lose on odd
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }
                }
                //Ball lands 1-18
                if(random>=1&&random<19){
                    if(select=='l'||select=='L'){//Win on  low
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<bet+bet<<endl;
                    }
                    else if(select=='h'||select=='H'){//Lose on low
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }   
                }
                //Ball lands 19-36
                else if(random>18&&random<37){
                    if(select=='h'||select=='H'){//Win on high
                        usrBank+=bet+bet;
                        cout<<"You win  $"<<setw(6)<<bet+bet<<endl;
                    }
                    else if(select=='l'||select=='L'){//Lose on high
                        cout<<"You lose $"<<setw(6)<<bet<<endl;
                    }
                }
                ballLog.open("BallLog.txt",ios::app);
                if(ballLog){
                   ballLog<<setw(2)<<random<<" - ";
                   if(black==true)ballLog<<"Black"<<endl;
                   if(red==true)ballLog<<"Red"<<endl;
                   ballLog.close();
                }

            }
            //If ball lands on zero space
            else{
                random==37?ballPos="0":ballPos="00";
             
                ballLog.open("BallLog.txt",ios::app);
                if(ballLog){
                   ballLog<<setw(2)<<ballPos<<endl;
                   ballLog.close();
                }
                cout<<"------------------------RESULT------------------------"<<endl;
                cout<<"The ball landed on "<<ballPos<<endl;
                if(select!='s'||select!='S')cout<<"You lose $"<<setw(6)<<bet<<endl;
            }
            if(select=='s'||select=='S'){
                if(betNum==random){
                    usrBank+=(35*bet)+bet;
                    cout<<"You win  $"<<setw(6)<<(35*bet)+bet<<endl;
                }
                else if(betNum!=random){
                    cout<<"You lose $"<<setw(6)<<bet<<endl;
                }
            }
            cout<<"You have $"<<setw(6)<<usrBank<<endl;
            if(usrBank<5){
                cout<<"You have insificient funds - GAME OVER!"<<endl;
                select='q';
            }
            if(select=='q'||select=='Q'){
                cout<<"Payout   $"<<setw(6)<<usrBank<<endl;
                cout<<"-----------------------END-GAME-----------------------";
            }
        }
    }
    while(select!='q'&&select!='Q');
 
    //Exit the program

    return 0;

}