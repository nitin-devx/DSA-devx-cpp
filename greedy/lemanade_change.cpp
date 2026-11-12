 #include <bits/stdc++.h>
using namespace std;
 
 bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five=five+1;

            else if(bills[i]==10){
                if(five){
                    ten=ten+1;
                    five=five-1;
                }
                else{
                    return false;
                }
            }
            else{
                if(ten && five){
                    five=five-1;
                    ten=ten-1;
                }
                else if(five>=3){
                    five=five-3;
                }
                else {
                    return false;
                } 
            }

        }
        return true;
    }


    int main(){
        vector<int>bills={5,5,5,10,20};
        cout<<lemonadeChange(bills)<<endl;

        return 0;
    }