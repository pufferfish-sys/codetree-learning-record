#include <iostream>
#include <algorithm>

using namespace std;

int ability[6];

int main() {//123456
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
        sum += ability[i];
    }
    sort(ability,ability+6);
    
    int min_all=3000001;
    for(int i=0; i<5;i++){
        for(int j=i+1;j<6;j++){
        	for(int k=0; k<5;k++){
				if(k==i) continue;
        		for(int l=k+1;l<6;l++){
					if(l==j) continue;
					for(int a=0; a<5;a++){
						if(a==i||a==k) continue;
        				for(int b=a+1;b<6;b++){
							if(b==j||b==l) continue;
							int max1 =0,max2=0,min1=3000001,min2=3000001;
							int sum1=ability[i]+ability[j];
							int sum2=ability[k]+ability[l];
							int sum3=ability[a]+ability[b];
							max1 = max(sum1,sum2);
							max2 = max(max1,sum3);
							min1 = min(sum1,sum2);
							min2 = min(min1,sum3);
							min_all = min(min_all,max2-min2);
					}
    }
					}
    }
        }
    }
	cout << min_all;
   

    return 0;
}