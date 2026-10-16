#include <bits/stdc++.h>
using namespace std;



void Subset_sum(vector<int> &arr, vector<int> &ans, int idx, int sum){
     if(idx==arr.size()){
        ans.push_back(sum);
        return;
     }
    
    Subset_sum(arr,ans,idx+1,sum+arr[idx]);
    
    Subset_sum(arr,ans,idx+1,sum);

}

int main(){
    vector<int>arr={3,1,2};
    vector<int>ans;
  
    Subset_sum(arr,ans,0,0);


    sort(ans.begin(),ans.end());
    for(auto it: ans){
    cout<<it<<",";
    }




    return 0;

}