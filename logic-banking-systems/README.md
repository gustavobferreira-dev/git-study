# Sistema Bancário em C++

Um aplicativo console desenvolvido em C++ que simula operações básicas de um sistema bancário, incluindo consulta de saldo, depósitos, saques e histórico de transações.

## 📋 Descrição

Este projeto implementa um sistema bancário simples com funcionalidades essenciais para gerenciamento de contas. Foi desenvolvido como exercício de programação em C++ e demonstra conceitos importantes como modularização de código, gestão de dados e interação com usuário.

## ✨ Funcionalidades

- **Ver Saldo**: Exibe o saldo atual da conta
- **Depositar**: Adiciona fundos à conta e registra no histórico
- **Sacar**: Remove fundos da conta com validações de saldo
- **Histórico de Transações**: Exibe todas as transações realizadas
- **Validações**: Implementa validações para entradas inválidas

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C++11
- **Compilador**: G++ (MinGW)
- **Plataforma**: Windows

## 📁 Estrutura do Projeto

```
logic-banking-systems/
├── main.cpp           # Arquivo principal com menu de interação
├── account.h          # Header file com declarações de funções
├── account.cpp        # Implementação das operações bancárias
├── output/
│   └── account.exe    # Executável compilado
└── README.md          # Este arquivo
```

## 📖 Como Compilar e Executar

### Requisitos
- MinGW (G++ instalado)
- Terminal ou prompt de comando

### Compilação

```bash
# Navegue até a pasta do projeto
cd logic-banking-systems

# Compile todos os arquivos .cpp
g++ -Wall -Wextra -g3 *.cpp -o output/account.exe
```

**Explicação das flags:**
- `-Wall`: Mostra todos os avisos
- `-Wextra`: Mostra avisos adicionais
- `-g3`: Inclui informações de debug
- `-o`: Especifica o arquivo de saída

### Execução

```bash
# No Windows
.\output\account.exe

# Ou digite no terminal integrado do VS Code
```

## 🎮 Como Usar

1. Execute o programa
2. O menu principal será exibido com as seguintes opções:
   - **1** - Ver saldo
   - **2** - Depositar
   - **3** - Sacar
   - **4** - Ver histórico de transações
   - **0** - Sair do programa

3. Digite o número da opção desejada e pressione Enter
4. Siga as instruções na tela

### Exemplo de Uso

```
======================================
       SISTEMA BANCARIO
======================================

1 - Ver saldo
2 - Depositar
3 - Sacar
4 - Ver historico
0 - Sair

Escolha uma opcao: 1

=== SALDO DA CONTA ===
Seu saldo atual: R$ 1000
```

## 🔄 Fluxo de Funcionamento

### Depósito
```
Entrada: Valor a depositar
↓
Validação: Valor > 0?
↓
Saldo += Valor
Histórico registra transação
↓
Saldo atualizado
```

### Saque
```
Entrada: Valor a sacar
↓
Validação: 0 < Valor ≤ Saldo?
↓
Saldo -= Valor
Histórico registra transação
↓
Saldo atualizado
```

### Histórico
```
Transações Positivas: Depósitos (identificados pelo sinal +)
Transações Negativas: Saques (identificados pelo sinal -)
Saldo Final: Saldo atual da conta
```

## 📊 Dados Técnicos

- **Saldo Inicial**: R$ 1.000,00
- **Limite de Transações**: 10 (registra até 10 operações)
- **Tipo de Dado**: float (valores em ponto flutuante)
- **Encoding**: UTF-8 com suporte a português

## 🎯 Conceitos Aprendidos

- Modularização de código (header e implementation files)
- Manipulação de arrays em C++
- Validação de entrada
- Estruturas de controle (if/else, switch)
- Loops e iterações
- Variáveis globais e locais
- Funções void e com parâmetros
- Manipulação de locale para suporte a português

## 🚀 Melhorias Futuras

- [ ] Implementar persistência de dados em arquivo
- [ ] Adicionar sistema de autenticação
- [ ] Implementar limite de saques
- [ ] Adicionar juros automáticos
- [ ] Sistema de múltiplas contas
- [ ] Gráficos de movimentação financeira
- [ ] Interface gráfica (GUI)

## 📝 Licença

Este projeto é fornecido como é, para fins educacionais.

## 👨‍💻 Autor

Desenvolvido como projeto de aprendizado em C++.

---

**Última atualização**: 2026
