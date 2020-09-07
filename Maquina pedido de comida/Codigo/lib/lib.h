#ifndef LIB
#define LIB
#include <stdio.h>

typedef enum {
    pedido = 0,
    cocina = 1,
    envio = 2
}estados_t;

typedef struct {
    char c;                     //pedido realizado
    char t_cocina;             //tiempo de demora en la cocina
    char t_envio;              //tiempo de demora en el envio
}pedido_c;

pedido_c f_inicio(void); 
estados_t f_pedido(pedido_c);
estados_t f_cocina(pedido_c);
estados_t f_envio(pedido_c);


#endif