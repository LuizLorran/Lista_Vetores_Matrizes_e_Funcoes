programa {

  funcao inteiro calcularQuadrado(inteiro a){
    retorne a*a
  }

  funcao inteiro calcularCubo(inteiro b){
    retorne b*b*b
  }

  funcao inicio() {
    inteiro num

    escreva("Digite um número inteiro: ")
    leia(num)
    limpa()

    escreva(num,"²: ", calcularQuadrado(num))
    escreva("\n", num, "³: ", calcularCubo(num))
    
  }
}
