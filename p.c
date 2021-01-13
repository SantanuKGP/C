#include<stdio.h>
#include<math.h>
typedef struct{
	int x;
	int y;
}point;
int minpath(point arr[],int cover[],int n,point p){
	int i,index=-1,min;
	for(i=0;i<n;i++){
		if (cover[i]==0){
			dist=abs(p.x-arr[i].x)+abs(p.y-arr[i].y);
			if(min>dist){
				dist=min;
				index=i;
			}
		}
	}
	return index;
}
int main(){
	point start,end;
	int n;
	scanf("%d %d",&start.x,&start.y);
	scanf("%d %d",&end.x,&end.y);
	scanf("%d",&n);
	point arr[n];
	int i,cover[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&arr[i].x,&arr[i].y);
		cover[i]=0;
	}
		
		
	return 0;
}
