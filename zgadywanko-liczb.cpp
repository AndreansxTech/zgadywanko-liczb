#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

void kolor(int kolor)
{
    SetConsoleTextAttribute(color,kolor);
}
void logo(int l)
{
    if (l==1)
    {
    kolor(14);cout<<R"(
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
 /___\__,_|_\_\_| \___/__(_)      |___/\__/                      |_|\__/ \__/                       |_|___/\__/

        )";
      }
}
int main()
{
    logo(1);
    srand((unsigned) time(NULL));
    kolor(12);cout<<" Zanim zaczniesz grac, upewnij sie ze okno jest zmaksymalizowane !\n Wcisnij dowolny klawisz aby kontynuowac...";getch();
    logo(2);
    kolor(11);cout<<"\nWybierz poziom trudnosci: "; kolor(121);char wybor; cout<<"[ ]\b\b"; wybor=getch();
    switch (wybor)
    {
    case '1':
        kolor(11);cout<<"\nWybrales poziom latwy";break;
    
    default:
        kolor(12);cout<<"\nNie ma takiego poziomu trudnosci";
        break;
    }
     cout<<wybor; kolor(11);
    

    return 0;
}
