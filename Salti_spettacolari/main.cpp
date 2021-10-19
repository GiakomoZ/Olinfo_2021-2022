#include <bits/stdc++.h>

using namespace std;

#define MAXN 30

ifstream fin ("input.txt");
ofstream fout ("output.txt");

int main()
{
    int salti;
    int potenza;
    int distanza;

    int i;

    fin >> distanza;

    salti = 0;
    for (i=MAXN; i>=0; i--)
    {
        potenza = pow(2, i);
        if (potenza <= distanza)
        {
            distanza = distanza - potenza;
            salti++;
        }
    }

    fout << salti;

    return 0;
}
