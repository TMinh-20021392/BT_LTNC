#include<iostream>
using namespace std;
void t(int a[]){
	cout<<&a<<' '<<&a[0];
}
int main(){
	int a[3]={1,2,3};
	cout<<&a<<' '<<&a[0]<<"\n";
	t(a);
	return 0;
}
//tham tri, khac dia chi

