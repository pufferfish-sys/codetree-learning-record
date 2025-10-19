#include <iostream>

using namespace std;

int board[19][19];

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    for(int i=0; i<15;i++){
        for(int j=0;j<15;j++){
            if(board[i][j]==board[i][j+1]&&
            board[i][j]==board[i][j+2]&&
            board[i][j]==board[i][j+3]&&
            board[i][j]==board[i][j+4]&&
            (board[i][j]==1||board[i][j]==2)){
                cout<<board[i][j]<<endl;
                cout<<i+1<<" "<<j+3<<endl;
                return 0; 
            }
        }
    }
    for(int i=0; i<15;i++){
        for(int j=0;j<15;j++){
            if(board[j][i]==board[j][i+1]
            &&board[j][i]==board[j][i+2]
            &&board[j][i]==board[j][i+3]
            &&board[j][i]==board[j][i+4]
            &&(board[j][i]==1||board[j][i]==2)){
                cout<<board[j][i]<<endl;
                cout<<j+1<<" "<<i+3<<endl;
                return 0; 
            }
        }
    }

    return 0;
}