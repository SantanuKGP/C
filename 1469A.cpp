/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string s;
	getline(cin,s);
	while(t--){
		getline(cin,s);
		int i,key=0,check=0,count=-1; //
		for(i=0;i<s.length();i++){
			if(s[i]=='(') {
				key=1;
				//check=1;
			}
			if(s[i]==')') {
				key=0;
				//check=0;
			}
			if(key){
				count++;
			}
		}
		if(!(count%2) & !(s.length()%2))
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

