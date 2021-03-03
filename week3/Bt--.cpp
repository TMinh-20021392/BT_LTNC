#include<iostream>
using namespace std;

void sx(int a[],int n){ 
    for (int i = 0; i < n-1; i++)
		for (int j = n-1; j >i; j--)
			if (a[j] < a[j-1])
				swap(a[j], a[j-1]);
}

int main(){
	int n,s=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sx(a,n);
	for(int i=0;i<n-1;i++){
		s+=a[i];
	}
	cout<<s;
	return 0;
}
