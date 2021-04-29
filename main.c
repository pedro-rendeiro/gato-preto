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
            printf("\n\n\n'%s' não pode ser!\n\nHistória da gata preta. Quer que eu conte, contarei.\nConto?\n\n- ",R);
            fgets(R,MAX,stdin);
            for(int i=0;i<MAX;i++)
                if(R[i]=='\n')
                {
                    R[i]='\0';
                    break;
                }
        }
    printf("\nParabéns, '%s' é o código secreto!\nConheça agora a milenar história da gata preta!\n\nDigite qualquer tecla para prosseguir... ",R);
    getch();
    system("cls");
    printf("\n\nA superstição teve origem na Idade Média, quando se acreditava que os felinos,\ndevido a seus hábitos noturnos, tinham parte com o demônio\n– e se o bichano era da cor negra, habitualmente associada às trevas, pior ainda para ele.\nAssim, no imaginário medieval, o gato preto tornou-se tão inseparável\nda mítica figura da feiticeira quanto a vassoura voadora.\nNo século XV, o papa Inocêncio VIII (1432-1492) chegou a incluir o pobre animal em sua\nlista de perseguidos pela Inquisição, campanha assassina da Igreja católica\ncontra supostas heresias e bruxarias. A perseguição atingiu seu auge\nna Inglaterra do século XVI, época de repentino aumento da população felina nas cidades.\nConsta que, em certa noite de 1560, em Lincolnshire, um gato preto foi ferido a pedradas.\nEncurralado, ele refugiou-se na casa de uma velhinha que costumava dar abrigo a gatos de rua.\nNo dia seguinte, essa pessoa também apareceu machucada – o que fez o povo local concluir\nque ela era uma bruxae o gato, seu disfarce noturno.\n\n");
    printf("Nessa tentativa de combater o paganismo, a Inquisição inverteu uma tradição milenar,\npois os gatos eram reverenciados como divindades, principalmente entre os antigos egípcios.\nNa França, a perseguição aos gatos durou até 1630, quando foi proibida pelo rei Luís XIII (1601-1643).\nHá, no entanto, uma pesquisa do Hospital de Long Island, nos Estados Unidos, que indica que,\npelo menos para pessoas alérgicas, o contato com um gato preto pode ter péssimos efeitos.\nIsso porque os pêlos felinos dessa cor conteriam uma maior quantidade de substâncias alergênicas.\n\n\n");

    SetConsoleCP(cpin);
    SetConsoleOutputCP(cpout);
    return 0;
}
