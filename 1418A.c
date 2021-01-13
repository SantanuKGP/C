#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	long long int t,i,a,b,n,x,y,min,min1,min2,max,pdt1,pdt2;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&n);
		min= ((a-x)<n) ? a-x:n;
		max= ((-b+n+y)>0) ? (-b+n+y):0;
		pdt1=((a-min)*(b-n+min));
		pdt2=((a-max)*(b-n+max));
		min1=(pdt1<pdt2)? pdt1:pdt2;
		min= ((b-y)<n) ? b-y:n;
		max= ((-a+n+x)>0) ? (-a+n+x):0;
		pdt1=((b-min)*(a-n+min));
		pdt2=((b-max)*(a-n+max));
		min2=(pdt1<pdt2)? pdt1:pdt2;
		min=(min1<min2)? min1:min2;	
		printf("%lld\n",(min>0)? min:x*y);
	}
	return 0;
}

