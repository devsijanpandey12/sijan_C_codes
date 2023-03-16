#include<stdio.h>
int main(){
	int num,i=2,flag=1;
	printf("Enter the number?");
	scanf("%d",&num);
	if (num<=1){
		printf("Invalid number");
		return 0;
	}
	for(i=2;i<num;i++){
		if(num%i==0){
		flag=0;
		break;
		}
	}
	printf(flag?"Prime":"Not prime");
	return 0;
}
/*return 0
i<num xutyo*/


