#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&m,vector<string>&ans,vector<vector<int>>&visited,string move,int n,int i,int j,int di[],int dj[]){

    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return;
    }
    string dir ="DLRU";
    for(int idx=0;idx<4;idx++){
        int nexti=i+di[idx];
        int nextj=j+dj[idx];
        if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !visited[nexti][nextj] && m[nexti][nextj]==1 ){
            visited[nexti][nextj]=1;
            solve(m,ans,visited,move+dir[idx],n,nexti,nextj,di,dj);
            visited[nexti][nextj]=0;
        }
    }




    // //down
    // if(i+1<n && !visited[i+1][j] && m[i+1][j]==1){
    //     visited[i][j]=1;
    //     solve(m,ans,visited,move+'D',n,i+1,j);
    //     visited[i][j]=0;
    // }

    // //left
    // if(j-1<=0 && !visited[i][j-1] && m[i][j-1]==1){
    //     visited[i][j]=1;
    //     solve(m,ans,visited,move+'L',n,i,j-1);
    //     visited[i][j]=0;
    // }


    // //Right
    // if(j+1<n && !visited[i][j+1] && m[i][j+1]){
    //     visited[i][j]=1;
    //     solve(m,ans,visited,move+'R',n,i,j+1);
    //     visited[i][j]=0;
    // }

    // //upword
    // if(i-1>=0 && !visited[i-1][j] && m[i-1][j]){
    //     visited[i][j]=1;
    //     solve(m,ans,visited,move+'U',n,i-1,j);
    //     visited[i][j]=0;
    // }



}




int main(){
    int n=4;
    vector<vector<int>>m={{1,0,0,0},
                         {1,1,0,1},
                        {1,1,0,0},
                         {0,1,1,1}};
    vector<string>ans;
    vector<vector<int>>visited(n,vector<int>(n,0));
    string move;
    int di[]={+1,0,0,-1};
    int dj[]={0,-1,+1,0};
    if(m[0][0]==1) solve(m,ans,visited,move,n,0,0,di,dj);
    for(auto it: ans){
    cout<<it<<",";
    }
    cout<<endl;



    return 0;
}