#include"bits/stdc++.h"// thre way partioning of an array
using namespace std;

int main()
{   
int ans = std::numeric_limits<int>::max();
    int a[]={1,4,45,6,0,19};
    int i=0 ,j=0,end=5,sum=0; int count=0;
    while(j<=end)
    {
        if(sum<= 51)
        {   
            if(count==1)
            {
                i=j;
                
                count=0;
                sum=0;
            }
            else{
                sum=sum+a[j];
                j++;
            }
        }
        else{
            if(j-i<ans)
              ans=j-i;
            count=1;
            sum=sum-a[i];
            i++;  
        }
    }
    cout<<ans<<endl;

}