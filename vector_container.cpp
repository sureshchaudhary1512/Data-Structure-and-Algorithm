#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> vect1;
   vector<int> vect2(10,5); //vect(no_of_elements,value)
   vector<int> vect3(10);  // 10 elements contains zeros
   for(int i = 0; i < 10;i++)
   vect1.push_back(i);

   cout<<"Vector 1 : ";
   for(auto x:vect1)
   cout<<x<<" ";

   cout<<endl<<"Vector 2 : ";
   for(auto x:vect2)
   cout<<x<<" ";

    cout<<endl<<"vector 3 : ";
    for(auto i = vect3.begin(); i!=vect3.end(); i++)
    cout<<*i<<" ";

    cout<<endl<<"Reverse of Vector 1 : ";
    for(auto it = vect1.rbegin(); it!=vect1.rend(); it++)
    cout<<*it<<" ";

    cout<<endl<<"vect1.size() : "<<vect1.size()<<endl;
    cout<<"vect.max_size() : "<<vect1.max_size()<<endl; //maximum number of elements that the vector can hold
    cout<<"vect1.capacity() : "<<vect1.capacity()<<endl;
    vect1.shrink_to_fit(); //Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    cout<<"After Shrink to Fit : "<<vect1.capacity()<<endl;

    cout<<"Reverse of Vector 1 using reverse() : ";
    //reverse(vect1.begin(),vect1.end());
    reverse(vect1.begin(),vect1.end());
    for(auto it = vect1.begin(); it!=vect1.end(); it++)
    cout<<*it<<" ";
    
   
    vect1.push_back(9); //It push the elements into a vector from the back
    vect1.assign(5,8); //It assigns new value to the vector elements by replacing old ones
    cout<<endl<<"Vector after assign(5,8) : ";
    vect1.insert(vect1.begin()+2,7);
    vect1.insert(vect1.end()-2,9);
    for(auto it = vect1.begin(); it!=vect1.end(); it++)
    cout<<*it<<" ";
    vect1.pop_back();
    cout<<endl<<vect1.size();
    vect1.clear();
    cout<<endl<<"vect1.clear() the size is : "<<vect1.size();


    return 0;
}