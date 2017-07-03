#include <iostream>
using namespace std;
void output_stars(int num)
{
    cout<<num<<": ";
    for (int outer = 1; outer <= 1; outer++)
    {
        for (int inner = outer; inner <= num; inner++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
}
