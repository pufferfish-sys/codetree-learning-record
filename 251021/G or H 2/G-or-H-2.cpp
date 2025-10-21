#include <iostream>

using namespace std;

int N;
int pos[100];
char alpha[100];
char arr[100]={'\0',};
int main() {
    cin >> N;
    int minpos =101,maxpos=0;
    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
        arr[pos[i]]=alpha[i];
        maxpos= max(maxpos,pos[i]);
        minpos= min(minpos,pos[i]);
    }
    int maxpic=0;
    for(int i=minpos;i<=maxpos;i++){
        int gcnt=0, hcnt=0, lastloc=0, firstloc=0;
        if(arr[i]=='\0') continue;
        firstloc = i;
        for(int j=i;j<=maxpos;j++){
        if(arr[j]=='G') {gcnt++;lastloc=j;} 
        else if(arr[j]=='H') {hcnt++;lastloc=j;}
        if(gcnt==hcnt||(gcnt==0&&hcnt>0)||(hcnt==0&&gcnt>0)){
            maxpic = max(maxpic,lastloc -firstloc);
            }
        }
    }
    
    cout << maxpic;

    return 0;
}