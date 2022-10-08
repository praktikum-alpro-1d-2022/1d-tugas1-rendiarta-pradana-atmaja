#include<iostream>
using namespace std;
int main()
{
    int a = 13;
    int b = 18;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<" Nilai a adalah = "<<a<<endl;
    cout<<" Nilai b adalah = "<<b<<endl;

    return 0;
}
