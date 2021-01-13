/*
Link : https://codeforces.com/problemset/problem/1455/E
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int x;
	int y;
}point;
int main(){
	point p1,p2,p3,p4;
	int t,count=0,a,b;
	cin>>t;
	while(t--){
		cin>>p1.x>>p1.y;
		cin>>p2.x>>p2.y;
		cin>>p3.x>>p3.y;
		cin>>p4.x>>p4.y;
		/*
		int y[4]={p1.y,p2.y,p3.y,p4.y};
		sort(y,y+4);
		count=y[1]-y[0] + y[3]-y[2];
		a_max=y[3]-y[0];
		a_min=y[2]-y[1];
		*/
		if(p1.y==p2.y & p3.y==p2.y & p3.y==p4.y){
			int x_mean=(p1.x+p2.x+p3.x+p4.x)/4;
			count=abs(x_mean-p1.x)+abs(x_mean-p2.x)
					+ abs(x_mean-p3.x) + abs(x_mean-p4.x);
			cout<<count<<endl;
			continue;
		}
		if(p1.x==p2.x & p3.x==p2.x & p3.x==p4.x){
			int y_mean=(p1.y+p2.y+p3.y+p4.y)/4;
			count=abs(y_mean-p1.y)+abs(y_mean-p2.y)
					+ abs(y_mean-p3.y) + abs(y_mean-p4.y);
			cout<<count<<endl;
			continue;
		}
		//sorting according to y
		int y[4]={p1.y,p2.y,p3.y,p4.y},x[4];
		sort(y,y+4);
		int d[4]={0};
		for(int i=0;i<4;i++){
			if(y[i]==p1.y & (!d[i])){
				x[i]=p1.x;
				d[i]=1;
				continue;
			}
			if(y[i]==p2.y & (!d[i])){
				x[i]=p2.x;
				d[i]=1;
				continue;
			}
			if(y[i]==p3.y & (!d[i])){
				x[i]=p3.x;
				d[i]=1;
				continue;
			}
			if(y[i]==p4.y & (!d[i])){
				x[i]=p4.x;
				d[i]=1;
				continue;
			}	
		}
		count=0;
		//case 1 : shifting to lower base
		count+=y[1]-y[0];
		y[1]=y[0];
		
		
		// case 2: shifting to upper base 
		count+=y[1]-y[0];
		y[0]=y[1];
	}
	return 0;
}

