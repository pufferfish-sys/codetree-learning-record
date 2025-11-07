#include <iostream>
#include <vector>

#define MAX_N 100000
#define MAX_K 6
#define MAX_DIGIT 10

using namespace std;

// 변수 선언
int n;
int arr[MAX_N];

void RadixSort() {
    int p = 1; // p는 자릿수를 나타내는 배수 (1의 자리 → 10의 자리 → 100의 자리 …)
    
    // 가장 낮은 자리수부터 높은 자리수까지 반복 (MAX_K는 최대 자릿수)
    for (int pos = 0; pos < MAX_K; pos++) {
        vector<int> arr_new[MAX_DIGIT]; 
        // MAX_DIGIT = 10 (0~9)
        // 각 자릿수별로 값들을 임시로 저장할 버킷 배열
        
        // 현재 자릿수 기준으로 숫자들을 버킷에 분배
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / p) % 10; 
            // p로 나눠서 현재 자리수로 이동시키고, %10으로 마지막 숫자만 추출
            // 예: arr[i]=472, p=10 → (472/10)%10 = 7 → 10의 자리수
            arr_new[digit].push_back(arr[i]); 
            // 해당 자릿수(digit)에 맞는 버킷에 저장
        }

        int index = 0;
        // 버킷에 저장된 값을 다시 원래 배열에 순서대로 합침 (0~9 순서)
        for (int i = 0; i < MAX_DIGIT; i++)
            for (int j = 0; j < (int) arr_new[i].size(); j++)
                arr[index++] = arr_new[i][j];
        // 이렇게 하면 현재 자리수 기준으로 안정 정렬(stable sort) 완료됨
        
        p *= 10; 
        // 다음 자리수(십의 자리 → 백의 자리 등)로 넘어가기
    }
}


int main() {
    // 입력
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    RadixSort();

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
