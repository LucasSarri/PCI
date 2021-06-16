/*
    ****** Variáveis ******
    De forma resumida variáveis são espaços na memória onde se guarda valores, onde temos os seguintes tipos básicos:
    1. char: car
    actere, basicamente permite guardar apenas um caractere seja letra ou número. Por exemplo: 'a','b','1','2'.
    2. int: inteiro, basicamente permite guardar apenas valores inteiros. Por exempo: 1,2,3,4.
    3. float: ponto flutuante, basicamente permite guardar números reais com uma precisão simpes. Por exemplo: 1.5, 2.6, 7.9, 3.8.
    ** OBS: note que para separar as casas decimais usa-se o ponto '.'
    4. double: ponto flutuante, basicamente permite guardar números reais com mais precisão, geralmente com o dobro de capacidade de uma varíavel float.
    Por exemplo: 2.66666666666666666666, 8.333333355655988955959, 99.9759515151, 6.565456451. 
    **OBS: Esses exemplos da double não tenho certeza se são só double ou ainda encaixam na capacidade do float mas é mais para ilustrar, 
    basicamente ele permite mais casas antes e depois da virgula.
    
    Regras para declarar variáveis:
    1. O nome pode ser qualquer sequência de letras e digitos, incluindo o '_' e devendo começar com uma letra.
    2. Letras maiusculas e minusculas são diferenciadas, ou seja a linguagem é Case Sensitive.
    3. Nomes reservados não são permitidos.

    ****** Constantes ******
    Basicamente são valores previamente definidos que não se alteram de acordo com a execução do programa.
    Elas devem ser definidas logo após as bibliotecas, seus tipos permitidos são os mesmos das variáveis.

    ****** Atribuição ******
    A atribuição é feita com um sinal de igual "=" que atribui a uma variável um determinado valor, é possível também usar a função de 
    entrada scanf() para realizar a entrada do valor.
*/

#include <stdio.h> 

//Declaração de constante
#define Constante valore
#define Pi 3.14

int main ()
{
    //Declaraçoes de variáveis
    int numero;
    float numeroFloat;
    double numeroDouble;
    char letra;
    char num;

    //Atribuições
    numero = 5;
    numeroFloat = 5.5;
    numeroDouble = 5.555555555555555555;
    letra = 'a';
    num = '1';

    //Função de entrada
    int numero2;
    scanf("%d", &numero2);
    /*
        No scanf temos a cadeia de formatação e os endereços das variáveis.
        A cadeia de informação basicamente tem as seguintes opções %d para números inteiros, %f para números reais e %s para caracteres ou texto.
        Os endereços das variáveis basicamente são formadas por & e o nome da variável.
    */

    //Função de Saída
    printf("Qualquer coisa \n %d outra coisa qualquer", &numero2);
    /*
        No printf temos a string de controle e os endereços de variáveis.
        Na string de controle podemos ter uma sequência de conversão iniciada por % (basicamente é como se apresenta os valores das variaveis),
        podemos ter uma sequência de escape iniciada por \ (basicamente é uma forma de alterar a visualização do texto) e por fim o texto em si.
        Na sequência de conversão usamos as seguintes opções:
        %c um único caractere
        %o, %d, %x um número inteiro em octal, decimal ou hexadecimal
        %u um número inteiro em base decimal sem sinal
        %ld um número inteiro longo em base decimal
        %f, %lf um número real de precisão simples ou dupla
        %s uma cadeia de caracteres (string).
        Como sequência de escape temos as seguintes opções:
        \n Quebra de linha (line feed ou LF)
        \t Tabulação horizontal
        \b Retrocede o cursor em um caractere (backspace)
        \r Retorno de carro (carriage return ou CR): volta o cursor para o começo da linha sem mudar de linha
        \a Emite um sinal sonoro
        \" Aspa dupla
        \' Aspa simples
        \\ Barra invertida
        \0 Caractere nulo (caractere de valor zero, usado como terminador de strings)
    */
}