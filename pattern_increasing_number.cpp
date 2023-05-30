#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Value of Size\n";
    cin >> size;
    
    for (int i = 0; i < size*2-1; i++){
        for ( int j = 0; j < size*2-1; j++){
            int min = i < j ? i : j;
            min = min < (size*2-1)-i ? min :  (size*2-1)-i-1;
            min = min < (size*2-1)-j-1 ?  min  :  (size*2-1)-j-1;
            cout<<size-min<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
