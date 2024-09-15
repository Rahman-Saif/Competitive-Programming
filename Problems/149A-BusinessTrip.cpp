#include<bits/stdc++.h>
using namespace std;

int main(){


    int k;
    cin>>k;
    int arr[12];
    int count=0;


    for(int i=0;i<12;i++){
        cin>>arr[i];
    }

    sort(arr,arr+12);



    if(k==0)count=0;
    else {
        int sum=0;
        for(int i=11;i>=0;i--){
            sum+=arr[i];
            count++;
            if(sum>=k)break;

        }
        if(k>sum)count=-1;

    }
    cout<<count<<endl;

    return 0;
}
