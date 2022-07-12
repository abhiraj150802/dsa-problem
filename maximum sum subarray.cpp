
// C++ program to demonstrate next lexicographically
// greater permutation of a word
 
#include <algorithm>
#include <iostream>
 
using namespace std;
 
int main()
{
    int a[]={-1,-3,-6,-8,-4,-2};
    int p=0;
    int n=6;
    int sum=a[p] ,
    storage=sum;
    for(int i=1;i<n;i++)
    {
      if(sum+a[i]>sum &&sum+a[i]>a[i])
      {
         sum=sum+a[i];
      }
      else if(sum+a[i]>sum &&sum+a[i]<a[i])
      {
        storage=max(storage,sum);
        p=i;
        sum=a[p];
      }
      else{
            storage=max(storage,sum);
            p=i;
            sum=a[p];
      }


    }
    cout<<"maximum sum of continuous subarray is"<<storage<<endl;
   
    return 0;
} 
