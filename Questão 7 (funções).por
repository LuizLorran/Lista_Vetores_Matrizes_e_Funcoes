programa {

  funcao contarAte(inteiro n){
    inteiro i

    escreva("\nNúmeros de 1 a ", n, ": \n")
    para(i=1; i<n; i++){
      escreva(i, ", ")
    }
    escreva(i)
  }

  funcao inicio() {
    inteiro num

    escreva("Digite um número inteiro no programa: ")
    leia(num)

    contarAte(num)
    
  }
}
