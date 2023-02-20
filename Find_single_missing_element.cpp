#include<iostream>
#include<array>
using namespace std;

// Array is Sorted 
void findNum(int A[],int n)
{
    int sum = 0;
    for(int i = 0; i < n-1; i++)
    sum+=A[i];

    int s = n*(n+1)/2;
    cout<<"Missing Number : "<<s-sum;
}

void findNumber(int A[],int n)
{
    int i = 0;
    int l = A[0];
    int diff = l - i;
    for(i=0;i<n;i++)
    {
        if(A[i] - i != diff)
        {
            cout<<"Missing Number for 2nd Method :"<<i+diff;
            break;
        }
        
    }
}

// This code works for one by one missing element ar not next to each other
void multipMissing(int A[],int n)
{
    int diff = A[0];
    for(int i = 0; i < n;i++)
    {
        if(A[i] - i != diff)
        {
            cout<<" "<<i+diff;
            diff++;
        }
    }
}

//this works  multiple  missing even elements arenextto each other
void multipMissingss(int A[],int n)
{
    int diff = A[0];
    for(int i = 0; i < n;i++)
    {
        if(A[i] - i != diff)
        {
            while (diff < A[i] - i)
            {
                cout<<" "<<i+diff;
                diff++;
            }
            
        }
    }
}


int main()
{
    int A[] = {1,2,3,4,5,6,7,8,10};
    int B[] = {6,7,8,9,10,11,12,14,15,16};
    int c[] = {6,7,8,9,11,12,14,15,16,18,19,20};
    int d[] = {6,7,8,9,11,12,15,16,17,18,19};
    int n = 10;
    findNum(A,n);
    cout<<endl;
    findNumber(B,n);
    int n1 = 11;
    cout<<endl;
    multipMissing(c,n1);
    cout<<endl;
    multipMissingss(d,n1);

    // Hash Table or Hashing
    int F[] = {3,7,4,9,12,6,1,11,2,10};
    int N = sizeof(F)/sizeof(F[0]);
    int l = 1, h = 12;
    int H[12] = {0};
    cout<<endl<<"Missing Number from Hash table : ";
    for(int i = 0;i<N;i++)
    H[F[i]]++;
    for(int i = 1; i<h;i++)
    if(H[i] == 0)
    cout<<i<<" ";
    
    
    
    return 0;
}