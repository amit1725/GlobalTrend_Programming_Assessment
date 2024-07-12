#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> arr){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return (max-min);
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter size of array: "<<endl;
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"Maximum difference between any two elements in given array is: "<<maxDiff(arr)<<endl;
return 0;
}