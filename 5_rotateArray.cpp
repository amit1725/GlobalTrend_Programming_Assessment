#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&nums,int start,int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
}

void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
}


int main(){
    int size,k;
    vector<int> nums;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<"Enter value of k: "<<endl;
    cin>>k;

    cout<<"Array after reversing by "<<k<<" steps:"<<endl;
    rotate(nums,k);
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
return 0;
}
