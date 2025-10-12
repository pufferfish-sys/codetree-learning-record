#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>

using namespace std;

int N,max1=0;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+2*N);
    for(int i=0;i< 2*N;i++){
    max1 = max(max1,nums[i]+nums[2*N-1-i]); 
    }
    printf("%d",max1);
    return 0;
}
