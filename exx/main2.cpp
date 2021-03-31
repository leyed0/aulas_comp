// 2. Ler o valor de um produto (valor_produto) em reais e a porcentagem de desconto que a loja oferece
// (por exemplo, porcentagem = 15%). Imprimir o valor do desconto e o valor do produto sem e com
// o desconto.


Algoritmo "desconto"
	
	Var
		v, d, vd, s : real
        //v= valor, d = desconto em%, vd = valor com desconto, s = valor descontado
	
	Inicio
		Leia (v)
        Leia (d)

        s  = v * (d/100)
        vd = v-s;

        Imprima("O valor do desconto é: ", s)
        Imprima("O valor do produto sem desconto é: ", v)
        Imprima("O valor do produto com desconto é: ", vd)

FimAlgoritmo