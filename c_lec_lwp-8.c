/*
Q.8 Write a Program to print the below pattern using nested for loop.
 1    A    2    B    3
 4    C    5    D    6
 7    E    8    F    9
10    G    11   H   12
13    I    14   J   15
*/

#include<stdio.h>
 main(){
	int i,j,k=1;
	char c='A';	
	for(i=1;i<=5;i++){
		for(j='A';j<='E';j++){
		    if(j%2==0){
		     	printf("%c ",c++);
		}else{			
			printf("%d ",k++);		
		}	
    }
		printf("\n");
	}
}

