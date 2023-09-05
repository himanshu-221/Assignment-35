/*Write a C++ program to find the largest of three elements using a template.*/
#include<iostream>
using namespace std;
class Maximum
{
    public:
        template<class M,class M1 =int>
        M max(M1 a, M1 b, M1 c)
        {
            return ((a>b?a:b)>c?(a>b?a:b):c);
        }

};
int main()
{
    Maximum M;
    cout<<"Maximum is = "<<M.max<int>(81,61,111);
    return 0;
}