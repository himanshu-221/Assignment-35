/*Write a C++ Program to Perform Simple Addition Function Using Templates.*/
#include<iostream>
using namespace std;
template<class T>
T Addition(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<Addition<char>('i',8);
    return 0;
}