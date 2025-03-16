#include<bits/stdc++.h>
using namespace std;
int  main(){
    int number;
    cin>> number;

    int ans=0;
    while(number>0){
        int reminder= number%10;
        ans=ans*10+reminder;
        number = number/10;
    }
    cout<< ans;
}