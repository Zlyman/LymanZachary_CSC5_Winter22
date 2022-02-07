
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on: February 5, 2022 11:00 PM
 * Purpose:  Binary Search using bubble sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
int binSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    indx=binSrch(array,SIZE,val);
    if(indx!=-1)cout<<val<<" was found at indx = "<<indx<<endl;
    else cout<<val<<" was not found in the array"<<endl;

    //Exit stage right or left!
    return 0;
}

int  binSrch(int a[],int n,int val){
    int high=n-1,low=0;
    do{
        int middle=(high+low)/2;
        if(val==a[middle]){
            return middle;
        }else if(val<a[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<high);
    return -1;
}

void bublSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        n--;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                swap=true;
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }while(swap);
}

void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
