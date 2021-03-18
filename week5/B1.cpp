#include<iostream>
using namespace std;
int main(){
	int a[3];
	char b[3];
	for(int i=0;i<3;i++){
		cout<<(void*) &a[i]<<' ';
	}
	cout<<"\n";
	for(int i=0;i<3;i++){
		cout<<(void*) &b[i]<<' ';
	}
	return 0;
	//int cach nhau 4 byte, char 1 byte
}
