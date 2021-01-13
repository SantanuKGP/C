#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int max(int arr[],int start,int end){
	int i,index=start,max_=arr[start];
	for(i=1+start;i<end;i++){
		if(max_<arr[i]){
			index=i;
			max_=arr[i];
		}
	}
	return index;
}
int min(int arr[],int start,int end){
	int i,index=start,min_=arr[start];
	for(i=1+start;i<end;i++){
		if(min_>arr[i]){
			index=i;
			min_=arr[i];
		}
	}
	return index;
}
int main(){
	int i,n,d,k,digit=0;
	char str[100];
	scanf("%s %d",str,&k);
	digit=strlen(str);
	int arr[digit];
	for(i=0;i<digit;i++)
		arr[i]=str[i]-'0';
	d=k;
	int ix,index= min(arr,0,digit);
	if(k>=index){
		k=k-index;
		for(i=0;i<index;i++)
			arr[i]=-1;
		while(k>0){
			k--;
			ix=max(arr,index,digit);
			arr[ix]=-1;
		}
	}
	else{
		while(k>0){
			k--;
			ix=max(arr,0,index);
			arr[ix]=-1;
		}
	}
	
	k=digit-d-1;
	d=0;
	char s[k];
	for(i=0;i<digit;i++){
		if(arr[i]!=-1){
			s[d++]='0'+arr[i];
		}
	}
	s[d]='\0';
	printf("%s",s);
	return 0;
}

