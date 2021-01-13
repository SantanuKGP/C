#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isIsogram(char* s)
{   
    int i, hash[26]={0};
    scanf("%s",s);
    for(i=0;i<strlen(s);i++){
        hash[s[i]-'a']+=1;
    }
    for(i=0;i<26;i++){
        if(hash[i]>1)
            return 0;
    }
    return 1;
    //Your code here
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000];
		printf("%d\n",isIsogram(s));
	}
	return 0;
}
