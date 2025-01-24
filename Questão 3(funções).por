programa {

  funcao exibirBoasVindas (cadeia nome){
    escreva("\nOlá, ", nome, "! Bem-vindo ao nosso programa.")
  }

  funcao inicio() {
    cadeia nome

    escreva("Nome de usuário: ")
    leia(nome)

    exibirBoasVindas(nome)
    
  }
}
