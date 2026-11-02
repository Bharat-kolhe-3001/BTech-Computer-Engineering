#include<iostream>
using  namespace std;
template<typename T>
void seectionsort(T arr[],int size){
   for(int i=0;i<size-1;i++){
    for(int j=i;j<size;j++){
        if(arr[i]>arr[j]){
            T temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
   }

}

template<typename T>
void dispaly(T arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"sorted array of element"<<i+1<<"  :"<<arr[i]<<"\n\n";
    }
}


int main(){
    int array[20];
    int N,i;
    cout<<"Enter size 1-20";
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<"Enter "<<i+1<<"element";
       cin>> array[i];
    

     
    }
    seectionsort(array,N);
     dispaly(array,N);
    
}