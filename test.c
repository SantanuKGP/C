#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,limit,d,count=0;
	scanf("%d",&limit);
	d=limit;
	char s[limit+1];
	while(limit>0){
		count++;
		limit/=10;
	}
	for(i=count-1;i>=0;i--){
		s[i]='0'+d%10;
		d/=10;
	}
	s[count]='\0';
	printf("%s",s);
	return 0;
}
