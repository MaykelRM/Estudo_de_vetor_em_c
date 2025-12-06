# Estudo de vetor em C
Este programa em linguagem C tem como objetivo ler 10 números inteiros fornecidos pelo usuário, analisar propriedades matemáticas de cada número e, ao final, apresentar estatísticas gerais do conjunto de valores digitados.

Durante a execução, o programa realiza as seguintes operações para cada número informado:

##Verificação de número primo
A função primo_ou_nao(int n1) analisa se o número é primo ou não.
O algoritmo verifica se o número é divisível por algum valor diferente de 1 e dele mesmo. Caso seja divisível, ele é classificado como não primo; caso contrário, é considerado primo.

##Cálculo da soma dos dígitos
A função soma_dos_digitos(int n1) calcula a soma dos algarismos de um número inteiro.
Isso é feito separando cada dígito com o operador módulo (%) e acumulando os valores.

##Armazenamento em vetor
Os números digitados são armazenados em um vetor de 10 posições, permitindo o posterior processamento dos valores.

##Cálculo da média aritmética
O programa soma todos os valores digitados e, ao final, divide o total por 10 para obter a média aritmética.

##Identificação do maior e do menor número
Durante a leitura dos valores, o programa compara cada novo número com os atuais valores de maior e menor, atualizando-os quando necessário.
