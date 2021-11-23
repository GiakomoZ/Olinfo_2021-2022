#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int nVoti;
    int primaInsufficienza = -1;
    int ultimaSufficienza = -1;
    int nVotiVisualizzabili;

    fin >> nVoti;

    vector <int> voti(nVoti);

    for (int i = 0; i<nVoti; i++)
    {
        fin >> voti[i];
    }

    //calcolo del primo voto insufficiente
    int posizione = 0;
    while (primaInsufficienza == -1)
    {
        if (voti[posizione] < 6)
        {
            primaInsufficienza = posizione;
        }
        posizione += 1;
    }

    //calcolo dell'ultimo voto sufficiente
    posizione = nVoti -1;
    while (ultimaSufficienza == -1)
    {
        if (voti[posizione] >=6)
        {
            ultimaSufficienza = posizione;
        }
        posizione -= 1;
    }



    nVotiVisualizzabili = ultimaSufficienza - primaInsufficienza + 1;

    if (ultimaSufficienza < primaInsufficienza || ultimaSufficienza == -1 || primaInsufficienza == -1)
    {
        nVotiVisualizzabili = -1;
    }

    if (nVotiVisualizzabili == 1)
    {
        nVotiVisualizzabili = -1;
    }

    fout << nVotiVisualizzabili;
}
