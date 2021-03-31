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
                   escreval("4	3")
                   escreval("2	1")
              outrocaso
                   para j de n ate 1 passo -1 faca
                      para i de n ate 1 passo -1 faca
                           se i=1 entao
                              Escreva(RaizQ(i):6:2)
                           senao
                                se i=j entao
                                   escreva((i):6:2)
                                senao
                                     escreva("      ")
                                fimse
                           fimse
                      fimpara
                      escreval()
                   fimpara
      fimescolha
Fimalgoritmo