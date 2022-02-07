
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 4, 2022, 10:40 PM
 * Purpose: Hmwk 1
 *          hold and display 5 items price
 *          Calculate subtotal of sale
 *          Calculate amount of sales tax
 *          Calculate total sale
 */
// System Level Libraries
#include <iostream> //Input-Output Library
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
    
    //Declare Variables
    float item1, item2, item3, item4, item5,
          subttl,//Sale subtotal
          tax,//% sales tax
          taxamnt,//Amount of sales tax
          total;//Sale total
    //Initialize Variables
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95;
    item5=3.95;
    tax=0.07;
    
    //Map the inputs/knowns to the outputs
    subttl=item1+item2+item3+item4+item5;
    taxamnt=subttl*tax;
    total=taxamnt+subttl;
    //Display the outputs
    cout<<"Items Purchased"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Item1: $"<<item1<<endl;
    cout<<"Item2: $"<<item2<<endl;
    cout<<"Item3: $"<<item3<<endl;
    cout<<"Item4: $"<<item4<<endl;
    cout<<"Item5: $"<<item5<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Subtotal: $"<<subttl<<endl;
    cout<<"Tax amount: $"<<taxamnt<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Total: $"<<total<<endl;
    
    //Exit the program
    return 0;
}

