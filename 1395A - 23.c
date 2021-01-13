#include<stdio.h>
int check(long long int x){
    return x%2;
}
int analyse(void){
    int flag=0;// set as no
    long long int r,g,b,w,min;
    scanf("%lld",&r);
    scanf("%lld",&g);
    scanf("%lld",&b);
    scanf("%lld",&w);
    printf("%ld %ld %ld %ld ",r,g,b,w);
    if((check(r)==check(g)) & (check(g)==check(b)) )
        return 1;
    min=r;
    if (g<min)
        min= g;
    if (b<min)
        min=b;
    if ((check(r-min)+check(g-min)+check(b-min)+check(w+min))==1)
        return 1;
    if ((check(r-min+1)+check(g-min+1)+check(b-min+1)+check(w+min-1))==1 & min>0)
        return 1;
    return flag;
}
int main ()
{
    int i,t,n;
    //long long int ans;
    scanf("%d",&t);
    while(t--){
       if(analyse())
        printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
