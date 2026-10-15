#include <bits/stdc++.h>
using namespace std;
using namespace chrono;


void sum(vector<int> &candidates,vector<vector<int>>&ans,vector<int>&current,int i,int target){
        if(target==0){
                ans.push_back(current);
                return;
        }
         for(int j=i;j<candidates.size();j++){
                if(j>i && candidates[j]==candidates[j-1]) continue ;
                if(candidates[j]> target) break;
                current.push_back(candidates[j]);
                sum(candidates,ans,current,j+1,target-candidates[j]);
                current.pop_back();   
       }
   }

int main(){
    vector<int>arr={10,1,2,7,6,1,5};
    vector<int>current;
    vector<vector<int>>ans;
    int target=8;
    sort(arr.begin(),arr.end());



    sum(arr,ans,current,0,target);




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