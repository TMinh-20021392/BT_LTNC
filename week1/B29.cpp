#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
    	for(int t=1;t<=i;t++){
    		cout<<'*';
		}
		cout<<'\n';
	}
    return 0;
}
