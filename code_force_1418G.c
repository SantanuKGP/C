#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*void init(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		arr[i]==0;
	}
}
int count3(int arr[], int n){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i]==3)
			count++;
	}
	return count;
}
// To collect the n size proper set
int sub(int arr[],int size, int n){
	int i,j,count=0,hash[size];
	for(i=0;i<size-n+1;i++){
		init (hash,size);
		for(j=i;j<i+n;j++){
			hash[arr[j]]+=1;
		}
		if(count3(hash,size)*3==n)
			count++;
	}
	
	return count;
}*/
typedef struct {
	int num;
	int ix;
}set;
int main(){
	int i,j=0,n,count=0,i_count;
	scanf("%d",&n);
	int arr[n];
	set info[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-2;i++){
		if(arr[i]==arr[i+1] & arr[i+1]==arr[i+2]){
			info[j].num=arr[i];
			info[j++].ix=i;
		}
	}
	count=j;
	
	/*for(i=3;i<=n;i+3){
		count=count+sub(arr,n,i);
	}*/
	for(i=0;i<n;i++){
		i_count=1;
		if(arr[i]==0)
			continue;
		for(j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				i_count++;
				arr[j]=0;
			}		
		}
		if(i_count==3)
		count+=i_count/3;
	}
	printf("%d",count);
	return 0;
}

