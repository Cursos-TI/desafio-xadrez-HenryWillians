#include <stdio.h>

//torre utilizando a recursividade como loop
void movimentoTorre(int t){
    if (t > 0){
        printf("Direita\n");

        movimentoTorre(t - 1);

    }
}

//bispo com loop aninhado

void movimentoBispo(){
    int x, y;
    
    for (y = 5; y > 0; y--) {
            for (x = 1; x == 1; x--){
            printf("Direita\n");
            }
        printf("Cima\n");
    }

}
//rainha com 8 para esquerda
void movimentoRainha(int r) {
    if(r > 0){

        printf("Esquerda\n");

        movimentoRainha(r - 1);

    }
}

//cavalo

void movimentoCavalo(){

    int i, j;
    for (i = 1, j = 1; j <= 2; i++, j++)
        {
            if(i <= 1){
                printf("Direita\n");
            }
            if (j <=2){
                printf("Cima\n");    
            }
        }
}

//escolha via menu com switch e posterior movimentação das peças de acordo com a escolha, além de obter uma opção de saída definida como "s"

int main () {

    char peca, saida;
    

    while (saida != 's')
    {
        printf("\nEscolha uma peca para movimentar:\n");

        printf("T. Torre\n");
        printf("B. Bispo\n");
        printf("R. Rainha\n");
        printf("C. Cavalo\n");
        printf("S. Sair\n");

        scanf(" %c", &peca);
        switch (peca)
        {
        case 't':
        case 'T':
            int torre = 8;
            
            movimentoTorre(torre);
        
            break;
        case 'b':
        case 'B':
            
            printf("Movimento do bispo:\n");
            movimentoBispo();
            
            break;
        case 'r':
        case 'R':
            int rainha = 8;
            
            printf("Movimento da rainha\n");

            movimentoRainha(rainha);

            break;

        case 'C':
        case 'c':
            movimentoCavalo();
            break;
            
        case 'S':
        case 's':
            saida = 's';
            break;
        
        default:
            printf("Escolha uma opcao valida!\n");

            break;
        }       
    }
    return 0;
}