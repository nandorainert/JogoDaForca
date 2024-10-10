/*Grupo: Ferdinando Rainert, Eduarda Maniezo Humenhuk, Dinaê Pfiffer, Juliana Varela*/

#include <iostream>
#include <time.h> //Habilitar função time (Professor passou).
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));//Somente randomica gerada a partir da hora do sistema
    
    int numaleatorio, escolha, cont_tentativa = 1, acertos = 0, t_restantes = 9; //Variáveis para valores inteiros
    
    char l1,l2,l3,l4,l5,l6, tentativa, t1 = '',t2 = '',t3 = '',t4 = '',t5 = '',t6 = '';//Variáveis que será guardada as palavras
    
    do{//Laço de repetição para menu ficar repetindo até que a escolha serja diferente de 3, o 3 é a opção de FIM.
        cout << "x------------------x" << endl;//Menu com as 3 opções de escolha.
        cout << "|Escolha uma opção.|" << endl;//Menu com as 3 opções de escolha.
        cout << "|[1] Jogar.        |" << endl;//Menu com as 3 opções de escolha.
        cout << "|[2] Sobre.        |" << endl;//Menu com as 3 opções de escolha.
        cout << "|[3] Fim.          |" << endl;//Menu com as 3 opções de escolha.
        cout << "x------------------x" << endl;//Menu com as 3 opções de escolha.
        cin >> escolha; //Recebe a escolha do usuário e salva em uma variável para ser usada, caso seja 3 irá pular tudo e finalizar o código saindo do laço de repetição.
        
        
        switch(escolha){//Switch para verificar qual a escolha que usuário fez entre 1 e 2 caso não tenha sido o 3.
            case 1://Caso seja o número 1 ele vai iniciar o jogo.
            numaleatorio = rand()%10 + 1; //coloca os números gerados entre 1 e 10.
            
            switch(numaleatorio){//Switch para receber o número aleatório entre 1 e 10.
                case 1://Caso seja o número 1, vai setar as 6 variáveis com letras que formam uma palavra, cada variável uma letra.
                    l1 = 'P';//Dando valor char para a variável para formar a palavra.
                    l2 = 'E';//Dando valor char para a variável para formar a palavra.
                    l3 = 'N';//Dando valor char para a variável para formar a palavra.
                    l4 = 'S';//Dando valor char para a variável para formar a palavra.
                    l5 = 'A';//Dando valor char para a variável para formar a palavra.
                    l6 = 'R';//Dando valor char para a variável para formar a palavra.
                break;//Sai do switch.
                case 2://Caso seja o número 2, vai setar as 6 variáveis com letras que formam uma palavra, cada variável uma letra, isso se repete para os próximos 8 cases.
                    l1 = 'M';//Dando valor char para a variável para formar a palavra.
                    l2 = 'A';//Dando valor char para a variável para formar a palavra.
                    l3 = 'R';//Dando valor char para a variável para formar a palavra.
                    l4 = 'C';//Dando valor char para a variável para formar a palavra.
                    l5 = 'A';//Dando valor char para a variável para formar a palavra.
                    l6 = 'R';//Dando valor char para a variável para formar a palavra.
                break;//Sai do switch.
                case 3:
                    l1 = 'F';
                    l2 = 'E';
                    l3 = 'R';
                    l4 = 'I';
                    l5 = 'D';
                    l6 = 'A';
                break;
                case 4:
                    l1 = 'C';
                    l2 = 'H';
                    l3 = 'E';
                    l4 = 'I';
                    l5 = 'R';
                    l6 = 'O';
                break;
                case 5:
                    l1 = 'P';
                    l2 = 'R';
                    l3 = 'O';
                    l4 = 'V';
                    l5 = 'A';
                    l6 = 'S';
                break;
                case 6:
                    l1 = 'C';
                    l2 = 'O';
                    l3 = 'L';
                    l4 = 'O';
                    l5 = 'C';
                    l6 = 'A';
                break;
                case 7:
                    l1 = 'F';
                    l2 = 'I';
                    l3 = 'L';
                    l4 = 'M';
                    l5 = 'A';
                    l6 = 'R';
                break;
                case 8:
                    l1 = 'R';
                    l2 = 'E';
                    l3 = 'S';
                    l4 = 'T';
                    l5 = 'O';
                    l6 = 'S';
                break;
                case 9:
                    l1 = 'M';
                    l2 = 'O';
                    l3 = 'R';
                    l4 = 'R';
                    l5 = 'E';
                    l6 = 'R';
                break;
                case 10:
                    l1 = 'V';
                    l2 = 'A';
                    l3 = 'R';
                    l4 = 'E';
                    l5 = 'L';
                    l6 = 'A';
                break;
            }
            
            do{//Inicia um laço de repetição para que seja jogado, repete até 10 vezes.
                cin.ignore();
                cin.ignore();
                cout << "\033c";
                
                cout << "Digite a " << cont_tentativa << " letra." <<endl;//Pede a tentativa ou prox tentativa para o usuário.
                cin >> tentativa;//Salva o caractere para verificar se é igual a alguma letra da palavra.
                
                if(l1 == tentativa){//Caso a tentativa seja igual a primeira letra da palavra, entra no if.
                    if(t1!=l1){//Verifica se a letra 1 da tentativa(t1) já é igual a primeira letra da palavra(l1).
                        t1 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como primeira letra da palavra(t1).
                        acertos++;//Adiciona um acerto.
                    }
                }
                if(l2 == tentativa){//Caso a tentativa seja igual a segunda letra da palavra, entra no if.
                    if(t2!=l2){//Verifica se a letra 2 da tentativa(t2) já é igual a segunda letra da palavra(l2).
                        t2 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como segunda letra da palavra(t2).
                        acertos++;//Adiciona um acerto.
                    }
                }
                if(l3 == tentativa){//Caso a tentativa seja igual a terceira letra da palavra, entra no if.
                    if(t3!=l3){//Verifica se a letra 3 da tentativa(t3) já é igual a terceiraa letra da palavra(l3).    
                        t3 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como terceira letra da palavra(t3).
                        acertos++;//Adiciona um acerto.
                    }
                }
                if(l4 == tentativa){//Caso a tentativa seja igual a quarta letra da palavra, entra no if.
                    if(t4!=l4){//Verifica se a letra 4 da tentativa(t4) já é igual a quarta letra da palavra(l4).
                        t4 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como quarta letra da palavra(t4).
                        acertos++;//Adiciona um acerto.
                    }
                }
                if(l5 == tentativa){//Caso a tentativa seja igual a quinta letra da palavra, entra no if.
                    if(t5!=l5){//Verifica se a letra 5 da tentativa(t5) já é igual a quinta letra da palavra(l5).
                        t5 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como quinta letra da palavra(t5).
                        acertos++;//Adiciona um acerto.
                    }
                }
                if(l6 == tentativa){//Caso a tentativa seja igual a sexta letra da palavra, entra no if.
                    if(t6!=l6){//Verifica se a letra 6 da tentativa(t6) já é igual a sexta letra da palavra(l6).
                    t6 = tentativa;//Caso diferente, pega a variável que está em tentativa e coloca como sexta letra da palavra(t6).
                    acertos++;//Adiciona um acerto.
                    }
                }
                    
                cout << t1 << t2 << t3 << t4 << t5 << t6 << endl;//Mostra a palavra atualizada, caso tenha acertos, mostra a letra e posição, caso contrário mostra "_".
                
                if (t1 != '' and t2 != '' and t3 != '' and t4 != '' and t5 != '' and t6 != '' and cont_tentativa <= 11){//casp todas as variáveis de letras tentadas seja diferente de "_" significa que a pessoa acertou a palavra.
                    cout << "Parabéns, você ganhou!!!" <<endl;//Mostra mensagem de vitória.
                }else{//Senão outra condição acontece.
                    cout << "Você tem " << acertos << " acertos" << endl;//Exibe quantidade de acertos.
                
                    cout << "Você tem " << t_restantes-- << " tentativas restantes";//Exibe a quatidade de tentativas restantes.
                }
                
                cin.ignore();
                cin.ignore();
                cout << "\033c";
                
                cont_tentativa++;
                
                if (t1 != '' and t2 != '' and t3 != '' and t4 != '' and t5 != '' and t6 != '' and cont_tentativa < 11){//Caso o usuário acerte todas as palavras antes das 10 tentativas essa condição é verdadeira.
                    cont_tentativa = 11;//Serve para igualar contador a 11, para que saia do laço de repetição do jogo, assim pode voltar ao Menu.
                }
                
            }while(cont_tentativa < 11);//Laço iniciado com do{}, que será feito a administração de máximas tentativas, caso =11 ele sai do laço.
            
            if (t1 == '' or t2 == '' or t3 == '' or t4 == '' or t5 == '' or t6 == ''){//Caso uma das letras de tentativas ainda estejam com o valor inicial, é verdadeiro.
                cout << "Você perdeu!! Aperte ENTER para voltar ao menu principal."<< endl;//Então exibe a mensagem de derrota.
            }
            
            acertos = 0;//Zera os acertos para que assim possa jogar novamente.
            cont_tentativa = 1;//Deixa tentativas como 1, para quando iniciar já esteja na primeira tentativa.
            
            t1 = '',t2 = '',t3 = '',t4 = '',t5 = '',t6 = '';//Reseta as variáveis de letras de tentativa.
            
                cin.ignore();
                cin.ignore();
                cout << "\033c";
            
            break;//Sai do switch.
            
            case 2://Caso a pessoa tenha escolhido a opção 2 lá no menu, aparecerá sobre o jogo.
            
                cout << "\033c";
                cout << "Equipe: Ferdinando Rainert, Eduarda Maniezo Humenhuk, Dinaê Pfiffer, Juliana Varela." << endl;//Criadores do código.
                cout << "Data: Outubro de 2024." << endl;//Mês e ano de criação.
                cout << "Professor: Rafael Ballottin Martins." <<endl;//Professor.
                cout << "Matéria: Algorimtos e programação." << endl;//Matéria.
                cout << "ATENÇÃO!! Neste códigos aceitamos apenas letras maiúsculas como tentativa, caso tentem com letras minúsculas não funcionará, você tem apenas 10 chances para acertar os 6 caracteres.";//Condições para jogar
                
                cin.ignore();
                cin.ignore();
                cout << "\033c";
                
            break;//Sai do switch.
        }
        
    }while(escolha != 3);//Caso a pessoa tenha escolhido algo diferente de 3 no Menu, ficará repetindo, caso contrário o laço se finaliza e assim finaliza o jogo.
    

    return 0;
}