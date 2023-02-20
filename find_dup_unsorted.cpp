#include<iostream>
using namespace std;

void method1(int A[],int n)
{
    cout<<"Method 1 "<<endl;
    for(int i = 0; i < n-1; i++)
    {
        int count = 1;
        if (A[i] != -1)
        {
            for(int j = i+1; j < n; j++)
            {
                if (A[j]==A[i])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1)
            {
                cout<<"The Number "<<A[i]<<" is repeated for "<<count<<" times"<<endl;
            }   
        }   
    }
}

void method2Hashing(int a[],int h[],int n,int m)
{
    cout<<"Method2 Hashing or Hashtable  : "<<endl;
    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    
    for (int j = 0; j < m; j++)
    {
        if(h[j]>1)
        {
            cout<<"The Number "<<j<<" is repeated for "<<h[j]<<" times"<<endl;
        } 
    }
    
}

int main()
{
    int A[] = {8,3,6,4,6,5,6,8,2,7};
    int n = sizeof(A)/sizeof(A[0]);

    method1(A,n);

    int H[9] = {0};
    int m = 9;
    method2Hashing(A,H,n,m);

    return 0;
}