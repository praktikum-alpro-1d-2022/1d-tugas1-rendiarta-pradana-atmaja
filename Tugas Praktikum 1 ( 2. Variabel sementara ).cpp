#include<iostream>
using namespace std;
int main()
{
    int a = 13;
    int b = 18;
    int c;

    c = a;
    a = b;
    b = c;

    cout<<" Nilai a adalah = "<<a<<endl;
    cout<<" Nilai b adalah = "<<b<<endl;
    return 0;
}
