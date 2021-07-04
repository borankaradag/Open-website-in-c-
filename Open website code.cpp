#include "iostream"
#include "string"

using namespace std;

int main()
{
    string l;

    cout << "Press Y to open YOUTUBE  "; // you can change youtube
    cout << "\nPress T to open Tiktok  "; // you can change tiktok
    cout << "\nWhich option you are selecting: => ";

    getline(cin,l);

    if (l=="y")
    {
        system("start https://www.youtube.com/"); // put your own link after start
    }
    else if (l=="t")
    {
        system("start https://www.tiktok.com/");  // put your own link after start
    }
    else
    {
        cout << "\nInvalid Entry! ";
    }

    return 0;
}