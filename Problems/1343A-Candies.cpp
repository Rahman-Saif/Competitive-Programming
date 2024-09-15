#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k;

        for(int i=2;i<=29;i++){
                int s= pow(2,i)-1 ;
            if(k % s== 0){
                x=k/s;
            }
        }
        cout<<x<<endl;
    }







}
