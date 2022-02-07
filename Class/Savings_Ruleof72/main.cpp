
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 *
 * Created on January 19, 2022, 11:35 AM
 * Purpose: Calculate savings with rule of 72
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const unsigned char PERCENT=100;//Conversion of percent to decimal 

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,       //Present Value in $'s
     intRate,       //Interest Rate in %
      intrst,       //Yearly interest $'s
          fv;       //Future Value $'s
    unsigned char nCmpPds;  //Number of compounding periods years
    unsigned short stYear;//Starting Year
    
    //Initialize Variables
    pv=1e2f;//$100
    intRate=12;//6%
    nCmpPds=6;//12 years
    stYear=2022;//Year to start saving
    
    //Map the inputs/knowns to the outputs
    //Display outputs 
    nCmpPds=72/intRate;//Number of year to approx double initial savings
    intRate/=PERCENT;
    fv=pv;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<pv<<" = Initial Principle $'s"<<endl;
    cout<<intRate*PERCENT<<" = Interest Rate %"<<endl;
    cout<<endl<<setw(10)<<"Years"<<setw(10)<<"Year"<<
            setw(12)<<"Retirement"<<setw(10)<<"Interest"<<endl;
    for(int years=0;years<=nCmpPds;years++){
        intrst=fv*intRate;
        
        cout<<setw(10)<<years<<setw(10)<<years+stYear<<setw(10)<<
                fv<<setw(10)<<intrst<<endl;
        fv+=intrst;
    }
   
    //Exit the program
    return 0;
}

