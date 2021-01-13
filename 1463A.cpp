/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		long long int sum=a+b+c;
		long long int d=sum/7;
		if(((sum%9)==0) & (min(min(a,b),c)>=d))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

