#include <iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)                           // Parameterized Constructor
        {
            cout<<"Inside Constructor\n";
            iSize = X;                          // Characteristics initialisation
            Arr = new int[iSize];               // Resource Allocation
        }

        ~ArrayX()                                // Destructor
        {
            cout<<"Inside Destructor\n";

            delete []Arr;                        // Resource Deallocation
        }

};

int main()
{
    ArrayX aobj1(5);                                // this 5 goes in constructor (X=5)   

    cout<<sizeof(aobj1)<<endl;        
    
    return 0;

}