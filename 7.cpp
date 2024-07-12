#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans+=digit;
        num=num/10;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    cout<<"The sum of digits of "<<num<<" is "<<sumOfDigits(num);
return 0;
}