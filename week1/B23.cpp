#include<iostream>
#include<cstdlib>
using namespace std;



int main()
{
	int x,y;
	cin>>x>>y;
	cout<<((x + y + abs(x - y)) / 2); 
	return 0;
}
