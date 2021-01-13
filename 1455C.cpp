/*
Link : https://codeforces.com/problemset/problem/1455/C
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long int a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a*b==0){
			cout<<a<<' '<<b<<endl;
			continue;
		}
		cout<<a-1<<' '<<b<<endl;
	}
	return 0;
}

