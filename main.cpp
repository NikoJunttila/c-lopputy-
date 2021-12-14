#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    int korttiluku, summa = 0, peli, summa2 = 0, alotus = 0, rahaa = 100, veto, random, lainaa = 0, laina;

    srand(time(NULL));

    cout << "                 Paina 1 korttien nostoa varten ja 2 lopettaaksesi. " << endl << endl << endl << endl << endl << endl;

    while (rahaa != 0)
    {
        cout << endl << "Paljonko haluat lyoda vetoa?" << endl;
        cin >> veto;
        if (veto > rahaa)
        {
            cout << "Ei ole tarpeeksi rahaa";
            alotus = 1;
            random = 2;
        }
        if (alotus == 0)
        {
            cout << "Pelaaja: " << endl;


            korttiluku = rand() % 11 + 1;

            if (korttiluku == 11)
                cout << " _____" << endl << "|11   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 1)
                cout << " _____" << endl << "|1    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 2)
                cout << " _____" << endl << "|2    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 3)
                cout << " _____" << endl << "|3    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 4)
                cout << " _____" << endl << "|4    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 5)
                cout << " _____" << endl << "|5    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 6)
                cout << " _____" << endl << "|6    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 7)
                cout << " _____" << endl << "|7    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 8)
                cout << " _____" << endl << "|8    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 9)
                cout << " _____" << endl << "|9    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            if (korttiluku == 10)
                cout << " _____" << endl << "|10   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
            summa = korttiluku;
            cin >> peli;

            while (peli != 2)
            {
                srand(time(NULL));

                korttiluku = rand() % 11 + 1;
                summa = summa + korttiluku;

                if (korttiluku == 11)
                    cout << " _____" << endl << "|11   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 1)
                    cout << " _____" << endl << "|1    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 2)
                    cout << " _____" << endl << "|2    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 3)
                    cout << " _____" << endl << "|3    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 4)
                    cout << " _____" << endl << "|4    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 5)
                    cout << " _____" << endl << "|5    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 6)
                    cout << " _____" << endl << "|6    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 7)
                    cout << " _____" << endl << "|7    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 8)
                    cout << " _____" << endl << "|8    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 9)
                    cout << " _____" << endl << "|9    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 10)
                    cout << " _____" << endl << "|10   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";

                cout << "              " << "Summa= " << summa << endl;
                if (summa > 21)
                {
                    cout << endl << "                                  Havisit";
                    alotus = 1;
                    random = 0;
                    break;
                }

                cout << endl;
                cin >> peli;
            }
        }
        if (alotus == 0)
        {
            cout << endl << "Jakaja: " << endl;
            while (summa2 < 21)
            {


                korttiluku = rand() % 11 + 1;
                summa2 = summa2 + korttiluku;

                if (korttiluku == 11)
                    cout << " _____" << endl << "|11   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 1)
                    cout << " _____" << endl << "|1    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 2)
                    cout << " _____" << endl << "|2    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 3)
                    cout << " _____" << endl << "|3    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 4)
                    cout << " _____" << endl << "|4    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 5)
                    cout << " _____" << endl << "|5    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 6)
                    cout << " _____" << endl << "|6    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 7)
                    cout << " _____" << endl << "|7    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 8)
                    cout << " _____" << endl << "|8    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 9)
                    cout << " _____" << endl << "|9    |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";
                if (korttiluku == 10)
                    cout << " _____" << endl << "|10   |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << "|     |" << endl << " -----";

                cout << "              " << "Summa= " << summa2 << endl;

                if (summa2 > 21)
                {
                    cout << endl << "                                  Voitit";
                    random = 1;
                    break;
                }
                if (summa2 > summa)
                {
                    cout << endl << "                                  Havisit";
                    random = 0;
                    break;
                }
                if (summa == 21 && summa2 == 21)
                {
                    random = 2;
                    cout << "                                 Tasapeli";
                    break;
                }
            }
        }
        if (summa2 == summa && random != 2)
        {
            cout << "                                  Tasapeli";
        }



        if (random == 1)
        {
            rahaa = rahaa + veto;
            cout << endl << "                  " << "Rahaa jaljella: " << rahaa;
        }
        else if (random == 0)
        {
            rahaa = rahaa - veto;
            cout << endl << endl;
            cout << endl << "                       " << "Rahaa jaljella: " << rahaa << endl;
        }
        if (rahaa == 0 && lainaa == 0)
        {
            cout << endl;
            cout << "                       Haluatko ottaa lainaa 50€, etta voit jatkaa pelaamista?(1 kylla tai 2 ei)" << endl;
            cin >> laina;

            if (laina == 1)
            {
                rahaa = 50;
                lainaa = 1;
            }
        }
        alotus = 0;
        summa = 0;
        summa2 = 0;
    }

    cout << endl << endl << endl;
    cout << endl << "                                  Peli loppu" << endl << endl << endl << endl << endl << endl << endl;

    return 0;
}

