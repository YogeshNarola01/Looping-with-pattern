/*
Q.5 Write a Program to print the below pattern using nested for loop.
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 
*/

#include<stdio.h>
 main(){
	char i,j;
	for(i='A';i<='E';i++){
		for(j='A';j<='E';j++){
			printf("%c",i);
		}
		printf("\n");
	}
}
