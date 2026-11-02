#include<stdio.h>
void main(){
	int i,j,temp,size;
	char a[10];
	printf("enter array size:");
	scanf("%d",&size);
	printf("enter array element:");
	for(i=0;i<size;i++){
		scanf("%s",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i= 0;i<size;i++){
		printf("\t%c",a[i]);
	}}