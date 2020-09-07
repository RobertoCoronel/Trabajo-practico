#include "lib.h"
#define h

int main() {
    pedido_c config;
    estados_t estado = pedido; //primer estado

    config : inicio();
    switch (estado){
        case pedido: estado; //no se bien como trabajar esta parte
            break;
        case cocina: estado = f_cocina (config);
            break;
        case envio: estado = f_envio (config);
            break;
        


    }
    return 0;
}