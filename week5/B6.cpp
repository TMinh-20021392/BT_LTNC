#include <iostream>
using namespace std;
void vl(int key, int a[], int low, int high) {
    int pos = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(a[mid] == key) {
            pos = mid;
            break;
        }
        else if(a[mid] > key)  high = mid - 1;
        else low = mid + 1;
    }

    if(pos == -1) cout << "none\n";
    else cout << pos << "\n";
}
int dq(int key, int a[], int low, int high) 
{ 
    if (low <= high) { 
        int mid = low + (high - low) / 2; 
        if (a[mid] == key) 
            return mid; 
        if (a[mid] > key) 
            return dq(key, a, low, mid - 1); 
  
        return dq(key, a, mid + 1, high); 
    } 
  
    return -1; 
} 
int main() {
    int a[] = {1,2,3,4,5};

    int key[] = {5,1,3,7,8,2};
    for (int i = 0; i < 5; ++i) {
        vl(key[i], a, 0, 8);
    }

    for (int i = 0; i < 5; ++i) {
        if(dq(key[i], a, 0, 8) == -1) 
            cout << "none\n";
        else cout << dq(key[i], a, 0, 8) << "\n";
    }
}
