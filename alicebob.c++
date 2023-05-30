#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alice = 0, bob = 0;
    int arrA[3], arrB[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arrA[i];
        cin >> arrB[i];
        if (arrA[i] > arrB[i])
        {
            alice++;
        }

        else if (arrA[i] < arrB[i])
        {
            bob++;
        }
    }
    cout << alice << " " << bob;

    return 0;
}
