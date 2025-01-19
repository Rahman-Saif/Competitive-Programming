

#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;


int main()
{
    string s;
    cin>>s;
    
    int length=s.length();
    // cout<<length;
    string c(length, ' '); // Initialize `c` with the same length as `s` and fill with spaces
    
    for(int i=0;i<length;i++){
        c[i]=s[length-i-1];
        // cout<<c[i];
    }
    
    cout<<c<<endl;

    return 0;
}