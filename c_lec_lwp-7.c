/*Q.7 Write a Program to print the below pattern using nested for loop.
* # * # *
* * * * *
* # * # *
* * * * *
* # * # *
*/

#include<stdio.h>
 main(){
	int i,j,k=1;	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		    if(i%2==0){
		     	printf("* ");
		}else{
			if(j%2!=0){			
			printf("* ");		
		}else{
			printf("# ");
		}
	   }
      }
		printf("\n");
	}
}

