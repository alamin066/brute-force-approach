#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

 vector<int>v(n);
  for(int i=0;i<n;i++)
    {
       cin>>v[i];

   }
  set<int>v1;int ans=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i;j<n&&!v1.count(v[j]);j++)
    {
     v1.insert(v[j]);
      ans=max(ans,j-i+1);
    }
    v1.clear();

  }
  cout<<ans<<endl;
}

