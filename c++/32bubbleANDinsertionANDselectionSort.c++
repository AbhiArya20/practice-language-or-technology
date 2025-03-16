#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // Bubble Sort

    for (int i = 0   ; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
           if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
        }
        
    }


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    // Selection Sort

    for (int i = 0; i < n; i++)
    {
       int min=i;
       for(int j=i+1; j<n; j++)
       {
           if(arr[j]<arr[min])
           min=j;
       }
       swap(arr[min],arr[i]);
    }
    
      for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    // Insertion Sort

    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int key= arr[i];
        while(j>=0 && arr[j]>arr[i]){
        arr[j+1]= arr[j];
        j--;
        }
        arr[j+1]=key;
    }


       for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}