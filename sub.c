#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
// This algorithm is valid for only array of positive numbers
int key=1;
int search(int arr[],int size, int a){
	int i;
	//printf("# ");
	for (i=0;i<size;i++){
		if(arr[i]==a)
			return 0;    //if found
	}
	return 1;
}
void print(int arr[],int n){
	int i;
	printf("\nFinal Array : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int sub(int arr[],int n,int brr[],int b, int sum,int index){
	int i,count=0;
	//printf("index :%d ",index);
	for(i=index;i<n;i++){
		if(arr[i]>sum)
			continue;
		if(arr[i]==sum){
			brr[b++]=arr[i];
			if(key){
				print(brr,b);
				count++;
				key=0;
			}

			return count;
			
		}
		if(arr[i]<sum){
			brr[b++]=arr[i];
			sum=sum-arr[i];
			for(int j=i+1;j<n;j++)
			return count + sub(arr,n,brr,b,sum,j);
		}
		
	}
	return 0;
}
int main(){
	int i,n,sum;
	scanf("%d",&n);
	int arr[n],brr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&sum);
	key=sum;
	int count=0;
	for(i=0;i<n;i++){
		key=1;
		count+=sub(arr,n,brr,0,sum,i);
	}
		
	printf("Total ways : %d",count);
	return 0;
}
// 6 1 5 7 2 3 8 10
