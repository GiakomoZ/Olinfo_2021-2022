#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream fin ("input.txt");
    ofstream fout ("outputtxt");

    int n1, n2;
    int vac1 [n1];
    int vac2 [n2];

    for (int i = 0; i < n1; i++)
    {
        fin >> vac1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        fin >> vac2[i];
    }

    sort (vac1, vac1+n1);
    sort (vac2, vac2+n2);

    int index1 = 0, index2 = 0, conta = 0;

    cout << vac1;
}
