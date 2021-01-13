#include<stdio.h>
#include<math.h>
long long int fact(long int x){
    if(x==1)
        return 1;
    long long int ans,d;
    ans= x*fact(x-1);
    d= pow(10,9)+7;
    return ans%d;
}
long long int power(long int x){
    long int i;
    long long int ans=1,d;
    d= pow(10,9)+7;
    for(i=0;i<x;i++){
        ans=(ans*2) %d;
    }
    return ans%d;
}

int main ()
{
    long int n;
    long long int ans,d;
    scanf("%ld",&n);
    d= pow(10,9)+7;
    ans= (fact(n)-power(n-1))%d;
    while(ans<0){
    	ans= ans+d;
	};
    	
    printf("%lld",ans);
    return 0;
}
