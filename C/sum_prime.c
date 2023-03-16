#include<stdio.h>
int main(){
	int num,sum,i,j,isPrime;
	printf("Enter the number");
	scanf("%d",&num);
	
	for(i=2;i<=num;i++){
		isPrime=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
		
		if(isPrime)
		sum+=i;
	}
	
	
	printf("Sum: %d",sum);
	return 0;
	
}
