#include <bits/stdc++.h>
using namespace std;



int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() && j< s.size()){
                if(g[i]<=s[j]){
                    i++,j++;
                }
                else{
                     j++;
                }
               
        }
        return i;
    }

int main(){
    vector<int>g={1,2,3};
    vector<int>s={1,1};
    int ans= findContentChildren(g,s);


    cout<<ans<<endl;
    return 0;
}







