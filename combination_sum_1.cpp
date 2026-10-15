#include <bits/stdc++.h>
using namespace std;
using namespace chrono;


void sum(vector<int> &candidates,vector<vector<int>>&ans,vector<int>&current,int i,int target){
       
       if(i==candidates.size()){
             if(target==0){
                ans.push_back(current);
             }
             return;
       }
       if (candidates[i] <= target){
        current.push_back(candidates[i]);
           target-=candidates[i];
        sum(candidates,ans,current,i+1,target);
           target+=candidates[i];
        current.pop_back();
       }
    
    sum(candidates,ans,current,i+1,target);
   }

int main(){
    vector<int>arr={1, 1, 1, 2, 2};
    vector<int>current;
    vector<vector<int>>ans;
    int target=4;
    
    
    sum(arr,ans,current,0,target);

    sort(ans.begin(),ans.end());

    for (auto& combo : ans) {      // each combo is a vector<int>
        cout << "[";
        for (int j = 0; j < combo.size(); j++) {
            cout << combo[j];
            if (j + 1 < combo.size()) cout << ",";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}