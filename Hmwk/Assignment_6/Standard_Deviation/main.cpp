
/* 
 * File:   main.cpp
 * Author: Zachary Lyman
 * Created on: February 5 2:30 PM
 * Purpose: Calculate standard deviation 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(7);
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

float stdX(float a[],int n){
    float mean=avgX(a,n);
    float sum=0.0f;
    for(int i=0;i<n;i++){
        sum=sum+pow((a[i]-mean),2);
    }
    sum=sum/(n-1);
    return sqrt(sum);
}

float avgX(float a[],int n){
    float sum=0.0f;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    return(static_cast<float>(sum)/n);
}

void  print(float a[],int s,int n){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
        if(i%n==(n-1))cout<<endl;
    }
}

void  init(float a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}