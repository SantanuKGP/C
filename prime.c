#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int prime(long long n){
	long long i;
	if(n==2) return 1;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	long long n,i;
	scanf("%lld",&n);
	for(i=2;i<=n;i++){
		if(prime(i))
			printf("%lld\n",i);
	}
	return 0;
}

