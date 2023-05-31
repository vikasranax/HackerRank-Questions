#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cout<<"Enter Number of Students"<<endl;
    cin>>s;
    int grades;
    
    for(int i=1; i<=s; i++)
    {
        cout<<"Enter Marks of Student : "<<i<<endl;
        cin>>grades;
        
        if(grades<38)
        {
            cout<<"FAIL"<<endl;
            continue;
        }

        int diff = 5 - (grades%5);

        if(diff < 3)
        
            grades = diff + grades;
            cout<<"Rounded Off Marks "<<grades<<endl;
        
    }
    
    return 0;
}
