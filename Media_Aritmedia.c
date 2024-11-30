#include <windows.h>

int main(){
    
    int contador = 0;
    float valor, media, total;
    total = 0;
    
    printf("Digite um valor (-1 para encerrar): ");
    scanf("%d", &valor);
    
    while(valor != -1){
        total = total + valor;
        contador++;
        printf("Digite um valor (-1 para encerrar: )");
        scanf("%d", &valor);
    }
    media = total / contador;
    printf("Valor da média: %f.21\n", media);
    return 0;
}
