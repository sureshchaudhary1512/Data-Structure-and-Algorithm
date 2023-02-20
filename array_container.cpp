#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,9> arr{11,22,33,44,55,66,77,88};
   
    for(int i = 0; i<arr.size(); i++)
    {
        cout<<arr.at(i)<<" ";
        
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    arr.at(8) = 99;

    for(auto x:arr)
    {
        cout<<x<<" ";
    }

    cout<<endl<<"arr.front() : "<<arr.front()<<endl;
    cout<<"arr.back() : "<<arr.back()<<endl;

    array<int,9> arr1;
    arr1.fill(5);
    for(auto z:arr1)
    cout<<z<<" ";

    arr1.swap(arr);
    cout<<endl<<"After swaping :";
    for(auto z:arr1)
    cout<<z<<" ";

    cout<<endl<<"arr.empty() : "<<arr.empty();

    return 0;
}

