#include <iostream>
using namespace std;

int main()
{
    int hour;
    for (hour = 0; hour<=24; hour++){
        if (hour==0)
            cout << "12 midnight\n";
        if (hour>=1&&hour<=11)
            cout << hour << "am\n";
        if (hour==12)
            cout << "12 noon\n";
        if (hour>=13&&hour<=23)
            cout << hour%12 << "pm\n";
    }
    return 0;
}
