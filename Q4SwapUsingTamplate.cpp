
#include<iostream>
using namespace std;
class Swap
{
    public:
        template<class T>
        void swap(T a, T b)
        {
            T temp = a;
            a=b;
            b = temp;
            cout<<"A = "<<a<<"\tB = "<<b<<endl;
        }
};
int main()
{
    Swap s;
    s.swap<char>('e','r');
    return 0;
}