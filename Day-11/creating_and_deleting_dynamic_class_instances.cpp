#include<iostream>
using namespace std;
class noisy
{
    int i_;
public :
    noisy(int i) : i_(i)
    {
        cout<<"Constructing noisy "<<i<<endl;
    }
    ~noisy()
    {
        cout<<"Destroying noisy "<<i_<<endl;
    }
};
int main()
{

    noisy N(1);

    noisy* p = new noisy(2);
    delete p;
    return 0;
}