#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    bool flag=true;

    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }

    sort(arr,arr+n);

    if(arr[0] == arr[1]){
        flag=false;
    }


    if(flag){
        for(int i=0;i<n;i++){
            if(arr2[i]==arr[0]){
                cout<<i+1<<endl;
                break;
            }
        }
    }else{
        cout<<"Still Rozdil"<<endl;
    }


    return 0;
}
