#include<bits/stdc++.h>
using namespace std;

// Given an array record breaking day is possible only if previous and next element is less than current.
int main(){
    int n;
    cin>> n;
    int arr[n+1];
     arr[n]=-1;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    int prevMax=INT_MIN;
    int counter=0;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]>prevMax && arr[i]>arr[i+1])
        counter++;
        prevMax= max(prevMax,arr[i]);
    }
    cout<<counter<<" ";
    
}