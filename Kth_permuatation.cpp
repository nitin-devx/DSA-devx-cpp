#include <bits/stdc++.h>
using namespace std;


int main(){
       int n=4,k=17;
       int fact=1;

       vector<int>numbers;
       for(int i=1;i<n;i++){
            fact=fact*i;
            numbers.push_back(i);
       }

       numbers.push_back(n);
       k=k-1;
       string ans="";
       while(true){
            int index = k / fact;
            ans=ans+to_string(numbers[index]);
            numbers.erase(numbers.begin()+index);

            if(numbers.size()==0){
                break;
            }

            k=k%fact;
            fact=fact/numbers.size();
       }

       cout<<ans<<endl;

    return 0;
}