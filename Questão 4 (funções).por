programa {

  funcao real calcularMedia (real nota1, real nota2, real nota3){
    retorne (nota1 + nota2 + nota3)/3
  }

  funcao inicio() {
    real nota1, nota2, nota3

    escreva("Nota do 1° bimestre: ")
    leia(nota1)
    limpa()
    escreva("Nota do 2° bimestre: ")
    leia(nota2)
    limpa()
    escreva("Nota do 3° bimestre: ")
    leia(nota3)
    limpa()

    se(calcularMedia(nota1, nota2, nota3) >= 7){
      escreva("Aluno passado!")
    }
    senao{
      escreva("Aluno reprovado!")
    }
    
  }
}
