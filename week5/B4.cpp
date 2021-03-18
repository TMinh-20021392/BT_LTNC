#include<iostream>
using namespace std;
void ttmang(int a[]){
	cout<<&a<<"\n";
}
//void tcmang(int &a[]){
//	cout<<&a<<"\n";
//}
//-->khong tcmang dc
void ttxau(string s){
	cout<<&s<<"\n";
}
void tcxau(string &s){
	cout<<&s<<"\n";
}
int main(){
	int a[3]={1,2,3};
	string s="abc";
	cout<<&a<<' '<<&s<<"\n";
	ttmang(a);
	//tcmang(a);
	ttxau(s);
	tcxau(s);
	return 0;
}
