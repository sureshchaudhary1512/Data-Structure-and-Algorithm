#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> Dq;
    for(int i = 0; i<10; i++)
    Dq.push_back(i);

    cout<<"Deque : ";
    for(int i = 0; i<Dq.size();i++)
    cout<<Dq.at(i)<<" ";

    Dq.push_front(11);
    Dq.push_front(12);
    cout<<endl;
    for(int i = 0; i<Dq.size();i++)
    cout<<Dq.at(i)<<" ";

    Dq.pop_front();
    cout<<endl;
    for(int i = 0; i<Dq.size();i++)
    cout<<Dq.at(i)<<" ";

    
    Dq.insert(Dq.end()-5,55);
    cout<<endl;
    for(int i = 0; i<Dq.size();i++)
    cout<<Dq.at(i)<<" ";


    
    return 0;


}