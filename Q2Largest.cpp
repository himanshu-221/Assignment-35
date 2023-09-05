/*/*Write a C++ Program to find Largest among two numbers using function template.*/
#include<iostream>
using namespace std;
class Maximum
{
    public:
        template<class T>
        T max(T a, T b)
        {
            return a>b?a:b;
        }
};
int main()
{
    Maximum M;
    cout<<"Maximum is = "<<M.max<int>(34,23.7);
    return 0;
}