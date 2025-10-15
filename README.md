# Cifra de César em C

Um projeto simples em C para **criptografar** e **descriptografar** mensagens de texto usando a clássica **Cifra de César**.

---

## 🧠 Motivação

Desenvolvido como exercício prático para estudar conceitos básicos de criptografia, manipulação de arquivos e entrada/saída em C. Serve também como exemplo didático para quem está aprendendo a programar em C.

---

## 🚀 Funcionalidades

* Criptografia de texto por deslocamento (Cifra de César).
* Descriptografia (reversão do deslocamento).
* Leitura de arquivo `.txt` e gravação de arquivo de saída.
* Menu interativo no terminal para escolher operações.
* Validação básica da chave (inteiro).

---

## 🛠 Tecnologias / Requisitos

* Linguagem: C
* Compilador C (GCC, clang, MinGW etc.)
* Sistema operacional: Linux, macOS ou Windows

---

## 📂 Estrutura do projeto

```
├── TDE2ºParte.c        # Código-fonte principal
├── README.md           # Este arquivo
└── .gitignore
```

> Obs.: se você renomear o arquivo-fonte ou dividir o projeto em módulos, atualize esta seção.

---

## 📥 Instalação / Como compilar

1. Clone o repositório:

```bash
git clone https://github.com/gabrielnfujii/criptografia-cesar.git
cd criptografia-cesar
```

2. Compile o código (exemplo com GCC):

```bash
gcc "TDE2ºParte.c" -o CifraDeCesar
```

> No Windows, o executável gerado será `CifraDeCesar.exe`.

---

## 🖥️ Uso / Exemplos

Execute o programa compilado no terminal/Prompt de Comando:

```bash
./CifraDeCesar
# ou no Windows
CifraDeCesar.exe
```

O programa pedirá informações como caminho do arquivo `.txt`, a operação (criptografar/descriptografar) e a chave (número inteiro).

**Exemplo de fluxo:**

* Arquivo de entrada: `mensagem.txt` contendo `OLÁ MUNDO`
* Operação: Criptografar
* Chave: `3`

Saída: arquivo `SaidaCRIPTO.txt` (ou nome definido no código) contendo o texto cifrado.

---

## 📖 Sobre a Cifra de César

A Cifra de César é uma cifra de substituição onde cada letra é deslocada por um número fixo de posições no alfabeto (a chamada chave). Ex.: com chave 3, `A` → `D`, `B` → `E`, etc. É uma técnica didática — simples, porém fraca para proteger dados reais.

---

## ✅ Possíveis melhorias

* Suporte correto a caracteres acentuados (UTF-8) e cedilha.
* Preservar maiúsculas/minúsculas e caracteres não alfabéticos sem alterar.
* Opção para escolher o alfabeto (português, inglês etc.).
* Implementar modo `brute-force` para tentativa automática de quebra da cifra.
* Testes unitários e scripts de build (Makefile).
* Interface gráfica simples (opcional).

---

## 🤝 Contribuição

Contribuições são bem-vindas:

1. Abra uma *issue* para discutir mudanças ou bugs.
2. Faça um *fork*, crie uma branch com a sua alteração e envie um *pull request*.

Por favor, descreva as mudanças e inclua exemplos de uso se necessário.



---

## 👤 Autor

Gabriel N FUJII — [gabrielnfujii](https://github.com/gabrielnfujii)

---
