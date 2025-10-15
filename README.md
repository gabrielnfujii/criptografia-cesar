<div align="center">

🔒 Cifra de César em C
Um programa de linha de comando simples, desenvolvido em C, para criptografar e descriptografar mensagens de texto usando a clássica Cifra de César.

</div>

📜 Sobre o Projeto
Este projeto foi desenvolvido como uma ferramenta prática para demonstrar a implementação da Cifra de César. O programa permite ao utilizador fornecer o caminho para um ficheiro de texto, escolher entre criptografar ou descriptografar o seu conteúdo e definir uma chave numérica para o deslocamento dos caracteres. O resultado é guardado num novo ficheiro, preservando o original.

✨ Funcionalidades
Criptografia e Descriptografia: Implementa a lógica da Cifra de César para codificar e descodificar texto.

Manipulação de Ficheiros: Lê o conteúdo de um ficheiro .txt fornecido pelo utilizador e guarda o resultado num novo ficheiro (SaidaCRIPTO.txt ou SaidaDESCRIPTO.txt).

Interface Interativa: Guia o utilizador através de um menu simples e interativo no terminal.

Validação de Entrada: Verifica se a chave fornecida é um número inteiro válido.

Feedback Visual: Utiliza cores na interface para melhorar a experiência do utilizador e destacar mensagens de erro ou sucesso.

🚀 Como Usar
Pré-requisitos
Para compilar e executar o projeto, é necessário ter um compilador C instalado, como o GCC (MinGW no Windows).

1. Compilação
Navegue até à pasta do projeto através do terminal e execute o seguinte comando para compilar o programa:

Bash

gcc TDE2ºParte.c -o CifraDeCesar.exe
2. Execução
Crie um ficheiro de texto (ex: minha_mensagem.txt) com o texto que deseja processar.

Execute o programa compilado:

Bash

./CifraDeCesar.exe
Siga as instruções apresentadas no terminal:

Insira o caminho completo para o seu ficheiro de texto.

Escolha a operação (1 para Criptografar ou 2 para Descriptografar).

Defina a chave numérica para a cifra.

Após a conclusão, o programa informará o nome do ficheiro de saída onde o resultado foi guardado.

Exemplo de Interação
===========================================================
                Criptografia de César em C
===========================================================

Digite o caminho completo para o arquivo .txt: C:\caminho\para\minha_mensagem.txt

Escolha a operação:
1 - Criptografar
2 - Descriptografar
1

Digite a chave de criptografia (um número inteiro): 3

Operação concluída com sucesso. O resultado foi salvo em SaidaCRIPTO.txt
