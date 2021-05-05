#include <stdio.h> 

/*
    De forma resumida variáveis são espaços na memória onde se guarda valores, onde temos os seguintes tipos básicos:
    1. char: caractere, basicamente permite guardar apenas um caractere seja letra ou número. Por exemplo: 'a','b','1','2'.
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
*/

int main ()
{
    int numero = 5;
    float numeroFloat = 5.5;
    double numeroDouble = 5.555555555555555555;
    char letra = 'a';
    char num = '1';
}