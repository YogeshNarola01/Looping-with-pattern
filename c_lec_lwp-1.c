/*
Q.1 Write a Program to print the below pattern using nested for loop.
01010
01010
01010
01010
01010 

*/

#include<stdio.h>

void main(){
	int i,j;
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			printf("%d",j%2);
		}
		printf("\n");
	}
}
