#include<bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(string s){
    bool flag=false;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            flag=true;
        }
        else{
            return false;
        }
    }
    return flag;
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    bool ans=isAlphaNumeric(s);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
return 0;
}
