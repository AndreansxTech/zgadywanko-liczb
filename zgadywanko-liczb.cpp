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

    kolor(11);cout<<"\nWybierz poziom trudnoœci:\n"; logo(2);

    return 0;
}
