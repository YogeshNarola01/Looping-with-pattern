/*
Q.6 Write a Program to print the below pattern using nested for loop.
A B C D E
F G H I J 
K L M N O
P Q R S T 
U V W X Y
*/

#include<stdio.h>
 main(){
	char i,j,y='A';
	for(i='A';i<='E';i++){
		for(j='A';j<='E';j++){
			printf("%c ",y);
			y++;
		}
		printf("\n");
	}
}
