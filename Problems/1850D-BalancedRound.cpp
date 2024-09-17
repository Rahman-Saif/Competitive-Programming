#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b,count=1,ans=1;

        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }

        sort(arr,arr+a);

        for(int i=1;i<a;i++){
            int l=arr[i]-arr[i-1];
            if(l>b)count=1;
            else  count++;
            ans=max(ans,count);
        }
        cout<<(a-ans)<<endl;
    }


    return 0;
}
