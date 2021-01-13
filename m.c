#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isSubsequence(char* s,char *t){
    s=(char *) malloc(100*sizeof(char));
    t=(char *) malloc(1000*sizeof(char));
    scanf("%s",s);
	scanf("%s",t);
    int i,j=0,hash[26]={0};
    for(i=0;i<strlen(t);i++){
        if(t[i]==s[j])
            j++;
    }
    if(j==strlen(s))
        return true;
    else return false;
}
int main(){
	char *s;
	char* t;
	if(isSubsequence(s,t))
		printf("true");
	else printf("false");
}
