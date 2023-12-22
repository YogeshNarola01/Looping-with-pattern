/*
Q.4 Write a Program to print the below pattern using nested for loop.
1   2   3   4   5 
A   B   C   D   E
6   7   8   9   10
F   G   H   I   J
11  12  13  14  15
*/

#include<stdio.h>
 main(){
	int i,j,y=1;
	char c='A';	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		    if(i%2==0){
		     	printf("%c ",c);
		    c++;
		}else{
			printf("%d ",y);
			y++;
		}
	}
		printf("\n");
	}
	 }

