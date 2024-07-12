#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int a,b;
    cout<<"Enter number1: "<<endl;
    cin>>a;
    cout<<"Enter number2: "<<endl;
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
return 0;
}
