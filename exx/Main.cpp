//2 - ler um caractere e imprimir se é: um digito(0 a 9), letra maiúscula (A-Z), letra minúscula(a-z), espaço ou outro símbolo. Para solução utilizar o codigo ASCII dos caracteres
#include <iostream>

int main(int argc, char** argv){
    char x;
    std::cout<<"digite um símbolo: ";  
    std::cin>>x;
    if(48<=x && x<=57) std::cout<<"O símbolo é um digito"<<std::endl;
    else{ 
        if(65<=x && x<=90)std::cout<<"O símbolo é uma Letra Maiúscula"<<std::endl;
        else {
            if(97<=x && x<=122)std::cout<<"O símbolo é uma Letra Minúscula"<<std::endl;
            else{
                if(x==32)std::cout<<"O símbolo é espaço"<<std::endl;
                else 
                std::cout<<"A entrada foi outro símbolo"<<std::endl;
                }
            }
        }
}

// Algoritmo "Identificar tipo de caractere"
	
// 	Var
// 		x : caractere
	
// 	Inicio
// 		Leia (x)
        
//         Se 48 <= x E x<=57
//             Então
//                 Imprima ("Digito")
//         Se não
//             Se  65<=x E x<=90
//             Então
//                 Imprima ("Letra maiúscula")
//             Se Não
//                 Se  97<=x E x<=122
//                 Então
//                     Imprima ("Letra minúscula")
//                 Se Não
//                     Se  32 = x
//                     Então
//                         Imprima ("Espaço")
//                     Se Não
//                         Se (33<=x E x<= 47) OU (58<=x E x<=64) OU (91<=x E x<=96) OU (123<=x E x<=126)
//                             Imprima ("outro símbolo")
//                         Se não
//                             Imprima ("Condição fantasma")
//                         Fim Se
//                     Fim Se
//                 Fim Se
//             Fim Se 
//         Fim Se
// FimAlgoritmo


// 48<=x<=57  Digito
// 65<=x<=90   Letra Maiúscula
// 97<=x<=122  Letra minuscula 
// =32 - Espaço

// 33 x 47 || 58 x 64 || 91 x 96 || 123 x 126 - outro símbolo

// x>127 condição fantasma


// ||  ou                          OU
// &&  e                           E
// ==  comparação de igualdade     =
// =   atribuição de valor         <-
// !=  compareção de diferença     <>
// <   menor                       <
// >   maior                       >
// <=  menor ou igual              <=
// >=  maior ou igual              >=