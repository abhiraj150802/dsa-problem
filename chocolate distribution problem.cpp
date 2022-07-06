#include"bits/stdc++.h"  // chocolate distribution problm
using namespace std;

int main()
{   
int ans = std::numeric_limits<int>::max();
int diff=INT_MAX; int x;  int m=4,s=0;
   vector<int> v={1,9,9,3,4,7,12,56};
  sort(v.begin(), v.end());
//    for(int i =0 ;i<8;i++)
//    {
//     cout<<v[i]<<endl;
//    }
    
    for(int m=4;m<8;m++)
    {
        x=(v[m]-v[s]);
        s++;
        cout<<"x="<<x;
       
        if(x<ans)
        {  
            ans=x;
            //  cout<<ans<<endl;
            x=0;
        }
        
    }
     cout<<"difference b/w max and min is "<<ans<<endl;
    return 0;
}