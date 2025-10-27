#include <iostream>
#include <algorithm>
using namespace std;

int nums[15];

int main() {
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
    }
    sort(nums,nums+15);
    int a = nums[0],b=nums[1],c;
   if(a+b!=nums[2]){
    c=nums[2];}
    else c=nums[3];
    int d= nums[14]-a-b-c;
    cout << a << " " << b<< " "<< c<< " "<< d; 


    return 0;
}