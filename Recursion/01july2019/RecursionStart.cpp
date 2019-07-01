#include<iostream>
using namespace std;

void PD(int  n)
{
    if(n==0)
    {
        return ;
    }
    PD(n-1);
    cout<<n<<", ";

}

int main()
{
    PD(5);
}