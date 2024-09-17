#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int size=0;
        int ones=0,zeros=0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '0')zeros++;
            else ones++;
        }

        if(zeros>ones)size=ones;
        else if (ones>zeros)size=zeros;
        else if(ones == zeros) size=ones;

        if(size % 2 ==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;

    }







    return 0;
}
