#include<iostream>
using namespace std;

int main(){

    int n;
    int l=1,m=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            if(arr[i]>>arr[i-1]){
                l++;
                m=max(m,l);
            }
        }
    }

    cout<<m<<endl;

    return 0;
}
