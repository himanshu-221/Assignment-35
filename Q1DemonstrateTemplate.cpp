#include<iostream>
using namespace std;
template<class T1,class T2=int,class T3=float>
class Addition
{
    public:
        
        T1 add(T2 a, T3 b)
        {
            return (a+b);
        }

};
int main()
{
    Addition <int>A,A1;
    cout<<A.add(2.5,78.9)<<endl;
    cout<<A1.add(3.7,8)<<endl;
    return 0;
}