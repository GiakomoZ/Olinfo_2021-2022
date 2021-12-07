#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int nMuffin;
    int nMuffinPrelevabili;
    int nMuffinDaPrelevare;
    int sommaGusti;
    int sommaGustiMax = 0;
    int posizionePrecedente;

    fin >> nMuffin;
    fin >> nMuffinPrelevabili;

    vector <int> gusti(nMuffin);

    for (int i = 0; i <= nMuffin - nMuffinPrelevabili; i++)
    {
        sommaGusti = 0;
        for (int j = 0; j < nMuffinPrelevabili; j++)
        {
            sommaGusti = sommaGusti;
        }
    }



    fout << sommaGustiMax;
}
