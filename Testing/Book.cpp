#include<iostream>
using namespace std;
class book{
public:
 int a[20];
 int b[20];
 int sum[20];
 int n,i;
void test(){
 cout<<"Enter size of arry:";
 cin>>n;
 for(i=0;i<n;i++){
   cout<<"Enter elements  |"<<i+1<<"is   :";
    cin>>a[i];
 }

 for(i=0;i<n;i++){
    cout<<"Enter elements"<<i+1<<"is:";
    cin>>b[i];
 }
 cout<<"Sum of both arry";
 for(i=0;i<n;i++){
    sum[i]=a[i]=b[i];
 }
}
};
int main(){
    book b1;
    b1.test();
    return 0;
}
 