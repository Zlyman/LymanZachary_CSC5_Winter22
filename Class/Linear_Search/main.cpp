
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on February 3, 2022, 10:20 AM
 * Purpose: Linear Search
 */
// System Level Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Library
#include <ctime>    //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables 
// These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
int linSrch(int [],int,int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
     int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    prntAry(array,SIZE,10);
    
    //Map the inputs/knowns to the outputs
    int val=rand()%90+10;
    int indx=linSrch(array,SIZE,val);
    
    //Display the outputs
     prntAry(array,SIZE,10);
    cout<<"Value to find = "<<val<<endl;
    if(indx!=-1)cout<<val<<" was found at index = "<<indx<<endl;
    else cout<<val<<" was not found in the array"<<endl;
   
    
    //Exit the program
    return 0;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    
}

