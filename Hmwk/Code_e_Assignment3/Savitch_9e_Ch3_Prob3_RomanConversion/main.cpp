
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 13, 2022, 11:20 AM
 * Purpose: Convert Roman Numeral Converter
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <cstring>  //String to hold Roman Numeral
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char n1000s, n100s, n10s, n1s;
    unsigned short arabic;
    string roman="";
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    //Validate input
    if(arabic<1000 || arabic>3000){
        cout<<arabic<<" is Out of Range!";
    }
    else{
        //Map the inputs/knowns to the outputs
        n1000s=arabic/1000;
        n100s=(arabic-n1000s*1000)/100;
        n10s=arabic%100/10;
        n1s=arabic%10;
        
        //Convert the 1000's place
        switch(n1000s){
            case 3:roman+="M";
            case 2:roman+="M";
            case 1:roman+="M";
        }
        //Convert the 100's place
        switch(n100s){
            case 9:roman+="CM";break;
            case 8:roman+="DCCC";break;
            case 7:roman+="DCC";break;
            case 6:roman+="DC";break;
            case 5:roman+="D";break;
            case 4:roman+="CD";break;
            case 3:roman+="CCC";break;
            case 2:roman+="CC";break;
            case 1:roman+="C";break;
        }
        //Convert the 10's place
        switch(n10s){
            case 9:roman+="XC";break;
            case 8:roman+="LXXX";break;
            case 7:roman+="LXX";break;
            case 6:roman+="LX";break;
            case 5:roman+="L";break;
            case 4:roman+="XL";break;
            case 3:roman+="XXX";break;
            case 2:roman+="XX";break;
            case 1:roman+="X";break;
        }
        //Convert the 1's place
        switch(n1s){
            case 9:roman+="IX";break;
            case 8:roman+="VIII";break;
            case 7:roman+="VII";break;
            case 6:roman+="VI";break;
            case 5:roman+="V";break;
            case 4:roman+="IV";break;
            case 3:roman+="III";break;
            case 2:roman+="II";break;
            case 1:roman+="I";break;
        }
        //Output the conversion
        cout<<arabic<<" is equal to "<<roman;
    }
    //Exit the program
    return 0;
}

