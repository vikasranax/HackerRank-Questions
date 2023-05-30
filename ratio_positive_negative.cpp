#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, countpositive=0, countnegative=0, countzero=0;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>0){
        countpositive++;
        }
        else if(arr[i]==0){
        countzero++;
        }
        else {
        countnegative++;
        }
    }
    cout<<"positive  "<<(float)countpositive/n<<endl;
    cout<<"negative  "<<(float)countnegative/n<<endl;
    cout<<"zero  "<<(float)countzero/n;
    
    return 0;
}
