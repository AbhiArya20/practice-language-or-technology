#include <bits/stdc++.h>
using namespace std;
// given a char Array find out the largest word;
int main()
{
    int n;
    cin >> n;
     cin.ignore();
    char arr[n + 1];

    cin.getline(arr, n);
   

    int it = 0;
    int curlen = 0;
    int maxlen = 0;
    int start=0; int end=0;
    while (1)
    {
        if (arr[it] == ' ' || arr[it] == '\0')
        {
            if (maxlen < curlen)
            {
                maxlen = curlen;
                end=start;
            }
            start= it+1;
            curlen = 0;
        }
        else
            curlen++;
        if (arr[it] == '\0')
            break;

        it++;
    }

    cout << maxlen << endl;
    for ( int i = 0; i < maxlen; i++)
    {
        cout<<arr[end+i];
    }
    
}