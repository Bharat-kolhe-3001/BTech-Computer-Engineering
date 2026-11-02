#include <stdio.h>

void indian();
void french();

int main(){
    int ch;
    printf("Enter your Country (please use that mean 1 is indian & 2 is franch)");
    scanf("%d",&ch);
    if(ch==1){
        indian();
    }
    else if(ch==2){
        french();
    }
    else{
        printf("Inavalid choice");
    }
    return 0;
}
void indian(){
    printf("namaste");
}
void french(){
    printf("bonjur ");
}
