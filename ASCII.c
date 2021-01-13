#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int i;
	for(i=0;i<10;i++){
		char c= '0'+i;
		printf("%c -> %d\n",c,c);
	}
	return 0;
}

