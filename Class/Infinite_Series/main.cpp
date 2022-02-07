
#include <iostream>

using namespace std;



int main()

{

int nterms; // variable declaration

float x; // variable declaration

cout<<"Enter x value: ";

cin>>x; // Accept x value

cout<<"Enter n value: ";

cin>>nterms; // Accept n value

float power,i,fx=0; // variable declaration

int count=0,fact; // variable declaration

power = x; // assign power with x



for (int i = 1; count<nterms; i=i+2){
    fact=1; // Initially fact is 1
    count++; // increment count
    for(int j=1;j<=i;j++){
        fact*=j; // calculate factorial
    }
    if(count%2==1){ // check reminder is 1
        fx=fx+(power/fact); // calculate exponent value
    }
    else{
        fx=fx-(power/fact); // calculate exponent value
    }
    power = power*x*x; // calculate power
}


cout<<fx; // calling function

return 0;

}







