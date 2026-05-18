# Questão Prática – Integração de TADs em Linguagem C

# Tema: Sistema de Gerenciamento de Biblioteca

Desenvolva um sistema em linguagem C para gerenciamento simplificado de uma biblioteca acadêmica.

O sistema deverá utilizar:

- Lista Duplamente Encadeada
- Fila
- Pilha
- Tipos Abstratos de Dados (TADs)

O objetivo principal da atividade é praticar:

- modularização;
- encapsulamento;
- manipulação de ponteiros;
- alocação dinâmica de memória;
- integração entre diferentes estruturas de dados.

---

# Contexto do Problema

A biblioteca deseja informatizar parte do processo de empréstimos e devoluções de livros.

O sistema deverá controlar:

1. os livros cadastrados;
2. as solicitações de empréstimo;
3. o histórico de devoluções.

Cada funcionalidade deverá utilizar uma estrutura de dados específica.

---

# 1. TAD – Lista Duplamente Encadeada

A lista será responsável por armazenar os livros da biblioteca.

Cada livro deverá possuir:

- código do livro;
- título;
- status de disponibilidade.

## Exemplo

```text
Código: 101
Título: Estruturas de Dados
Disponível: Sim
```

A implementação da lista deve possuir:

- ponteiro para o próximo elemento;
- ponteiro para o elemento anterior.

---

## Operações obrigatórias da lista

### Inserir livro

Adicionar um novo livro ao acervo.

---

### Remover livro

Remover um livro a partir do código informado.

A remoção deve tratar corretamente:

- remoção no início;
- remoção no meio;
- remoção no final;
- lista vazia.

---

### Buscar livro

Localizar um livro pelo código.

---

### Listar livros do início para o fim

```text
[101] Estruturas de Dados
[205] Linguagem C
[300] Banco de Dados
```

---

### Listar livros do fim para o início

A navegação reversa deve utilizar o ponteiro anterior da lista dupla.

---

### Alterar disponibilidade

Modificar o status do livro entre:

```text
Disponível
Emprestado
```

---

# 2. TAD – Fila de Solicitações

A fila será utilizada para controlar as solicitações de empréstimo.

Cada solicitação deverá armazenar:

- código do livro;
- nome do usuário solicitante.

---

## Regras da fila

A fila deve seguir a política:

# FIFO

```text
First In, First Out
```

Ou seja:

- o primeiro usuário que solicitar um livro deve ser o primeiro a ser atendido.

---

## Operações obrigatórias da fila

### Inserir solicitação

Adicionar uma solicitação no final da fila.

---

### Processar solicitação

Remover a primeira solicitação da fila.

---

### Verificar fila vazia

---

### Exibir fila

```text
Maria -> Livro 101
João -> Livro 205
Carlos -> Livro 300
```

---

# 3. TAD – Pilha de Devoluções

A pilha será utilizada para armazenar o histórico das devoluções realizadas.

Cada devolução deverá conter:

- código do livro;
- título do livro.

---

## Regras da pilha

A pilha deve seguir a política:

# LIFO

```text
Last In, First Out
```

Ou seja:

- a última devolução registrada será a primeira a ser removida.

---

## Operações obrigatórias da pilha

### Registrar devolução

Inserir devolução no topo da pilha.

---

### Remover devolução

Desempilhar elemento.

---

### Verificar pilha vazia

---

### Exibir histórico

```text
[300] Banco de Dados
[205] Linguagem C
[101] Estruturas de Dados
```

---

# Integração entre os TADs

O sistema deverá integrar corretamente as três estruturas.

---

# Regra 1 – Empréstimo de Livro

Ao processar uma solicitação da fila:

## O sistema deverá:

### Passo 1

Buscar o livro na lista.

---

### Passo 2

Verificar se o livro está disponível.

---

### Passo 3

Se estiver disponível:

- marcar como emprestado;
- remover solicitação da fila;
- informar sucesso.

## Exemplo

```text
Livro emprestado com sucesso para Maria.
```

---

### Passo 4

Caso o livro:

- não exista;
- já esteja emprestado;

informar erro.

## Exemplo

```text
Livro indisponível.
```

---

# Regra 2 – Devolução de Livro

Ao registrar uma devolução:

## O sistema deverá:

### Buscar o livro

---

### Marcar como disponível

---

### Inserir devolução na pilha

---

# Uso obrigatório de TAD

A implementação deve respeitar os princípios de encapsulamento.

---

# Arquivo `.h`

O arquivo `biblioteca.h`:

## DEVE conter:

- protótipos das funções;
- tipos abstratos.

## NÃO DEVE conter:

- implementação interna das estruturas;
- definição completa dos nós.

---

# Arquivo `.c`

As estruturas internas devem permanecer ocultas no arquivo `.c`.

---

# Organização Esperada

```text
biblioteca.h
biblioteca.c
main.c
```

---

# Menu Obrigatório

```text
1 - Inserir livro
2 - Remover livro
3 - Buscar livro
4 - Listar livros (início -> fim)
5 - Listar livros (fim -> início)
6 - Inserir solicitação
7 - Processar solicitação
8 - Registrar devolução
9 - Exibir histórico de devoluções
0 - Sair
```

---

# Requisitos Técnicos Obrigatórios

O programa deve:

- utilizar `malloc/free`;
- evitar vazamento de memória;
- tratar estruturas vazias;
- validar entradas inválidas;
- utilizar modularização;
- utilizar ponteiros corretamente;
- respeitar o encapsulamento dos TADs.
