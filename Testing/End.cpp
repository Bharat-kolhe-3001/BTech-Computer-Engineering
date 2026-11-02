#include<iostream>
using namespace std;
void disapaly(int b,int v){
  try {
    if(b==10){
            throw"It s error";
    } 
    
  }
  catch(char const* error){

    cout<<"Error are genrate"<<error;

  }
  try{
    if(v==b){
      throw"It's same value of all";

    }
   
  }
  catch (char const* e){
    cout<<"It value are same"<<e;
  }
  }
int main(){
  int b;
  int v;
  cout<<"Enter b value";
  cin>>b;
  cout<<"Enter v value";
  cin>>v;
  disapaly(b,v);
 return 0;
  }