#include <bits/stdc++.h>

using namespace std;

int main()
{

     ifstream fin ("input.txt");
     ofstream fout ("output.txt");

     int numeroGiocate;
     int A, C, red, green, blue;
     int minimor, minimog, minimob;
     int red2, green2, blue2;
     int giocatar, giocatag, giocatab;
     int massimo;

     fin >> numeroGiocate;

     for (int i = 0; i<numeroGiocate; i++)
     {

         fin >> A >> C >> red >> green >> blue;
         red2 = red+1;
         green2 = green+1;
         blue2 = blue+1;
         minimor = min(min(red2, green), blue);
         minimog = min(min(red, green2), blue);
         minimob = min(min(red, green), blue2);

         giocatar = A * (red2*red2 + green*green + blue*blue) + C * minimor;
         giocatag = A * (red*red + green2*green2 + blue*blue) + C * minimog;
         giocatab = A * (red*red + green*green + blue2*blue2) + C * minimob;

         cout << giocatar << endl << giocatag << endl << giocatab << endl;

         massimo = max(max(giocatar, giocatag), giocatab);
         if (massimo == giocatar)
         {
             fout << "RED" << endl;
         }
         else
         {
             if (massimo == giocatag)
             {
                 fout << "GREEN" << endl;
             }
             else
             {
                 fout << "BLUE" << endl;
             }
         }
     }

    return 0;
}
