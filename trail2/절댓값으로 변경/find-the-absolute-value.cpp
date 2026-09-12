#include <iostream>

using namespace std;

int n;
int arr[50];
void absmaker(int *arr){
    for(int i =0; i < n; i++){
        if(arr[i] <0) arr[i] = -arr[i];
    }
    return;
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    absmaker(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}