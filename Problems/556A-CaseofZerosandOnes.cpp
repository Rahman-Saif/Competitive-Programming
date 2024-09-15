#include<bits/stdc++.h>
using namespace std;

int main(){


    int a;
    cin>>a;

    string s;
    cin>>s;

    int zeros=0,ones=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0')zeros++;
        else ones++;
    }

    if((zeros - ones)>=0){
        cout<<(zeros-ones)<<endl;
    }else{
        cout<<ones-zeros<<endl;
    }


    return 0;
}
