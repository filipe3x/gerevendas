#ifndef CAT_PRODUTOS
#define CAT_PRODUTOS
typedef struct catalogoProdutos *CATALOGO_PRODUTOS;

CATALOGO_PRODUTOS catalogoProdutosInit( void );
void freeCatalogoProdutos( CATALOGO_PRODUTOS );

CodigoProduto_st inserirProdutoCatalogo( CATALOGO_PRODUTOS , CodigoProduto_st );
bool existeProdutoCatalogo( CATALOGO_PRODUTOS , CodigoProduto_st );

Modulo getCatalogoProdutosPorLetra( CATALOGO_PRODUTOS , char );
int getTotalProdutos( CATALOGO_PRODUTOS , int );
int calcularTotalProdutos( CATALOGO_PRODUTOS );

PAGINA_RESULTADOS travessiaProdutosPorLetra( CATALOGO_PRODUTOS , char );
PAGINA_RESULTADOS testarTravessiaProdutos(CATALOGO_PRODUTOS catalogo, int (*funcaoComparacao)(), void (*funcaoImpressao)() );

#endif /* CAT_PRODUTOS */