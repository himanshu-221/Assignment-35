/*Write a C++ Program to find Sum of Array using function template.*/
#include<iostream>
using namespace std;
class Sum_of_Array
{
    public:
        template<class T>
        T Array(T &arr,int n)
        {
            T sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=arr[i];
            }
            return sum;
        }
};
int main()
{
    Sum_of_Array s1;
    int Iarr[] = {1,2,3,4,5};
    float Farr[] = {1.1,1.2,1.3,1.4,1.5};
    cout<<"\nSum of Array is = "<<s1.Array<int>(Iarr,5);
    return 0;
}