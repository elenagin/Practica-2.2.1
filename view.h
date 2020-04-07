void main_menu(tipoElemento **Inicio, int *op, int *num_inputs, int *inputs)
{
    int i, temp;
        
    system("clear");
    printf("¿Qué compuerta quieres probar?\n");
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. XOR\n");
    printf("4. NOT\n");
    printf("5. XNOR\n");
    printf("Opción: \n");
    scanf("%d", op);
    system("clear");
    printf("¿Cuántas entradas vas a tener?\n\n");
    scanf("%d", num_inputs);

    for(i=0; i<*num_inputs; i++){
        printf("Inserta \"1\" ó \"0\"");
        scanf("%d", &temp);
        InsertaInicio(Inicio, temp);        
    }
}

void initial_menu(){
    system("clear");
    printf("Bienvenido al sistema de prediccion\n");
    printf("------------------------------------\n");
    printf("Presione enter para comenzar...\n");
    getchar();
}

void final_menu(){
    printf("Presione enter para terminar...\n");
    getchar();  
    getchar();    
    system("clear");
}