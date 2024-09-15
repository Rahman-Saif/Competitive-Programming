#include<bits/stdc++.h>
using namespace std;

int main(){


    string s1="qwertyuiopasdfghjkl;zxcvbnm,./";

    string u;
    char d;
    cin>>d;
    string s2;
    cin>>s2;

    if(d == 'R'){
    for(int i=0;i<s2.size();i++){
        for(int j=0;j<s1.size();j++){
            if(s2[i] == s1[j]){
                if(j>0)u+=s1[j-1];
                else u+=s1[j];
            }
        }
    }
    }

    if(d=='L'){
         for(int i=0;i<s2.size();i++){
        for(int j=s1.size()-1;j>=0;j--){
            if(s2[i] == s1[j]){
                if(j>s1.size()-1)u+=s1[j];
                else u+=s1[j+1];
            }
        }
    }
    }
    cout<<u<<endl;

    return 0;
}
