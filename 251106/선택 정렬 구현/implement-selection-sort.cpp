#include <iostream>

using namespace std;

int n;
int arr[100];
void selection_sort(){
    for(int i=0; i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

}
  


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
