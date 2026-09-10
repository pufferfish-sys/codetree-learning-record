#include <iostream>

using namespace std;

int Y, M, D;

bool isYoon(int a){
    if(a % 4 == 0){
        if(a % 100 == 0 && a % 400 == 0) return true;
        else if (a % 100 == 0) return false;
        else return true;
    }
    return false;
}


bool seasonCalc(int a, int b, int c){

    int day;
    if(b < 1 || b > 12) return false; 
    if(b == 4 || b == 6 || b == 9 || b == 11) day = 30;
    else if (b == 2){
        if(isYoon(a)) day = 29;
        else day = 28;
    }
    else day = 31;
    if(c > day || c < 1 ) return false;
    return true;

}

void season(int a){
    if(a>=3 && a<=5) cout << "Spring";
    else if(a>=6 && a<=8) cout << "Summer";
    else if(a>=9 && a<=11) cout << "Fall";
    else cout << "Winter";
}


int main() {
    cin >> Y >> M >> D;
    
    if(seasonCalc(Y,M,D)) season(M);
    else cout << "-1";
    // Please write your code here.

    return 0;
}