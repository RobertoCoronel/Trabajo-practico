#include "../lib/lib.h"


pedido_t f_inicio(void){
    pedido_t config;
    config = parseConfig("config.conf");
    return config;
}
estados_t  f_cocina(pedido_t config){
    estados_t estado = cocina;
    config.c = tomarpedido();
    printf ("\rCocinando, faltan: %d", config.t_cocina);

    return (config.t_cocina < 5 ) ? cocina : envio;
}
estados_t f_envio(pedido_t config){
    estados_t estado = envio;
    config.c = tomarpedido();
    enviando(config);
    return (config.t_envio < 10) ? envio : cocina;
}