#include <stdio.h>

//Implementando a busca linear

	int busca_linear(int vetor[], int chave, int tam){

		for(int i = 0; i< tam; i++){
			if(vetor[i] == chave){
				return i;
			}
		}
		return -1;
	}

int main(){
	//vetor ordenado
	int vetor[6] = {1, 3, 5, 8, 12, 42};

	//elemento chave que queremos encontrar no vetor
	int chave = 12;

	//Aplicando a busca linear
	//vetor.chave.tam
	int ret = busca_linear(vetor, chave, 6);

	printf("O elemento %d est� na posi��o %d", chave, ret);


	return 0;
}
