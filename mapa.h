struct mapa{
    char** matriz;
    int linhas;
    int colunas;
};
typedef struct mapa MAPA;

struct posicao{
    int x;
    int y;
};
typedef struct posicao POSICAO;

void liberaMapa(MAPA* m);
void alocaMapa(MAPA* m);
void leMapa(MAPA* m);
void imprimeMapa(MAPA* m);
void encontraNoMapa(MAPA* m, POSICAO* p, char c);