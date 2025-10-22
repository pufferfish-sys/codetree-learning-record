#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];

int main() {
	int total = 0,flag=0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
		total += arr[i];
    }
	int total_min =10000;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			for(int k=0;k<4;k++){
				if(k==i||k==j) continue;
				for(int l=k+1;l<5;l++){
					if(l==i||l==j) continue;
				int sum1 = arr[i]+arr[j];
				int sum2 = arr[k]+arr[l];
				int sum3 = total - sum1 -sum2;
				if(sum1==sum2||sum1==sum3||sum2==sum3) continue;
				flag =1;
				int max1 = max({sum1,sum2,sum3});
				int min1 = min({sum1,sum2,sum3});
				total_min = min(total_min,max1-min1);}}
		}
	}
	if(flag) cout << total_min;
	else cout <<-1;
    return 0;
}