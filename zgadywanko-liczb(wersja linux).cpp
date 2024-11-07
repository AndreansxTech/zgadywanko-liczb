#include <iostream>
#include <cstdlib>
#include <time.h>
#include <ctype.h>
using namespace std;

char wybor=0;int randomowa=0;int liczba,proba=1;



void inf(int l)
{
    if (l==1)
    {
    cout<<R"(
 _____                _                           _        _ _          _
/ _  / __ _  __ _  __| |_   ___      ____ _ _ __ (_) ___  | (_) ___ ___| |__
\// / / _` |/ _` |/ _` | | | \ \ /\ / / _` | '_ \| |/ _ \ | | |/ __|_  / '_ \
 / //\ (_| | (_| | (_| | |_| |\ V  V / (_| | | | | |  __/ | | | (__ / /| |_) |
/____/\__, |\__,_|\__,_|\__, | \_/\_/ \__,_|_| |_|_|\___| |_|_|\___/___|_.__/
      |___/             |___/


      )";kolor(7);
      }
      else if (l==2)
      {
          cout<<R"(
                    _     _         _                   ___     ___            _      _    ____    _____            _
                   / |   | |   __ _| |___ __ ___  _    |_  )   / __|_ _ ___ __| |_ _ (_)  |__ /   |_   _| _ _  _ __| |_ _ _  _
                   | |_  | |__/ _` |  _\ V  V / || |    / / _  \__ \ '_/ -_) _` | ' \| |   |_ \_    | || '_| || / _` | ' \ || |
                   |_(_) |____\__,_|\__|\_/\_/ \_, |   /___(_) |___/_| \___\__,_|_||_|_|  |___(_)   |_||_|  \_,_\__,_|_||_\_, |
                                               |__/                                                                       |__/
  ____     _              _        ___  __                        _  __   __                         _ ___  __
 |_  /__ _| |___ _ ___ __(_)      | __|/  \                      / |/  \ /  \                       / | __|/  \
  / // _` | / / '_/ -_|_-<_       |__ \ () |                     | | () | () |                      | |__ \ () |
 /___\__,_|_\_\_| \___/__(_)      |___/\__/                      |_|\__/ \__/                       |_|___/\__/)";
      }
      else if (l==3)
      {
          kolor(14);cout<<"\n[ ";
          kolor(12);cout<<"!";
          kolor(14);cout<<" ] ";
      }
      else if (l==4)
      {
            kolor(7);cout<<"\n[ ";
            kolor(2);cout<<"OK";
            kolor(7);cout<<" ]  ";
      }
}
void wybranie()
{
    kolor(11);cout<<"\nWybierz poziom trudnosci: "; kolor(159); cout<<"[   ]\b\b\b"; wybor=getch(); cout<<wybor<<endl; kolor(7);
    if (wybor=='1')
    {
        inf(4);kolor(7);cout<<"Wybrales poziom latwy "; kolor(7);
    }
    else if (wybor=='2')
    {
        inf(4);kolor(7);cout<<"Wybrales poziom sredni "; kolor(7);
    }
    else if (wybor=='3')
    {
        inf(4);kolor(7);cout<<"Wybrales poziom trudny "; kolor(7);
    }
    else
    {
        cout<<endl;inf(3);kolor(12);cout<<"Nie ma takiego poziomu trudnosci !"; kolor(7);
        wybranie();
    }
}

int main()
{
    inf(1);
    srand((unsigned) time(NULL));
    kolor(12);cout<<"\n Zanim zaczniesz grac, upewnij sie ze okno jest zmaksymalizowane !\n Wcisnij dowolny klawisz aby kontynuowac...";getch();
    inf(2); wybranie();
    switch (wybor)
    {
    case '1':
        randomowa=rand()%50+1; cout<<randomowa<<endl;

        while(liczba!=randomowa)
        {
        liczba=0;
            kolor(14);cout<<"To twoja "<<proba<<" proba\n";
            proba+=1;
            kolor(7);cout<<"\nZgadnij liczbe z zakresu 1-50: "; kolor(13); cout<<"[  ]\b\b\b"; cin>>liczba;kolor(007);
            if (cin.fail())
            {
                inf(3);cout<<" Podaj poprawna liczbe: "; kolor(13); cin>>liczba;kolor(007);cout<<"\0";
            }
            else
            {
                if (liczba>randomowa)
                {
                    inf(3);kolor(13);cout<<"To za duzo "; kolor(7);cout<<"\v";
                }
                else if (liczba<randomowa)
                {
                    inf(3);kolor(13);cout<<"To za malo "; kolor(7);cout<<"\v";
                }
                else
                {
                    inf(4);kolor(13);cout<<"Brawo ! Zgadles liczbe !"; kolor(7);cout<<"\v";exit(0);
                }
            }
        }
        break;

    default:
        break;
        exit(0);
    }
    //kolor(11);cout<<"\nWybierz poziom trudnosci: "; kolor(121);char wybor=0; cout<<"[   ]\b\b\b"; wybor=getch(); cout<<wybor;
    return 0;
}
