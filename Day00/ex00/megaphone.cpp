#include <iostream>
#include <string>
#include <locale>

using namespace std;

void    upperPrint(char *str)
{
    locale loc;
    for (int i = 0; i < strlen(str); i++)
        cout << toupper(str[i], loc);
}

int main(int argc, char **argv)
{

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++){
            upperPrint(argv[i]);
            cout << " ";   
        }

    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}