#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
using namespace std;

int n;
int nums[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+n);
    for(int i =0; i<n;i++){
        cout << nums[i] << " ";
    }
    printf("\n");
    sort(nums,nums+n,greater<int>());
    for(int i =0; i<n;i++){
        cout << nums[i] << " ";
    }
    // Please write your code here.

    return 0;
}
