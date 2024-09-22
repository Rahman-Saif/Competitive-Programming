#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin>>k;

    while(k--){
        int x,n,m,s=0,p=0;
        cin>>x>>n>>m;

        while(x>0 && n && x/2+10 <x)
        {
            n--;
            x=x/2+10;
        }

        if(x <= m*10)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
