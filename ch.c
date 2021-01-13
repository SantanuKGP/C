#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int a,b;
	char ch[]="Love";
	printf("%c",*ch);
	if(scanf("%d %d",&a,&b)==2)
		printf("True");
	else printf("False");
	return 0;
}

