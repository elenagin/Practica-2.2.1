#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "model.h"
#include "view.h"

int main()
{
    int op, num_inputs, inputs;

    op = 0;
    main_menu(&op, &num_inputs, &inputs);
    //printf("op %d\nnum_inputs %d\ninputs %d\n", op, num_inputs, inputs);
    
    return 0;
}