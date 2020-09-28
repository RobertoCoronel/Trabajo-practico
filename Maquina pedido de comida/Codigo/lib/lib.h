#ifndef LIB
#define LIB
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void bienvenida (void);


typedef enum {
    cocina = 0,
    envio = 1
}estados_t;

typedef struct {
    char c;                    //pedido realizado
    char t_cocina;             //tiempo de demora en la cocina
    char t_envio;              //tiempo de demora en el envio
}pedido_t;




pedido_t f_inicio(void);        
estados_t f_cocina(pedido_t);
estados_t f_envio(pedido_t);

char *getKey(char *key);
pedido_t parseConfig(char *);

char tomarpedido(void);

void cocinando(pedido_t);


#endif

