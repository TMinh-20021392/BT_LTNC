#include<iostream>
using namespace std;
void x1(int x){
	x=2;
	cout<<x<<' '<<&x<<"\n";
}
void x2(int &x){
	x=2;
	cout<<x<<' '<<&x<<"\n";
}
int main(){
	int x=12;
	cout<<x<<' '<<&x<<"\n";
	x1(x);
	x2(x);
	return 0;
}
