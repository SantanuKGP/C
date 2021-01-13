#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int x,y;
long int gcd(void){
    if(x==y)
        return x;
    if(x==0)
        return y;
    if(y==0)
        return x;
    if (x>y){
    	x=x%y;
    	return gcd();
	}
        
    else {
    	y=y%x;
    	return gcd();
	}
}
int main(){
    long int t,i,j,n,min;
    scanf("%ld",&t);
    while(t--){
        long int flag=0;
        scanf("%ld",&n);
        long int arr[n];
        for(i=0;i<n;i++)
            scanf("%ld",&arr[i]);
        min=arr[0];
        //long int index=-1;
        for(i=1;i<n;i++){
            if((arr[i]<arr[i-1]) & (flag==0)){
                flag=1;
                //printf("if%ld ",arr[i]);
                //index=i;
            }
            if(arr[i]<min)
                min=arr[i];
        }
        /*for(i=0;i<n;i++)
            printf("%ld ",arr[i]);*/
        //printf("%ld\n",index);
        if((!flag) | n==1){
            printf("YES\n");
            continue;
        }
        //printf("%ld ",t);
        long int temp;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                x=arr[i], y=arr[j];
                if((arr[j]< arr[i]) &(gcd()==min)){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=arr[i];
                }
            }
        }
        flag=0;
        for(i=1;i<n;i++){
            if((arr[i]<arr[i-1]) & (flag==0)){
                flag=1;
            }
            if(arr[i]<min)
                min=arr[i];
        }
        for(i=0;i<n;i++)
            printf("%ld ",arr[i]);
        if((!flag)){
            printf("YES\n");
            continue;
        }
        else printf("NO\n");
        
        
    }
    return 0;
}
