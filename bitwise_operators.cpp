//priti
//23070123103
//exp4- bitwise operators 

#include<iostream>
#include<bitset>
using namespace std;
int main()
    {
       int a=2,b=3;
       cout<<boolalpha;
       cout<<"a&b: "<<bitset<4>(a&b)<<endl;
       cout<<"a|b: "<<bitset<4>(a|b)<<endl;
       cout<<"a^b: "<<bitset<4>(a^b)<<endl;
       cout<<"a<<b: "<<bitset<4>(a<<b)<<endl;
       cout<<"a>>b: "<<bitset<4>(a>>b)<<endl;
       return 0;
       
    }
