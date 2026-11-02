#include<iostream>
using namespace std;
void de(int de){
    try
    {
      if(de==0){
        throw "0";
      } 
      else if(de==10){
        throw "YES IT IS 10";
      }   
    }
    catch(char* e)
    {
       if

    }
}
int main(){
    de(0);
    de(10);
    return 0;
}