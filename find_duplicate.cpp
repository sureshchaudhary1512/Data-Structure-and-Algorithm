#include<iostream>
using namespace std;

void method1(int A[],int n)
{
    // To check duplicate Number 
    int last_duplicate = 0;
    cout<<"Method1 : "<<endl;
    cout<<"Duplicate Number are : ";
    for(int i = 0; i<n; i++)
    {
        if (A[i] == A[i+1] && A[i] != last_duplicate)
        {
            cout<<A[i]<<" ";
            last_duplicate = A[i];
        } 
    }

    // To check no of duplicate count
    for(int p; p < n;p++)
    {
        if (A[p] == A[p+1])
        {
            int q = p+1;
            while (A[q] == A[p])
            {
                q++;
            }
            cout<<endl<<"The Numbers : "<<A[p]<<" is repeated for "<<q-p<<" times";
            p = q - 1;   
        }
    }
}


void method2Hashing(int A[], int H[], int n, int m)
{
    cout<<endl<<"Method2 Hashing/HashTable : "<<endl;
    //to update hash table
    for (int p = 0; p < n; p++)
    {
        H[A[p]]++;
    }
    
    // To count duplicate number
    for (int q = 0; q < m; q++)
    {
        if(H[q] > 1)
        cout<<"The Number : "<<q<<" is repeated for "<<H[q]<<" times"<<endl;
    }
    
}



int main()
{
    int A[] = {3,5,8,8,9,10,11,12,12,12,15,16,17,18,18};
    int n1 = sizeof(A)/sizeof(A[0]);
    method1(A,n1);

    int H[20] = {0};
    int m = 20;
    method2Hashing(A,H,n1,m);
    
    return 0;
}