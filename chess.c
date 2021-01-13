#include<stdio.h>
int search_row(int x, int y, int arr[100][100],int n,int m);
int search_column(int x, int y, int arr[100][100],int n,int m);
/*row wise move*/
int check(int arr[100][100],int n,int m){
	int i,j,sum=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			sum+=arr[i][j];
		}
	}
	if(sum==m*n)
		return 1;
	else return 0;
}
int search_row(int x, int y, int arr[100][100],int n,int m){
	arr[x][y]=1;
	int j,flag=0;
	for(j=1;j<=m;j++){
		if(arr[x][j]==0){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("%d %d",x,j);
		search_row(x,j,arr,n,m);		
	}
	else search_column(x,j,arr,n,m);
	if(check(arr,n,m))
		return 0;	
}
/*column wise move*/
int search_column(int x, int y, int arr[100][100],int n,int m){
	arr[x][y]=1;
	int i,flag=0;
	for(i=1;i<=n;i++){
		if(arr[i][y]==0){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("%d %d",i,y);
		search_column(i,y,arr,n,m);		
	}
	else search_row(i,y,arr,n,m);
	return 0;	
}

/*int move(int x, int y, int arr[100][],int n,int m){
	int i;
	
	for(i=)
	return 0;
}*/
int main (){
	int i,j,n,m,x,y;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);
	int chess[n][m];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			chess[i][j]=0;
		}
	}
	//chess[x][y]=1;
	search_row(x,y,chess,n,m);
	return 0;
}
