/*Write a C++ Program to Add two numbers using function template*/
#include<iostream>
using namespace std;
class Addition
{
    public:
        template <class T, class T1 = float, class T2 = float>
        T Add(T1 a, T2 b)
        {
            return (a+b);
        }
};
int main()
{
    Addition A;
    cout<<"Sum is = "<<A.Add<float,int>(4,78.9);
    return 0;
}