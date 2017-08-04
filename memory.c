int memory[] = {0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0};

int somaIntervalo(int idcInic, int tmpFileSize){
  int soma = 0;
  for (int i = idcInic; i<(tmpFileSize+idcInic); i++){
     soma += memory[i];
  }
  return soma
}

//Aloca um programa de tamanho x
//no primeiro segmento de espaco vazio
//que for maior ou igual ao seu 
//tamanho
int firstFit(int tmpMemory[], int tmpFileSize){
  //Indice inicial
  int idcInic = 0;
  int increment = 0;
  int lista[] = {};
  lista[] = tmpMemory[];
  while (1){
    /*Se a soma dos 
    elementos do intervalo 
    lista[idxInit:tmpFileSize+idxInit]
    forem igual a 0 substitua o valor
    de todos os elementos desse 
    intervalo por 1*/
    if (somaIntervalo()==0){
      
/*
def firstFit(tmpBitmap, tmpFileSize):
  idxInit = 0
  increment = 0
  lista = tmpBitmap
  while True:
    if sum(lista[idxInit:(tmpFileSize+idxInit)])==0:
      increment = idxInit
      print(lista)
      while lista[tmpFileSize+idxInit-1]==0:
        lista[increment] = 1
        print(lista)
        increment += 1
      return lista
    #Senão, adicione 1 a variavel idxInit
    else:
      idxInit+=1
       
#def nextFit(tmpBitmap, tmpFileSize):
  
      
firstFit(memory, 3)*/