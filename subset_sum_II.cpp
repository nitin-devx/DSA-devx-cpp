#include <bits/stdc++.h>
using namespace std;




void subset_Sum(vector<int>&arr,vector<int> &current,vector<vector<int>>&ans,int idx){
    ans.push_back(current);
    for(int i=idx;i< arr.size();i++){
        if( i!=idx && arr[i]==arr[i-1]) continue;
        current.push_back(arr[i]);
        subset_Sum(arr,current,ans,idx+1);
        current.pop_back();
    }
    
}

int main(){
    vector<int>arr={1,2,2};
    vector<vector<int>>ans;
    vector<int>current;
    subset_Sum(arr,current,ans,0);
    

    
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