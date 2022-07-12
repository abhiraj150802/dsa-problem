#include <bits/stdc++.h>
using namespace std;
 int main()
 {
  vector <pair<int ,int>> v1={{1,4},{8,12},{15,20}};
  vector<pair<int ,int>> v2={{3,9},{11,13}};
  vector<pair<int,int>> v3;
 int p2=0, p1=0;
 int n1=v1.size(),n2=v2.size();

  while(p1<n1 && p2 <n2)
  {
    //case 1 only boundry matching
    if(v1[p1].second==v2[p2].first)
    {
      v3.push_back({v1[p1].second,v2[p2].first});
      p1++;
    }
    if(v1[p1].first==v2[p2].second)
    {
      v3.push_back({v1[p1].first,v2[p2].second});
      p2++;
    }
    //case 2  no intersection
    if(v1[p1].second<v2[p2].first)
    {
      p1++;
    }
    if(v1[p1].first>v2[p2].second)
    {
       p2++;
    }
    //case 3 when one is inside other
    if( (v1[p1].first<=v2[p2].first && v1[p1].second>=v2[p2].second)  ||(v2[p2].first<=v1[p1].first && v2[p2].second>=v1[p1].second) )
    {
      v3.push_back(
        {  max(v1[p1].first,v2[p2].first),    min(v1[p1].second,v2[p2].second)   }
        );
        p1++;p2++;
    } 
    //case 4  some part is overlaping
    if(v1[p1].second>v2[p2].first && v1[p1].second<v2[p2].second)
    {
      v3.push_back({v2[p2].first,v1[p1].second});
      p1++;
    }
    if(v2[p2].second>v1[p1].first && v2[p2].second<v1[p1].second)
    {
       v3.push_back({v1[p1].first,v2[p2].second});
       p2++;
    }
  }
  for(int i=0;i<v3.size();i++)
  {
    cout<<v3[i].first<<","<<v3[i].second<<endl;
  }
  return 0;
 }