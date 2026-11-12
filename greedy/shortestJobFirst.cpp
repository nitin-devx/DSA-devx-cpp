#include <bits/stdc++.h>
using namespace std;

int sjf(vector<int>& job){
    int time=0,wt=0;
    sort(job.begin(),job.end());
    for(int i=0;i<job.size();i++){
        wt=wt+time;
        time=time+job[i];
    }

    return (wt/job.size());
}


int main(){


    vector<int>job={4,3,7,1,2};
    cout<<sjf(job)<<endl;
    return 0;
}