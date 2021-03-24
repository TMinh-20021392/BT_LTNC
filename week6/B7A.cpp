#include<iostream>
using namespace std;
void hv(string s,int m, int n){
	if(m==n) cout<<s<<"\n";
	else{
		for(int i=m;i<n;i++){
			swap(s[i],s[m]);
			hv(s,m+1,n);
			swap(s[i],s[m]);
		}
	}
}
int main(){
	string s;
	cin>>s;
	int n=s.size();
	hv(s,0,n-1);
	return 0;
}
