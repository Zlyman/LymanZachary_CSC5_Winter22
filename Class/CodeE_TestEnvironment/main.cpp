
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


void print(const string &);
void read(const char [],string &);
int compare(const string &,const string &,string &);


void read(const char fileKey[],string & input){

   ifstream infile;
   string ans;//for read line
   cout<<"Loading the file........"<<endl;
   infile.open (fileKey); //name of file here. plz mention Complete path if file is not at root
   input="";
   if (infile.is_open()) //if file opened
   {
       while(infile>>ans) { //get row from text file
           input +=ans;
       }
       infile.close(); //close file
       cout<<"File scan done........"<<endl;

   }
   else //if file not found show the below message
   {
       cout << "Sorry, we could not find the file." << endl;
   }
}
void print(const string & input){
   for(unsigned int i=0;i<input.length();i++){
       cout<<input[i]<<" ";
   }
   cout<<endl;
}

int compare(const string & key,const string & ans,string & score){
   score ="";
   int scoreP=0;
   for(unsigned int i=0;i<key.length();i++){
           if(key[i]==ans[i]){
               score+="C";
               scoreP++;
           }else{
               score+="W";
           }
       }
   return scoreP;
}
int main(int argc, char** argv) {

   string key,answers,score;
   char fileKey[]="key.dat",fileAns[]="answer.dat";
   float pRight;

   read(fileKey,key);
   read(fileAns,answers);


   pRight=compare(key,answers,score);

   cout<<"Key ";print(key);
   cout<<"Answers ";print(answers);
   cout<<"C/W ";print(score);
   cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;

   return 0;
}