#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the value of vector : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout << "Unique Element is : " << uniqueElement << endl;
    return 0;
}