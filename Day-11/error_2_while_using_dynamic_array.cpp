//Using a dynamic array after deleting it
#include<iostream>
using namespace std;
int main()
{
    char* p = new char[10];
    p[0] = '!';
    delete [] p;
    cout<<"p[0] = "<<p[0];

    return 0;
}
