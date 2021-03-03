#include <iostream>
using namespace std;

int main()
{
    int n;
    do{
        cin >> n;
        if (n>0&&n%5==0)
            cout << n/5 << "\n";
        if (n==-1)
            cout << "bye";
    }
    while(n!=-1);
    return 0;
}
