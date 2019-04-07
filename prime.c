#include <stdio.h>
#include <math.h>

int IsPrime(int nums)
{
	int i;
	
	for(i=2; i<=sqrt(numx); i++){
		if(nums%i == 0){
			return 0;
		}
	}
	return -1;
}

void main()
{
	int i;
	
	for(i=101; i<=200; i++){
		if(!IsPrime(i)){
			printf("%d is prime\n", i);
		}
	}
	return ;
}