programa {

  funcao exibirTabuada (inteiro a){
    inteiro i

    escreva("Tabuada de ", a, ": \n")
    para(i=0; i<=10; i++){
      escreva(a, "x", i, " = ", a*i, "\n")
    }
    escreva("\n")
    
  }
  funcao inicio() {
    inteiro a

    escreva("Deseja ver a tabuada de 1 a 10 de qual número? ")
    leia(a)

    exibirTabuada(a)
    
  }
}
