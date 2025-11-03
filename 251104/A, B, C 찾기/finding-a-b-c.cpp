#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int arr[7];

int main() {
    int mi =INT_MAX;
    int ma =0;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+7);
    int a = arr[0];
    int b = arr[1];
    int c = arr[6]-a-b;
    cout << a << " "<< b<< " "<< c;
    
    

    return 0;
}