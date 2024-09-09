#include<iostream>
using namespace std;

int main(){


    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int result=0;

    for(int i=0;i<k;i++){
        if(arr[i]<0){
            arr[i]=arr[i]*(-1);
        }
      result+=arr[i];

    }

    cout<<result<<endl;

    return 0;
}
