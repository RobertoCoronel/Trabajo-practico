#include "../lib/lib.h"


char *getKey(char *key)
{
    char i=0;

    while (*(key + i) != ' ')
    {
        i++;
    }
    *(key + 1) = 0;
    return key + i + 1;
}

pedido_t parseConfig(char *filename){
    FILE *conf;
    char cadena[40], *key, *val;
    char variables[2][20] = {"t_cocina", "t_envio"}, i;
    pedido_t config;
    
    
}
fgets(cadena, 40, conf);
do 
{
    key = cadena;
    if ((*key) != '#' && strlen(key) >= 0)
    {
        val = getKey(key);
        for (i = 0, i < 2; i++)
        {
            if (!strcmp(key, variables[i]))
            {
                switch (i)
                {
                    case 0;
                    config.t_cocina = atoi(val);
                    break;
                    case 1;
                    config.t_envio = atoi(val);
                    break;
                }
            }
        }
    }
    fgets(cadena, 40, conf);
} while (!feof(conf));

char tomarpedido(void){
    char comida;

    scanf("%d", comida);
    return (char)comida;
}

void cocinando(pedido_t pedido)
{
    printf("\r Cocinando, tiempo restante: %d", pedido.c);
}




