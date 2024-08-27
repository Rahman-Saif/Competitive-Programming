#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min=arr[0];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]){
                int k=arr[j];
                arr[j]=arr[i];
                arr[i]=k;
            }
        }
    }

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }


    return 0;
}
