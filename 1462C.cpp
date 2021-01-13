/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>45){
			cout<<"-1"<<endl;
			continue;
		}
		if (n<10) {
			cout<<n<<endl;
			continue;
		}
		int arr[9]={0},i=0,t=9;
		while(n>=0){
			arr[i++]=t--;	
			n-=arr[i-1];
			if(n<(t+1)){
				arr[i++]=n;
				break;
			}
			
		}
		while(i--){
			cout<<arr[i];
		}
		cout<<endl;
	}
	return 0;
}

