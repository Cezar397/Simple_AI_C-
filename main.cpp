#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
    char user_input[255];
    int numar_maxim_mese = 20;
    int mese_libere[14] = {2, 0, 2, 3, 5, 4, 4, 3, 2, 1, 4, 4, 5, 5};
    int persoane;

    cout<<"Buna ziua, doriti sa faceti o rezervare?"<<'\n';

    cin.get(user_input, 255);

    if(strstr(user_input, "Nu") || strstr(user_input, "nu"))
        cout<<"Ok, multumim pentru timpul acordat!"<<'\n';
    else if(strstr(user_input, "Da") || strstr(user_input, "da"))
        cout<<"Ok, cate persoane?"<<'\n';

    cin>>persoane;


        if(persoane >= 6)
            cout<<"Nu cerem scuze, numarul maxim de locuri este de 5"<<'\n';
        else
            if(persoane < 6)
                for(int i=0;i<14;i++)
                    if(mese_libere[i] == persoane)
                        {
                            cout<<"V-am facut rezervare la masa "<<i+1<<", multumim!"<<'\n';
                            break;
                        }
                    else
                        if(mese_libere[i] != persoane)
                            continue;
        else
            cout<<"Nu sunt mese libere, la revedere!"<<'\n';

    system("Pause");
    return 0;
}
