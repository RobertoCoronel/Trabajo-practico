#include "../lib/lib.h"

int main()
 {
    pedido_t config;
    estados_t estado = cocina;
    config = f_inicio();


    Bienvenida ();


    while (1)
    {
        switch (estado)
        {
            case cocina:
            estado = f_cocina(config);
            break;
            case envio:
            estado = f_envio(config);
            break;
        }
    }
    return 0;
 }
   