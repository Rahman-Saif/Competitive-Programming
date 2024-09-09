#include<bits/stdc++.h>
using namespace std;


int main(){


    int n;
    cin>>n;

    while(n>=0){
        int k;
        cin>>k;

        int cnt2021=k%2020;
        int cnt2020=(k-cnt2021)/2020-cnt2021;

        if(cnt2020>=0 && 2020*cnt2020 + 2021*cnt2021 == k){
            cout<<"YES\n";
        }else{
        cout<<"NO\n";
    }
    n--;
    }


    return 0;
}
