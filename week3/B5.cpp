#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void sx(int a[],int n){ 
    for (int i = 0; i < n-1; i++)
		for (int j = n-1; j >i; j--)
			if (a[j] < a[j-1])
				swap(a[j], a[j-1]);
}

int main(){
	srand(time(NULL));
	
	int a[30],n=30;
	for(int i=0;i<5;i++){
		int t=1+rand()%30;
		for(int j=0;j<t;j++) a[j]=rand()%100;
		cout<<"\n";
	}
	
	for(int i=0;i<30;i++){
		cout<<a[i]<<' ';
	}
	cout<<"\n";
	sx(a,n);
	for(int i=0;i<30;i++){
		cout<<a[i]<<' ';
	}
	return 0;
}
