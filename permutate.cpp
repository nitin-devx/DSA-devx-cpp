#include <bits/stdc++.h>
using namespace std;


void permutate(vector<int>&arr,vector<int>&current,vector<vector<int>>&ans,int freq[]){

    if(current.size()==arr.size()){
          ans.push_back(current);
          return;
    }

    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            current.push_back(arr[i]);
            freq[i]=1;
            permutate(arr,current,ans,freq);
            freq[i]=0;
            current.pop_back();
        }
    }
}

int main(){


    vector<int>arr={1,2,3,5};
    vector<vector<int>>ans;
    vector<int>current;
    int freq[arr.size()]={0};
    

    permutate(arr,current,ans,freq);

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