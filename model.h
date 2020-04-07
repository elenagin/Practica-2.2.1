typedef struct def_elemento
{
    int dato;
    struct def_elemento *sig;
} tipoElemento;

void InsertaInicio (tipoElemento **Inicio, int bin)
{
  tipoElemento *temp;
  temp = (tipoElemento*)malloc(sizeof(tipoElemento));
  temp->dato=bin;
  temp->sig=*Inicio;
  *Inicio = temp;
}

void Imprime (tipoElemento *Inicio)
{
  tipoElemento *temp;
  temp=Inicio;
  while (temp!=NULL)
    {
      printf("%d\n", temp->dato);
      temp = temp->sig;
    }
}