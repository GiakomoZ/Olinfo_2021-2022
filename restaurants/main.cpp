#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int n_ristoratori, ristoranteVincente, votoRVincente, valore;

    fin >> n_ristoratori;

    vector<int> voti (n_ristoratori);

    for (int i = 0; i < n_ristoratori; i++)
    {
        for (int j = 0; j < n_ristoratori+1; j++)
        {
            fin >> valore;
            voti[i] += valore;
        }
    }

    ristoranteVincente = 1;
    votoRVincente = voti[0];
    cout << ristoranteVincente << endl;

    for (int k = 1; k < n_ristoratori; k++)
    {
        if (voti[k] > votoRVincente)
        {
            ristoranteVincente = k+1;
            votoRVincente = voti[k];
        }
        cout << ristoranteVincente <<endl;
    }

}
