#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<string>>&ans,vector<string>&board,vector<int>&leftRow,vector<int>&lowerDiagnol,vector<int>&upperDiagnol,int col,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }


    for(int row=0;row<n;row++){
        if(leftRow[row]==0 && lowerDiagnol[row+col]==0 && upperDiagnol[n-1+col-row]==0){

            board[row][col]='Q';
            leftRow[row]=1;
            lowerDiagnol[row+col]=1;
            upperDiagnol[n-1+col-row]=1;
            solve(ans,board,leftRow,lowerDiagnol,upperDiagnol,col+1,n);
            board[row][col]='.';
            leftRow[row]=0;
            lowerDiagnol[row+col]=0;
            upperDiagnol[n-1+col-row]=0;


        }
    }
}



int main(){
    vector<vector<string>>ans;
    
    int n=4;
    vector<int>leftRow(n,0);
    vector<int>lowerDiagnol(2*n-1,0);
    vector<int>upperDiagnol(2*n-1,0);
    vector<string>board;
    string s(n,'.');
    for(int i=0;i<n;i++){
        board.push_back(s);
    }

    solve(ans,board,leftRow,lowerDiagnol,upperDiagnol,0,n);


   int count = 1;

for (auto& board : ans) {
    cout << "Chessboard " << count++ << ":\n";

    for (auto& row : board) {
        cout << row << endl;
    }

    cout << "-----------------\n";
}  



    return 0;
}