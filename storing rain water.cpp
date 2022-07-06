#include"bits/stdc++.h"  // trapping rain water problem
using namespace std;

// n sq complexity

// int main()
// {
//     int p1=0,i=0,sum=0,x,n=12;
//     int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
//     while(p1<n-1 && i<n-1)
//     {
//         i++;
//         if(a[i]>=a[p1])
//         {   //cout<<"hi"<<endl;
//             x=p1;
//             x++;
//             while(x!=i)
//             {
//                 sum=sum+(a[p1]-a[x]);
            
//                 x++;
//             }
//              p1=i;
//         }
//         if((a[i]<a[p1] )&& (i==n-1) )
//         {
//             p1++;
//             i=p1;
//             //cout<<"abhi"<<endl;
//         }
//       //cout<<i<<endl;
//     //    cout<<p1<<endl;

       
//     }
//     cout<<sum<<endl;
//     return 0;
// }


// n and n compelexity

 
//  int main()
//  {
//     int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
//     int lmax[12]; int rmax[12];
//     lmax[0]=0;// kuki first ele ke picche koe chota nahi hoga similarly rmax ke baad v nahi hoga
//     rmax[11]=0;
//     for(int i=1;i<11;i++)
//     {
//        lmax[i]=max(lmax[i-1],a[i]);
//     }
//     for(int i=10;i>=0;i--)
//     {
//         rmax[i]=max(a[i],rmax[i+1]);
//     }
//     int sum =0;
      
//     for(int i=1;i<11;i++)// last or first kavi v water store nahi kar payega
//     {
//      sum+=min(lmax[i],rmax[i])-a[i]; 
//     }
//     cout<<" total water that will be stored is"<<sum<<endl;

//     return 0;
//  }


// n complexity

int main()
{
      int a[]={0,1,0,2,1,0,1,3,2,1,2,1};int n=12;
      int l=1,r=n-2;
      int lmax=0,rmax=n-1;int water=0;
      while(l<=r)
      {
        if(a[lmax]<=a[rmax])
        {
            if(a[l]<a[lmax])
            {
              water+=a[lmax]-a[l];
              l++;
            }
            else{
                lmax=l;
                l++;
            }
        }
        else if(a[lmax]>a[rmax])
        {
            if(a[r]<a[rmax])
            {
                water+=a[rmax]-a[r];
               r--;
            }
            else
            {
                rmax=r;
                r--;
            }
        }
      }
      cout<<"stored water ="<<water<<endl;
    return 0;
}