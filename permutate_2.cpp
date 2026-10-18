#include <bits/stdc++.h>
using namespace std;
void permutate(vector<int>&arr,vector<vector<int>>&ans,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }

    unordered_set<int> used; 

    for(int i= idx;i<arr.size();i++){

        if(used.count(arr[i])) continue;


        used.insert(arr[i]);
        
        swap(arr[idx],arr[i]);
        permutate(arr,ans,idx+1);
        swap(arr[idx],arr[i]);
    }
}

int main(){
    vector<int>arr={1,1,3};
    vector<vector<int>>ans;


    permutate(arr,ans,0);


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