void main_menu(int *op, int *num_inputs, int *inputs)
{
    system("clear");
    printf("Bienvenido al sistema de prediccion\n");
    printf("------------------------------------\n");
    printf("\tPulsa enter para comenzar...\n");
    getchar();
    system("clear");
    printf("MENÚ\n");
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
    system("clear");
    printf("¿Cuáles son tus entradas?\n\n");
    scanf("%d", inputs);
    system("clear");
}