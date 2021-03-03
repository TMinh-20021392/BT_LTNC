#include<iostream>
using namespace std;

void read3d(int n){
	int a,b,c;
	a=n/100;
	b=(n%100)/10;
	c=(n%100)%10;
	switch(a){
		case 0:
			break;
		case 1:
			cout<<"one hundred ";
			break;
		case 2:
			cout<<"two hundred ";
			break;
		case 3:
			cout<<"three hundred ";
			break;
		case 4:
			cout<<"four hundred ";
			break;
		case 5:
			cout<<"five hundred ";
			break;
		case 6:
			cout<<"six hundred ";
			break;
		case 7:
			cout<<"seven hundred ";
			break;
		case 8:
			cout<<"eight hundred ";
			break;
		case 9:
			cout<<"nine hundred ";
			break;
		}
	if (b == 1){
		switch (c){
			case 0:
				cout << "Ten ";
				break;
			case 1:
				cout << "Eleven ";
				break;
			case 2:
				cout << "Twelve ";
				break;
			case 3:
				cout << "Thirteen ";
				break;
			case 4:
				cout << "Fourteen ";
				break;
			case 5:
				cout << "Fifteen ";
				break;
			case 6:
				cout << "Sixteen ";
				break;
			case 7:
				cout << "Seventeen ";
				break;
			case 8:
				cout << "Eighteen ";
				break;
			case 9:
				cout << "Nineteen ";
				break;
		}
	}
	else{
		switch (b){
			case 2:
				cout << "twenty ";
				break;
			case 3:
				cout << "thirty ";
				break;
			case 4:
				cout << "fourty ";
				break;
			case 5:
				cout << "fifty ";
				break;
			case 6:
				cout << "sixty ";
				break;
			case 7:
				cout << "seventy ";
				break;
			case 8:
				cout << "eighty ";
				break;
			case 9:
				cout << "ninety ";
				break;
		}
		switch (c){
			case 0:
				break;
			case 1:
				cout << "one ";
				break;
			case 2:
				cout << "two ";
				break;
			case 3:
				cout << "three ";
				break;
			case 4:
				cout << "four ";
				break;
			case 5:
				cout << "five ";
				break;
			case 6:
				cout << "six ";
				break;
			case 7:
				cout << "seven ";
				break;
			case 8:
				cout << "eight ";
				break;
			case 9:
				cout << "nine ";
				break;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	if(n<0){
		cout<<"negative ";
		n=-n;
	}
	if(n==0) cout<<"zero";
	if(n>0 && n<1000) read3d(n);
	if(n>1000 && n<1000000) {
		read3d(n/1000);
		cout<<"thousand ";
		read3d(n%1000);
	}
	if(n>1000000 && n<1000000000){
		read3d(n/1000000);
		cout<<"million ";
		read3d((n%1000000)/1000);
		cout<<"thousand ";
		read3d((n%1000000)%1000);
	}
	
	return 0;
}
