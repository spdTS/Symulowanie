#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Job {
private:
    int valueproces = 0;
    int numbermachine = 0;
    int numberproces = 0;
public:
    void setvaluetime(int t) {
        valueproces = t;
    }

    void setvaluenm(int nm) {
        numbermachine = nm;
    }

    void setnumberproces(int np) {
        numberproces = np;
    }

    int getnumbermachine() {
        return numbermachine;
    }

    int getnumberproces() {
        return numberproces;
    }

    int getvalue() {
        return valueproces;
    }

    friend ostream &operator<<(ostream &out, const Job object);

    bool operator<(const Job &first) const {
        return (valueproces > first.valueproces);
    }

};

ostream &operator<<(ostream &out, Job object) {
    out << "Numer maszyny to: " << object.getnumbermachine() << "Numer procesu to: " << object.getnumberproces()
        << "Wartosc: " << object.getvalue();
    return out;

}

int Timeofsimulating(vector<Job> tab, int *tabhelp, int np, int nm) {
    int timmachine[nm];
    int prioritique[nm];
    int Cmax1 = 0, Cmax2 = 0;
    for (int i = 1; i < nm + 1; i++) {
        timmachine[i] = 0;
    }


    for (int j = 0; j < np; j++) {

        for (int i = 1; i < nm + 1; i++) {
            int tmp = 0;
            while ((tabhelp[j] != tab[tmp].getnumberproces()) || (i != tab[tmp].getnumbermachine())) {
                tmp++;
            }

            if (i == 1) {
                timmachine[i] = timmachine[i] + tab[tmp].getvalue();

            } else {
                if (timmachine[i - 1] >= timmachine[i] && j != 0) {
                    timmachine[i] = timmachine[i] + (timmachine[i - 1] - timmachine[i]);
                    timmachine[i] = timmachine[i] + tab[tmp].getvalue();

                } else if (timmachine[i - 1] < timmachine[i] && j != 0) {
                    timmachine[i] = timmachine[i] + tab[tmp].getvalue();


                }
                if (i == nm && j == 0) {
                    for (int k = nm; k != 1; k--) {
                        timmachine[k] = timmachine[k] + timmachine[k - 1];
                    }
                }
            }
            if (i == nm) {
                Cmax1 = timmachine[i];
            }


        }
    }
  /*  for (int i = 1; i < nm + 1; i++) {
        cout << "Całkowity czas realizacji to: " << timmachine[i] << endl;
    }
    cout << "KONIEC" << endl;
*/
    return Cmax1;



}

void NehQue(vector<Job> tab, int np, int *tabhelp) {
    Job example;
    vector<Job> nehque;
    int nmhelp = 1;

    while (nmhelp != np + 1) {
        int tmp = 0;
        int valueproces = 0;
        while (tmp != tab.size()) {
            if (tab[tmp].getnumberproces() == nmhelp) {
                valueproces = valueproces + tab[tmp].getvalue();
            }
            tmp++;
        }
        example.setvaluetime(valueproces);
        example.setnumberproces(nmhelp);
        nehque.push_back(example);
        nmhelp++;

    }
    sort(nehque.begin(), nehque.end());
    for (int i = 0; i < np; i++) {
        tabhelp[i] = nehque[i].getnumberproces();
    }

}

double Propabilityfunction(double piactually, double pinext, double temperature) {
    double valuepropability = 0;
    if(pinext>piactually) {
        valuepropability = ((piactually - pinext) / temperature);
        double expon=0;
        expon=exp(valuepropability);
        return expon;
    } else
        return 1;


}

int main() {
    Job object;
    double temperaturestart=0;
    double temperatureend = 0;
    double coeficient = 0;
    double valueiteration = 0;
    double piactually = 0;
    double pinext = 0;
    int randomswapvalue = 0;
    double firstpropability = 0;
    double actualypropability=0;

    vector<Job> tab;
    int nm, np, p1[100][100];
    ifstream data("data.txt");
    data >> np >> nm;
    int tabhelp[np];
    for (int i = 1; i < np + 1; i++) {
        for (int j = 1; j < nm + 1; j++) {
            data >> p1[j][i];
        }
    }
    data.close();
    for (int i = 1; i < np + 1; i++) {
        for (int j = 1; j < nm + 1; j++) {
            object.setnumberproces(i);
            object.setvaluenm(j);
            object.setvaluetime(p1[j][i]);
            tab.push_back(object);
        }
    }

    NehQue(tab, np, tabhelp);

    piactually = Timeofsimulating(tab, tabhelp, np, nm);
    cout << "Podaj temperature poczatkowa: " << endl;
    cin >> temperaturestart;
    cout << "Podaj temperature koncowa: " << endl;
    cin >> temperatureend;
    valueiteration = temperaturestart-temperatureend;//(rand() % 100) + 1;
    double tmpiteration = 1;
    //cout << "Liczba iteracji wynosi: " << valueiteration << endl;

/* Część z wykorzystaniem swapa */
 /*   while (temperaturestart >1 ) {

        coeficient = (tmpiteration / valueiteration);
        temperaturestart = (temperaturestart - (temperaturestart * coeficient));

        randomswapvalue = (rand() % np-1) + 0;
        int tmp = 0;
        tmp = tabhelp[randomswapvalue];
        tabhelp[randomswapvalue] = tabhelp[randomswapvalue + 1];
        tabhelp[randomswapvalue + 1] = tmp;

        pinext = Timeofsimulating(tab, tabhelp, np, nm);
        if(firstpropability==0) {
            firstpropability = Propabilityfunction(piactually, pinext, temperaturestart);
        } else{
            if(firstpropability>actualypropability)
            {
                firstpropability=actualypropability;
                piactually=pinext;
            }
        }
        tmpiteration++;
       // cout<< "Wspolczynnik prawdopodo to: "<<actualypropability<<endl;
     //   cout<< "Wartosc wyrzarzania to: "<<pinext<<endl;
    }
    cout << "CMAX otrzymany z algorytmu wyrzarzania to: " << piactually << endl;
    */
/*******************************************************************************/
/* Część z wykorzystaniem insertu */
    while (temperaturestart >1 ) {

        coeficient = (tmpiteration / valueiteration);
        temperaturestart = (temperaturestart - (temperaturestart * coeficient));

       int randominsertvalue1 = (rand() % np-1) + 0;
       int randominsertvalue2 = (rand() % np-1) +0;
        int tmp,tmp1 = 0;
        tmp = tabhelp[randominsertvalue1];
        tmp1=tabhelp[randominsertvalue2];
        tabhelp[randominsertvalue1]=tmp1;
        tabhelp[randominsertvalue2]=tmp;

        pinext = Timeofsimulating(tab, tabhelp, np, nm);
        if(firstpropability==0) {
            firstpropability = Propabilityfunction(piactually, pinext, temperaturestart);
        } else{
            if(firstpropability>actualypropability)
            {
                firstpropability=actualypropability;
                piactually=pinext;
            }
        }
        tmpiteration++;
        cout<<"Liczba iteracji: "<<tmpiteration<<endl;
        // cout<< "Wspolczynnik prawdopodo to: "<<actualypropability<<endl;
        //   cout<< "Wartosc wyrzarzania to: "<<pinext<<endl;
    }
    cout << "CMAX otrzymany z algorytmu wyrzarzania to: " << piactually << endl;

    return 0;
}