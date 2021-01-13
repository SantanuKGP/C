#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int search(int arr[],int n,int a){
     int i;
     for(i=0;i<n;i++){
         if(*(arr+i)==a)
            return 0;
     }
     return 1;
 }
int count=0;
int* hackerCards(int collection_count, int* collection, int d, int* result_count) {
        scanf("%d",&collection_count);
        int i;
        collection[collection_count]; 
        for(i=0;i<collection_count;i++)
            scanf("%d",&collection[i]);
        scanf("%d",&d);
		for(i=1;i<=d;i++){
			if(search(collection,collection_count,i)){
           	 result_count[count++]=i;
           	 d=d-i;
          	}
		}

	return result_count;	
}
int main(){
	int i,collection_count, d,*result_count;
	int *collection;
	int *res=hackerCards(collection_count,collection, d,result_count);
	for(i=0;i<count;i++){
		printf("%d ",*(result_count+i));
	}
	return 0;
}

