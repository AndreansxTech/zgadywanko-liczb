#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
void kolorek(int kolor)
{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), kolor);}
int obliczPunkty(int proby)
{
    return max(100 -(proby-1)*10,10);
}
void logo(int l)
{
    if (l==1)
    {
    kolorek(4);cout<<R"(
 @@@@@@@@  @@@@@@@   @@@@@@  @@@@@@@  @@@ @@@ @@@  @@@  @@@  @@@@@@  @@@  @@@ @@@ @@@@@@@@
      @@! !@@       @@!  @@@ @@!  @@@ @@! !@@ @@!  @@!  @@! @@!  @@@ @@!@!@@@ @@! @@!
    @!!   !@! @!@!@ @!@!@!@! @!@  !@!  !@!@!  @!!  !!@  @!@ @!@!@!@! @!@@!!@! !!@ @!!!:!
  !!:     :!!   !!: !!:  !!! !!:  !!!   !!:    !:  !!:  !!  !!:  !!! !!:  !!! !!: !!:
 :.::.: :  :: :: :   :   : : :: :  :    .:      ::.:  :::    :   : : ::    :  :   : :: :::
)";Sleep(500);cout<<R"(
 @@@      @@@  @@@@@@@ @@@@@@@@ @@@@@@@
 @@!      @@! !@@           @@! @@!  @@@
 @!!      !!@ !@!         @!!   @!@!@!@
 !!:      !!: :!!       !!:     !!:  !!!
 : ::.: : :    :: :: : :.::.: : :: : ::
)";Sleep(500);
    }
    else if (l==2)
    {
        kolorek(4);cout<<R"(
 @@@  @@@  @@@@@@  @@@  @@@ @@@ @@@@@@@@  @@@@@@@       @@@@@@@  @@@@@@@  @@@ @@@      @@@
 @@!  !@@ @@!  @@@ @@!@!@@@ @@! @@!      !@@           !@@       @@!  @@@ @@! !@@      @@@
 @!@@!@!  @!@  !@! @!@@!!@! !!@ @!!!:!   !@!           !@! @!@!@ @!@!!@!   !@!@!       !@!
 !!: :!!  !!:  !!! !!:  !!! !!: !!:      :!!           :!!   !!: !!: :!!    !!:
  :   :::  : :. :  ::    :  :   : :: :::  :: :: :       :: :: :   :   : :   .:         :.:

)";
    }
    else if (l==3)
    {
        kolorek(2);
        cout<<R"(

@@@  @@@  @@@ @@@ @@@  @@@@@@@  @@@@@@@   @@@@@@  @@@
@@!  @@!  @@! @@! !@@ !@@       @@!  @@@ @@!  @@@ @@!
@!!  !!@  @!@  !@!@!  !@! @!@!@ @!@!!@!  @!@!@!@! @!!
 !:  !!:  !!    !!:   :!!   !!: !!: :!!  !!:  !!! !!:
  ::.:  :::     .:     :: :: :   :   : :  :   : : : ::.: :


 @@@@@@@  @@@@@@@   @@@@@@   @@@@@@@ @@@@@@@@     @@@    @@@
!@@       @@!  @@@ @@!  @@@ !@@           @@!    @@@@    @@@
!@! @!@!@ @!@!!@!  @!@!@!@! !@!         @!!       !@!    !@!
:!!   !!: !!: :!!  !!:  !!! :!!       !!:         !!!
 :: :: :   :   : :  :   : :  :: :: : :.::.: :     ::     :.:

        )";
    }
    else if (l==4)
    {
        kolorek(2);
        cout<<R"(

@@@  @@@  @@@ @@@ @@@  @@@@@@@  @@@@@@@   @@@@@@  @@@
@@!  @@!  @@! @@! !@@ !@@       @@!  @@@ @@!  @@@ @@!
@!!  !!@  @!@  !@!@!  !@! @!@!@ @!@!!@!  @!@!@!@! @!!
 !:  !!:  !!    !!:   :!!   !!: !!: :!!  !!:  !!! !!:
  ::.:  :::     .:     :: :: :   :   : :  :   : : : ::.: :


 @@@@@@@  @@@@@@@   @@@@@@   @@@@@@@ @@@@@@@@     @@@@@@     @@@
!@@       @@!  @@@ @@!  @@@ !@@           @@!    @@   @@@    @@@
!@! @!@!@ @!@!!@!  @!@!@!@! !@!         @!!        .!!@!     !@!
:!!   !!: !!: :!!  !!:  !!! :!!       !!:         !!:
 :: :: :   :   : :  :   : :  :: :: : :.::.: :    :.:: :::    :.:

        )";
    }
    else if (l==5)
    {
        kolorek(11);
        cout<<R"(
                                 d8,
                               `8P

  88bd88b d8888b  88bd8b,d88b   88b .d888b,
  88P'  `d8b_,dP  88P'`?8P'?8b  88P ?8b,
 d88     88b     d88  d88  88P d88    `?8b
d88'     `?888P'd88' d88'  88bd88' `?888P'
                                               )";
    }
    else if (l==6)
    {
        cout<<R"(
 ______    __  __   ___   __    ______   ________       ____
/_____/\  /_/\/_/\ /__/\ /__/\ /_____/\ /_______/\     /___/\
\:::_ \ \ \:\ \:\ \\::\_\\  \ \\:::_ \ \\::: _  \ \    \_::\ \
 \:(_) ) )_\:\ \:\ \\:. `-\  \ \\:\ \ \ \\::(_)  \ \     \::\ \
  \: __ `\ \\:\ \:\ \\:. _    \ \\:\ \ \ \\:: __  \ \    _\: \ \__
   \ \ `\ \ \\:\_\:\ \\. \`-\  \ \\:\/.:| |\:.\ \  \ \  /__\: \__/\
    \_\/ \_\/ \_____\/ \__\/ \__\/ \____/_/ \__\/\__\/  \________\/

        )";
    }
    else if (l==7)
    {
        cout<<R"(
 ______    __  __   ___   __    ______   ________       _____
/_____/\  /_/\/_/\ /__/\ /__/\ /_____/\ /_______/\     /_____/\
\:::_ \ \ \:\ \:\ \\::\_\\  \ \\:::_ \ \\::: _  \ \    \:::_:\ \
 \:(_) ) )_\:\ \:\ \\:. `-\  \ \\:\ \ \ \\::(_)  \ \       _\:\|
  \: __ `\ \\:\ \:\ \\:. _    \ \\:\ \ \ \\:: __  \ \     /::_/__
   \ \ `\ \ \\:\_\:\ \\. \`-\  \ \\:\/.:| |\:.\ \  \ \    \:\____/\
    \_\/ \_\/ \_____\/ \__\/ \__\/ \____/_/ \__\/\__\/     \_____\/

        )";
    }
    else if (l==8)
    {
        cout<<R"(
 ______    __  __   ___   __    ______   ________       ______
/_____/\  /_/\/_/\ /__/\ /__/\ /_____/\ /_______/\     /_____/\
\:::_ \ \ \:\ \:\ \\::\_\\  \ \\:::_ \ \\::: _  \ \    \:::_:\ \
 \:(_) ) )_\:\ \:\ \\:. `-\  \ \\:\ \ \ \\::(_)  \ \      /_\:\ \
  \: __ `\ \\:\ \:\ \\:. _    \ \\:\ \ \ \\:: __  \ \     \::_:\ \
   \ \ `\ \ \\:\_\:\ \\. \`-\  \ \\:\/.:| |\:.\ \  \ \    /___\:\ '
    \_\/ \_\/ \_____\/ \__\/ \__\/ \____/_/ \__\/\__\/    \______/

        )";
    }
    else if (l==9)
    {
        cout<<R"(
 ______    __  __   ___   __    ______   ________       __   __
/_____/\  /_/\/_/\ /__/\ /__/\ /_____/\ /_______/\     /__/\/__/\
\:::_ \ \ \:\ \:\ \\::\_\\  \ \\:::_ \ \\::: _  \ \    \  \ \: \ \__
 \:(_) ) )_\:\ \:\ \\:. `-\  \ \\:\ \ \ \\::(_)  \ \    \::\_\::\/_/\
  \: __ `\ \\:\ \:\ \\:. _    \ \\:\ \ \ \\:: __  \ \    \_:::   __\/
   \ \ `\ \ \\:\_\:\ \\. \`-\  \ \\:\/.:| |\:.\ \  \ \        \::\ \
    \_\/ \_\/ \_____\/ \__\/ \__\/ \____/_/ \__\/\__\/         \__\/

        )";
    }
}
int main()
{
    srand((unsigned)time(NULL));

    string gracz1,gracz2;
    int punkty1=0,punkty2=0;
    logo(1);kolorek(7);
    cout <<"   Podaj imie pierwszego gracza: ";
    getline(cin,gracz1);
    cout<<"   Podaj imie drugiego gracza: "; getline(cin,gracz2);
    system("cls");
    for (int runda=1;runda<=4;runda++)
    {
        kolorek(11);
        logo(runda+5);
        cout<<"\n=== RUNDA "<<runda<<" ===\n";
        kolorek(7);
        int liczba=rand()%100+1;int proba;
        bool odgadniete=false; int lprob=0;
        string aktualnygracz=(runda%2== 1)?gracz1 :gracz2;
        while (!odgadniete)
        {
            kolorek(10);cout<<"\nKolej gracza: "<<aktualnygracz<<endl;
            kolorek(7);
            cout<<"Podaj liczbe (1-100): ";
            cin>>proba;lprob++;

            if (proba==liczba)
            {
                kolorek(13);
                cout<<"Brawo! "<<aktualnygracz<<" odgadl(a) liczbe!\n";

                int zdobytepunkty=obliczPunkty(lprob);
                if (aktualnygracz==gracz1)
                    punkty1+=zdobytepunkty;
                else
                    punkty2+= zdobytepunkty;

                cout<<"Zdobyte punkty w tej rundzie: "<<zdobytepunkty<<"\n";
                kolorek(7);odgadniete=true;
            }
            else if (proba<liczba)
            {
                kolorek(12);cout<<"Za malo!\n";kolorek(7);
            }
            else
            {
                kolorek(12);cout<<"Za duzo!\n";kolorek(7); }
            aktualnygracz =(aktualnygracz==gracz1)?gracz2:gracz1;
        }
        kolorek(14);
        cout<<"\nAktualny stan punktow:\n";
        cout<<gracz1<<": "<< punkty1<<" punktow\n";
        cout<<gracz2<<": "<< punkty2<<" punktow\n";
        kolorek(7);Sleep(2000);system("cls");
    }
    kolorek(11);logo(2);
    kolorek(14);
    cout<<gracz1<<": "<<punkty1 <<" punktow\n";
    cout<<gracz2<<": "<<punkty2<<" punktow\n\n";
    kolorek(13);
    if (punkty1>punkty2)
    {
        logo(3);cout<<"Zwyciezca jest "<<gracz1<<"! Gratulacje!\n"; }
    else if (punkty2>punkty1)
    {
        logo(4);cout<<"Zwyciezca jest "<<gracz2<<"! Gratulacje!\n"; }
    else
    {
        logo(5);
         cout<<"Remis! Gratulacje dla obu graczy!\n";
    }
    kolorek(7);return 0;
}
