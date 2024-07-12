#include<bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeatingChar(string s){
    int maxlen=0,left=0,right=0,n=s.length();
    vector<bool> isVisited(256,0);
    while(right<n){
        while(isVisited[s[right]]){
            isVisited[s[left]]=0;
            left++;
        }
        isVisited[s[right]]=1;
        maxlen=max(maxlen,right-left+1);
        right++;
    }
    return maxlen;
}

int main(){
    string s="abcabcbb";
    int ans=longestSubstringWithoutRepeatingChar(s);
    cout<<"Longest substring without repeating characters of string "<<s<<" is "<<ans<<endl;
    s="bbbbb";
    ans=longestSubstringWithoutRepeatingChar(s);
    cout<<"Longest substring without repeating characters of string "<<s<<"is "<<ans<<endl;
    s="pwwkew";
     ans=longestSubstringWithoutRepeatingChar(s);
    cout<<"Longest substring without repeating characters of string "<<s<<"is "<<ans<<endl;
return 0;
}
