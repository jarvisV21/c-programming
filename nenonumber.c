#include<stdio.h>
#include<math.h>
int main(){
	printf("enter a munber, \n");
	int n,sum=0;
	scanf("%d",&n);
	int result =n*n,temp=result;
	while(temp !=0){
		sum+=temp%10;
		temp/=10;
	}
	if (sum == n )
		printf("number is neon \n");
  	else
		printf("number is not neon \n");
	return 0;
}

