#include <iostream>
#include <string>
using namespace std;

int N;
string seats;

int main() {
    cin >> N;
    cin >> seats;

    int maxGap = 0;
    int start = 0, end = 0;

    for(int i=0; i<N; i++){
        if(seats[i] == '1'){
            for(int j=i+1; j<N; j++){
                if(seats[j] == '1'){
                    int gap = j - i - 1;
                    if(gap > maxGap){
                        maxGap = gap;
                        start = i;
                        end = j;
                    }
                    break; 
                }
            }
        }
    }

    cout << (end - start - 1)/2 + 1 << endl;

    return 0;
}
