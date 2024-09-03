#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int l=1,m=1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(i>0){
            if(arr[i]>=arr[i-1]){
                l++;
                m=max(m,l);
            }
            l=1;
        }
    }

    cout<<m<<endl;


    return 0;
}
