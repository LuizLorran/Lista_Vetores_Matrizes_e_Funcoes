programa {
  
  funcao real CalcularAreaRetangulo(real a, real b){
    retorne a*b
  }

  funcao inicio() {
    real base, altura

    escreva("Qual a base do retângulo? ")
    leia(base)
    escreva("\nQual a altura? ")
    leia(altura)
    limpa()

    escreva("O retângulo de dimensões ", base, "x", altura, " tem área igual a ", CalcularAreaRetangulo(altura, base))
    
  }
}
