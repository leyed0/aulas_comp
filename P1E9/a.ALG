Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2021
Var
   n :inteiro
   i :inteiro
   j :inteiro

Inicio
      escreva("informe o valor de n: ")
      leia(n)
      escolha n
              caso 1
                   escreval(1)
              caso 2
                   escreval("1	2")
                   escreval("3	4")
              outrocaso
                   para j de 1 ate n passo 1 faca
                      para i de 1 ate n passo 1 faca
                           se j=1 entao
                              se(((RaizQ(i))%2)=0) entao
                                   Escreva(RaizQ(i):6:2)
                              senao
                                   Escreva("      ")
                              fimse
                           senao
                                se i=j entao
                                   se((i*j)%2=0) entao
                                        escreva((i*j):6:2)
                                   senao
                                        escreva("      ")
                                   fimse
                                senao
                                     escreva("      ")
                                fimse
                           fimse
                      fimpara
                      escreval()
                   fimpara
      fimescolha
Fimalgoritmo