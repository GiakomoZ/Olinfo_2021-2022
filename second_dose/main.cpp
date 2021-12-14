#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n1, n2;

    fin >> n1 >> n2;

    int vac[n1 + n2];

    for (int i=0; i < n1+n2; i++)
    {
        fin >> vac[i];
    }

    sort(vac, vac+n1+n2);

    int conta = 0;

    for (int j = 0; j < n1+n2-1; j++)
    {
        if (vac[j] == vac[j+1])
        {
            conta++;
        }
    }

    fout << conta;
}
