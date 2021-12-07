#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000
#define MINK -1000



ifstream fin ("input.txt");
ofstream fout ("output.txt");



int main()
{
    int n, k;
    int i, somma;

    fin >> n;
    fin >> k;

    int t[n];

    for(i=0; i<n;i++)
    {
        fin >> t[i];
        //cout << t[i]<< endl;
    }
    somma = 0;
    for (i = 0; i < k; i++)
    {
        somma = somma + t[i];
    }
    int massimo = somma;
    for (i = k; i < n; i++)
    {
        somma = somma + t[i];
        somma = somma - t[i-k];
        if(somma > massimo)
        {
            massimo = somma;
        }
    }

    fout << massimo;
    return 0;
}
