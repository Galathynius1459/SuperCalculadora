//Username: Galathynius1459
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");//Modificação de idioma
    //Declarção de variável
    float numero1,numero2;
    float soma,subtracao,multiplicacao,divisao,raiz,potenciacao;
    int operacao;
//Apresentação pessoal
    printf("Autora: Helena Cristina Oliveira da Silva\n Curso: Análise e Desenvolvimento de Sistemas\n Universidade: La Salle\n Matrícula:202220586/n/n");
    
    //Inicio da calculadora
    printf("****Super Calculadora****\n\n");
    printf("Qual operação iremos realizar?\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Raiz\n6-Potenciação.\n");
    
    scanf("%i",&operacao);
    switch(operacao){
    
    //Soma
    case 1:
    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    soma=numero1+numero2;
    printf("O resultado é:%.2f",soma);
    break;
    
    //Subtração
    case 2:
    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    subtracao=numero1-numero2;
    printf("O resultado é:%.2f",subtracao);
    break;
    
    //Multiplicação
    case 3:
    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    multiplicacao=numero1*numero2;
    printf("O resultado é:%.2f",multiplicacao);
    break;
    
    //Divisão
    case 4:
    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    divisao=numero1/numero2;
    printf("O resultado é:%.2f",divisao);
    break;
    
    //Raiz Quadrada
    case 5:
    printf("Digite o número desejado:");
    scanf("%f",&numero1);
    raiz=sqrt(numero1);
    printf("A Raiz Quadrada é: %.2f",raiz);
    break;
    
    //Potenciação
    case 6:
    printf("Digite o primeiro número:");
    scanf("%f",&numero1);
    printf("Digite o segundo número:");
    scanf("%f",&numero2);
    potenciacao=pow(numero1,numero2);
    printf("O resultado é:%.2f",potenciacao);
    break;
    
    }


    return 0;
 

    


//Fim da calculadora


}