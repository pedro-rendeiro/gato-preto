#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define MAX 70

int main()
{
    unsigned int cp    = 1252; //Codepage latin2
    //Respaldo do codepage original da consola
    unsigned int cpin  = GetConsoleCP();
    unsigned int cpout = GetConsoleOutputCP();
    SetConsoleCP(cp);       //Estabelecendo o codepage de entrada 1252(latin2)
    SetConsoleOutputCP(cp);  //Estabelecendo o codepage de saída 1252(latin2))

    char R[MAX],S[4];
    printf("\t\t*A HISTÓRIA DA GATA PRETA*\n\nHistória da gata preta. Quer que eu conte, contarei.\nConto?\n\n- ");
    fgets(R,MAX,stdin);
    for(int i=0;i<MAX;i++)
        if(R[i]=='\n')
        {
            R[i]='\0';
            break;
        }
    while(strncmp(R,("História da gata preta. Quer que eu conte, contarei. Conto?"),59) != 0)
        {
}
