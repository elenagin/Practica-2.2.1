#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "model.h"
#include "view.h"


int main()
{
    int op, num_inputs, inputs;

    op = 0;
    initial_menu();
    tipoElemento *Primero = NULL;
    main_menu(&Primero, &op, &num_inputs, &inputs);   
//  InsertaInicio(&Primero);
    Imprime(Primero);
    final_menu();
    return 0;
}


//printf("op %d\nnum_inputs %d\ninputs %d\n", op, num_inputs, inputs);
