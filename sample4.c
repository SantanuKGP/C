#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int search(int arr[],int n,int a){
     int i;
     for(i=0;i<n;i++){
         if(arr[i]==a)
            return 0;
     }
     return 1;
 }
int count=0;
int* box(int arr[],int n,int d,int *result_count){
	int i;
	result_count[d];
	for(i=1;i<=d;i++){
		if(search(arr,n,i)){
            result_count[count++]=i;
            d=d-i;
          }
	}
	//*result_count=count;
	return result_count;	
}
int main(){
	int n,i,d,result;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	scanf("%d",&d);
	int *res=box(arr,n,d,&result);
	for(i=0;i<result;i++){
		printf("%d ",*(res+i));
	}
	return 0;
}

