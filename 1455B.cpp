/*
Link : https://codeforces.com/problemset/problem/1455/B
Solution is given by S. Kundu.
Dated on 2/12/2020
*/
#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;
int steps(long int n){
	int t=sqrt(2*n);
	if(n==t*(t+1)/2)
		return t;
	if(n>t*(t+1)/2)
		return t+1+1*(n==t*(t+3)/2);
	if(n<t*(t+1)/2)
		return t+1*(n==t*(t+1)/2-1);
	return 0;
}
int main(){
	int t;
	long int x;
	cin>>t;
	while(t--){
		cin>>x;
		cout<<steps(x)<<endl;
	}
	return 0;
}

