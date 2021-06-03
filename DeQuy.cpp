#include<iostream>
using namespace std;
// Ham de quy la ham goi lai chinh ban than no
static int a = 0;
void DeQuy ()
{
    if (a < 5)
    {
        cout<<a<<" ";
        a++;
        DeQuy();
    }

}
int main()
{
    DeQuy();
}