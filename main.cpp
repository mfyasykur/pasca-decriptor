#include <iostream>

using namespace std;

string epvoTepfo, tepfo;
int i;
char c;

void header()
{
    cout << "|==================================================|" << endl;
    cout << "|               QETDE-DUFI VSEPMEVUS               |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "|                     Cz Zetlz                     |" << endl;
    cout << "|==================================================|" << endl;
    cout << endl;
}

void pasca1()
{
    epvoTepfo = "";

    header();
    cout << " >>> TEPFO QETDE 1 <<<" << endl;
    cout << endl;
    cout << " >>> ";
    cin.ignore();
    getline(cin, tepfo);

    for (i=0; i < tepfo.length(); i++){
        c = tepfo[i];
        c = toupper(c);

        if (c >= 48 && c <= 90){
            if (c >=58 && c <= 64){
                c;
            }
            else{
                c -= 1;
                if (c==47){
                    c = 57;
                }
                else if (c==64){
                    c = 90;
                }
            }
        }
        else{
            c;
        }
        c = tolower(c);
        epvoTepfo += c;
    }
    cout << " >>> " << epvoTepfo << endl;
    cout << endl;
}

int main()
{
    string qetde, meho;

    header();
    cout << " *** TIMENEV FEVEPEPH VAEP NAFE! ***" << endl;
    cout << endl;
    cout << " >> Tomejlep Netallep LeveTepfo: " << endl;
    cout << " >> ";
    cin >> qetde;
    system("cls");

    if (qetde == "nothing"){
        Qetde:
        pasca1();

        Meho:
        cout << " Meho? <z/v> ";
        cin >> meho;
        if (meho == "z"){
            goto Qetde;
        }
        else if(meho == "v"){
            return 0;
        }
        else{
            goto Meho;
        }
    }
    else
        return main();

    return 0;
}
