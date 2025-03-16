#include<bits/stdc++.h>
using namespace std;

// Given an array of size n find first element index which repeating in array.

int main(){
    int n; 
    cin>> n;
    int arr[n];
     int maxi=INT_MIN;
    for ( int i = 0; i < n; i++)
    {
       cin>>arr[i]; 
        maxi=max(maxi,arr[i]);
    }

    int check[maxi+1];
   

    for (int i = 0; i <maxi+1; i++)
    {
        check[i]=-1;
       
    }
    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        if(check[arr[i]]!=-1){
             mini=min(mini,check[arr[i]]);
            return 0;
        }
        if(check[arr[i]]==-1){
            check[arr[i]]=i;
        }
        
    }
    if(mini==INT_MAX)
    cout<<"-1";
    else 
    cout<<mini;
}