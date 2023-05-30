#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, sum=0;
    cout<<"Enter number of elements\n";
    cin>>a;
    int arr[a];
    cout<<"Enter Elements."<<endl;

    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr, arr+a);

    cout<<sum-arr[a-1]<<" "<<sum-arr[0];

    return 0;
}
