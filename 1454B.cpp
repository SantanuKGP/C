/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		int hash[int(2*pow(10,5))+1]={0};
		long int arr[n],flag=0;
		for(i=0;i<n-1;i++){
			cin>>arr[i];
			hash[arr[i]]+=1;		
			}
		for(i=0;i<=int(2*pow(10,5));i++){
			if(hash[i]==1){
				flag=1;
				break;
			}	
		}
		if(flag)
			cout<<i;
		else cout<<"-1"<<endl;
	}
	return 0;
}
/*
6
2
1 1
3
2 1 3
4
2 2 2 3
1
1
5
2 3 2 4 2
6
1 1 5 5 4 4
*/
