#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
     int n;
     cin>>n;
      int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
  }int maxsum=INT_MIN,subarraysum=0;
  for(int i=0;i<n;i++)
  {
    subarraysum=0;
    for(int j=i;j<n;j++)
  {
   subarraysum+=a[j];
   if(subarraysum>maxsum)
    maxsum=subarraysum;
  }
}
cout<<maxsum;
}
