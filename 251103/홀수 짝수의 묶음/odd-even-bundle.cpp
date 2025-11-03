#include <iostream>

#define MAX_N 1000

using namespace std;

int n;
int blocks[MAX_N];
int odd, even;

int main() {
    // 입력:
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> blocks[i];

    for(int i = 0; i < n; i++) {
        if(blocks[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int group_num = 0;
    while(true) {
        //짝수번째 만들기
        if(group_num % 2 == 0) {
            if(even) {//짝수가 있으면 사용 
                even--;
                group_num++;
            }
            else if(odd >= 2) { // 짝수가 없다면 홀수 2개로 사용 
                odd -= 2;
                group_num++;
            }
            else {
                if(odd > 0) // 짝수가 없고  그룹하나를 줄이고 
                    group_num--;

                break;
            }
        }// 홀수번째 만들기 홀수 하나로 
        else {
            if(odd) {
                odd--;
                group_num++;
            }
            else {
                break;
            }
        }
    }

    cout << group_num;

    return 0;
}
