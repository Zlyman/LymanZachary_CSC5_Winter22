
/* 
 * File:   
 * Author:Zachary Lyman
 * Created on January 23 4:35 PM 
 * Purpose: Convert and Calculate MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formating Library 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVL2G = 0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char  again{};
    int    liters1,     //Liters Car 1  
           liters2,     //Liters Car 2 
            miles1,     //Miles Car 1 
            miles2;     //Miles Car 2
    float   galns1,     //Gallons Car 1 
            galns2,     //Gallons Car 2 
              mpg1,     //Miles per Gallon Car 1 
              mpg2;     //Miles per Gallon car 2
    //Initialize or input i.e. set variable values
  liters1=liters2=0;
   miles1=miles2=0;
  
   do{
       //Car 1
       cout<<"Car 1"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>liters1;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>miles1;
    
       //Convert Liters to Gallons Car 1
       galns1=liters1*CNVL2G;
    
       //Calculate Miles per gallon Car 1
       mpg1=miles1/galns1;
    
       //Display output to user Car 1
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"miles per gallon: "<<setw(4)<<mpg1<<endl;
       
       //Car 2
       cout<<"\nCar 2"<<endl;
       cout<<"Enter number of liters of gasoline:"<<endl;
       cin>>liters2;
       cout<<"Enter number of miles traveled:"<<endl;
       cin>>miles2;
    
       //Convert Liters to Gallons Car 2
       galns2=liters2*CNVL2G;
    
       //Calculate Miles per gallon Car 2
       mpg2=miles2/galns2;
    
       //Display output to user Car 2
       cout<<fixed<<showpoint<<setprecision(2);
       cout<<"miles per gallon: "<<setw(4)<<mpg2<<endl;
       
       //Calculate and display which car is most efficient
       if(mpg1>mpg2){
           cout<<"\nCar 1 is more fuel efficient"<<endl;
       }
       else{
           cout<<"\nCar 2 is more fuel efficient"<<endl;
       }
       //Prompt the user to run again
       cout<<"\nAgain:"<<endl;
       cin>>again;
       if(again=='Y'||again=='y'){
          cout<<endl; 
       }
   }
   while(again=='Y'||again=='y');
   
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}