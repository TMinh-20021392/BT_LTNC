#include<iostream>
#include<cmath>
using namespace std;

string dow(int x,int y,int z){
	if(y<3) y+=12;
	int b = z % 100;
	int c = z / 100;
	int w = (x + floor((13*(y+1))/5) + b + floor(b/4) + floor(c/4) + (5*c));
	w = w % 7;
	switch(w){
		case 0: return "Saturday"; break;
		case 1: return "Sunday"; break;
		case 2: return "Monday"; break;
		case 3: return "Tuesday"; break;
		case 4: return "Wednesday"; break;
		case 5: return "Thursday"; break;
		case 6: return "Friday"; break;
		
		
	}
}

int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	cout<<dow(x,y,z);
	return 0;
}
