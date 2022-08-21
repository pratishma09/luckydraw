#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,randomno;
	printf("------------------------------------------------------------------------------------------------------\n");
	printf("Lucky draw\n");
	printf("------------------------------------------------------------------------------------------------------\n");
	printf("You have 3 tries: \n ");
		randomno=rand()%100+1;
		printf("\n");
	for(i=1;i<=3;++i){
	printf("Enter a number:");
	scanf("%d",&n);
	if(randomno==n){
		printf("You win");
		exit (1);
	}
    }
    printf("\nBetter luck next time");
}