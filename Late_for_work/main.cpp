#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int h0, h1, m0, m1, minutes0, minutes1;
    fin>> h0>> m0>> h1>> m1;

    minutes0 = h0 * 60 + m0;
    minutes1 = h1 * 60 + m1;

    int sleptHours;
    if(h0 <= h1)
    {
        sleptHours = h1 - h0;
    }

    else
    {
        sleptHours = h1 + 24 - h0;
    }

    int sleptMinutes = m1 - m0;

    if(sleptMinutes < 0)
    {
        if (h1 == h0)
        {
            sleptHours = 24;
        }

        sleptMinutes = 60 + sleptMinutes;
        sleptHours--;
    }

    fout<<sleptHours<< " "<< sleptMinutes;

    return 0;
}
