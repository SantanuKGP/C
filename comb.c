#include<stdio.h>
int comb(int x,int y){
	if(x==y | y==0)
		return 1;
	if(y==1)
		return x;
	return comb(x-1,y)+comb(x-1,y-1);
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",comb(n,m));
	return 0;
}
