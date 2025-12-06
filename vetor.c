#include <stdio.h>

void primo_ou_nao(int n1){
    int resto = 0, d = 2;
    
    resto = n1 % d;
    
    if(n1 < 0){
        printf("não é primo | ");
    }
    
    while(resto != 0){
        d = d + 1;
        resto = n1 % d;
    }
    
    if(n1 == d){
        printf("é primo | ");
    } else {
        printf("não é primo | ");
    }
}


int soma_dos_digitos(int n1){
    int digito, soma = 0;
    
    while (n1 > 0) {
        digito = n1 % 10;      
        soma = soma + digito;            
        n1 = n1 / 10;              
    }
    
    return soma;
}


int main()
{
    int i = 0, maior, menor, d = 0;
    int v[10];
    
    printf("Digite um número: ");
    scanf("%d", &v[i]);
    printf("Posição no vetor: %d\n", i);
    printf("Número %d ", v[i]);
    primo_ou_nao(v[i]);
    printf("Soma dos seus dígitos é: %d\n\n", soma_dos_digitos(v[i]));

    
    maior = v[i];
    menor = v[i];
    d = d + v[i];
    i = i + 1;
    
    while(i <= 9){
        printf("Digite um número: ");
        scanf("%d", &v[i]);
        printf("Posição no vetor: %d\n", i);
        printf("Número %d ", v[i]);
        primo_ou_nao(v[i]);
        printf("Soma dos seus dígitos é: %d\n\n", soma_dos_digitos(v[i]));        
        d = d + v[i];
        
        if (v[i] > maior){
            maior = v[i];
        }
        
        if (v[i] < menor){
            menor = v[i];
        }
        
        i++;
        
    }
    
    d = d / 10;
    
    printf("A média dos números é: %d\nMaior número: %d\nMenor número: %d", d, maior, menor);
    
    return 0;
}