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
    SetConsoleOutputCP(cp);  //Estabelecendo o codepage de sa�da 1252(latin2))

    char R[MAX],S[4];
    printf("\t\t*A HIST�RIA DA GATA PRETA*\n\nHist�ria da gata preta. Quer que eu conte, contarei.\nConto?\n\n- ");
    fgets(R,MAX,stdin);
    for(int i=0;i<MAX;i++)
        if(R[i]=='\n')
        {
            R[i]='\0';
            break;
        }
    while(strncmp(R,("Hist�ria da gata preta. Quer que eu conte, contarei. Conto?"),59) != 0)
        {
            printf("\n\n\n'%s' n�o pode ser!\n\nHist�ria da gata preta. Quer que eu conte, contarei.\nConto?\n\n- ",R);
            fgets(R,MAX,stdin);
            for(int i=0;i<MAX;i++)
                if(R[i]=='\n')
                {
                    R[i]='\0';
                    break;
                }
        }
    printf("\nParab�ns, '%s' � o c�digo secreto!\nConhe�a agora a milenar hist�ria da gata preta!\n\nDigite qualquer tecla para prosseguir... ",R);
    getch();
    system("cls");
    printf("\n\nA supersti��o teve origem na Idade M�dia, quando se acreditava que os felinos,\ndevido a seus h�bitos noturnos, tinham parte com o dem�nio\n� e se o bichano era da cor negra, habitualmente associada �s trevas, pior ainda para ele.\nAssim, no imagin�rio medieval, o gato preto tornou-se t�o insepar�vel\nda m�tica figura da feiticeira quanto a vassoura voadora.\nNo s�culo XV, o papa Inoc�ncio VIII (1432-1492) chegou a incluir o pobre animal em sua\nlista de perseguidos pela Inquisi��o, campanha assassina da Igreja cat�lica\ncontra supostas heresias e bruxarias. A persegui��o atingiu seu auge\nna Inglaterra do s�culo XVI, �poca de repentino aumento da popula��o felina nas cidades.\nConsta que, em certa noite de 1560, em Lincolnshire, um gato preto foi ferido a pedradas.\nEncurralado, ele refugiou-se na casa de uma velhinha que costumava dar abrigo a gatos de rua.\nNo dia seguinte, essa pessoa tamb�m apareceu machucada � o que fez o povo local concluir\nque ela era uma bruxae o gato, seu disfarce noturno.\n\n");
    printf("Nessa tentativa de combater o paganismo, a Inquisi��o inverteu uma tradi��o milenar,\npois os gatos eram reverenciados como divindades, principalmente entre os antigos eg�pcios.\nNa Fran�a, a persegui��o aos gatos durou at� 1630, quando foi proibida pelo rei Lu�s XIII (1601-1643).\nH�, no entanto, uma pesquisa do Hospital de Long Island, nos Estados Unidos, que indica que,\npelo menos para pessoas al�rgicas, o contato com um gato preto pode ter p�ssimos efeitos.\nIsso porque os p�los felinos dessa cor conteriam uma maior quantidade de subst�ncias alerg�nicas.\n\n\n");

    SetConsoleCP(cpin);
    SetConsoleOutputCP(cpout);
    return 0;
}
