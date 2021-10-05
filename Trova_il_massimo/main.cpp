#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n; //numero valori
    int max = -1000; //valore minimo
    int s; //singolo valore letto

    fin >> n; //legge numero valori

    for (int i=0; i<n; i++)
    {

        fin >> s;
        if (s > max)
        {

            max = s;

        }

    }

    fout << max;

    return 0;

}
