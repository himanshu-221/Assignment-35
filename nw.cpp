/*Write a C++ Program to find Sum of Array using function template.*/
#include<iostream>
using namespace std;
class Sum_of_Array
{
    public:
        template<class T>
        T Array(T arr[],int n)
        {
            cout<<"Enter Array elements\n";
            T sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                
            }
            cout<<arr[1];
            // for(int i=0;i<n;i++)
            // {
            //     sum+=arr[i];
            // }
            // return sum;
        }
};
int main()
{
    Sum_of_Array s1;
    int *arr =new int(5);
    cout<<"\nSum of Array is = "<<s1.Array<int>(arr,5);
    delete (arr);
    return 0;
}