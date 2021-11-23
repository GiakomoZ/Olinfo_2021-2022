#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n;
    int max = -1;
    int s1, s2;
    int somma;

    fin >> n;

    for (int i = 0; i<n; i++)
    {

        fin >> s1;
        fin >> s2;

        somma = s1 + s2;

        if (somma > max && somma % 2 == 0)
        {

            max = somma;

        }

    }


    fout << max;

    return 0;

}
