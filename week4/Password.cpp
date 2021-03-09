#include<iostream>
#include<string>
using namespace std;
bool rv(string s,string t){
	int a=s.size();
	for(int i=0;i<a/2;i++){
		swap(s[i],s[a-i-1]);
	}
	if(s==t) return true;
	return false;
}
int main(){
	int n;
	cin>>n;
	string s[n],q;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[i].size()%2==1 && rv(s[i],s[j])){
			q=s[i];
			break;
			}
		}
	}
	cout<<q.size()<<' '<<q[q.size()/2];
	
	return 0;
}
