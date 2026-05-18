#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define TAM_TITULO 100
#define TAM_USUARIO 100

typedef struct lista_livros ListaLivros;
typedef struct fila_solicitacoes FilaSolicitacoes;
typedef struct pilha_devolucoes PilhaDevolucoes;

ListaLivros *lista_criar(void);

int lista_inserir_livro(
    ListaLivros *lista,
    int codigo,
    const char titulo[TAM_TITULO]
);

int lista_remover_livro(
    ListaLivros *lista,
    int codigo
);

int lista_livro_existe(
    const ListaLivros *lista,
    int codigo
);

int lista_livro_disponivel(
    const ListaLivros *lista,
    int codigo
);

int lista_marcar_emprestado(
    ListaLivros *lista,
    int codigo
);

int lista_marcar_disponivel(
    ListaLivros *lista,
    int codigo
);

void lista_imprimir_inicio_fim(
    const ListaLivros *lista
);

void lista_imprimir_fim_inicio(
    const ListaLivros *lista
);

void lista_destruir(ListaLivros **lista);


FilaSolicitacoes *fila_criar(void);

int fila_enfileirar(
    FilaSolicitacoes *fila,
    int codigo_livro,
    const char usuario[TAM_USUARIO]
);

int fila_desenfileirar(
    FilaSolicitacoes *fila,
    int *codigo_livro,
    char usuario[TAM_USUARIO]
);

int fila_vazia(const FilaSolicitacoes *fila);

void fila_imprimir(const FilaSolicitacoes *fila);

void fila_destruir(FilaSolicitacoes **fila);

PilhaDevolucoes *pilha_criar(void);

int pilha_empilhar(
    PilhaDevolucoes *pilha,
    int codigo_livro,
    const char titulo[TAM_TITULO]
);

int pilha_desempilhar(
    PilhaDevolucoes *pilha,
    int *codigo_livro,
    char titulo[TAM_TITULO]
);

int pilha_vazia(const PilhaDevolucoes *pilha);

void pilha_imprimir(const PilhaDevolucoes *pilha);

void pilha_destruir(PilhaDevolucoes **pilha);

int biblioteca_processar_proxima_solicitacao(
    ListaLivros *livros,
    FilaSolicitacoes *fila
);

int biblioteca_registrar_devolucao(
    ListaLivros *livros,
    PilhaDevolucoes *historico,
    int codigo_livro
);

#endif
