#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,in;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        v.push_back(in);
    }
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        swap(v[low],v[high]);
        low++;
        high--;
    }
    //printing the array

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
}