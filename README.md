Criptografia com Cifra de César em C
Este é um programa simples desenvolvido em C que permite ao usuário criptografar ou descriptografar mensagens de um arquivo de texto utilizando a Cifra de César. O usuário pode especificar o arquivo de entrada, escolher a operação (criptografar ou descriptografar) e fornecer uma chave numérica para a cifra.

Funcionalidades
Criptografia e Descriptografia: Criptografa ou descriptografa o conteúdo de um arquivo .txt.

Entrada de Arquivo: Permite que o usuário insira o caminho completo para o arquivo de texto a ser processado.

Chave Numérica: Solicita ao usuário uma chave de criptografia (um número inteiro) para realizar a cifra.

Saída em Arquivo: Salva o resultado da operação em um novo arquivo, nomeado SaidaCRIPTO.txt para criptografia ou SaidaDESCRIPTO.txt para descriptografia.

Interface Simples: Utiliza uma interface de linha de comando com cores para facilitar a interação do usuário.

Como Usar
Pré-requisitos
Para compilar e executar este projeto, você precisará de um compilador C, como o GCC (MinGW para Windows).

Compilação
Abra o terminal na pasta do projeto e execute o seguinte comando para compilar o programa:

Bash

gcc TDE2ºParte.c -o TDE2ºParte.exe
Execução
Crie um arquivo de texto (por exemplo, mensagem.txt) com o conteúdo que você deseja criptografar ou descriptografar.

Execute o programa compilado:

Bash

./TDE2ºParte.exe
Quando solicitado, insira o caminho completo para o seu arquivo de texto.

Escolha a operação desejada (1 para Criptografar ou 2 para Descriptografar).

Insira a chave numérica.

O programa irá gerar um arquivo de saída com o resultado.

Estrutura do Projeto
.
├── TDE2ºParte.c      # Código-fonte principal do programa
└── README.md         # Este arquivo
