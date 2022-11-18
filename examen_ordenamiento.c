#include <stdio.h>
int list[6]; /*array of items*/

void intercambio(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

}

void ordenamiento(int A[], int n){
	int indexMin;
	for(int i=0; i<n-1; i++){
	 /*Set current element as minium*/
	 int min = i;
	 /*check the element to be minimum*/
	 for(int j=i+1; j<n; j++){
	  if(A[j]<A[min]){
	   min=j;
	  }
	 }
	/*swap the minimum element with the current element*/
	 if(indexMin != i){
	  intercambio(&A[min],&A[i]);
	 }
	}
}

void pantalla(int A[], int n){
  for(int i=0; i<n-1;i++){
   printf("%d,",A[i]);
  }
  printf("%d",A[n-1]);
}

void pedirdatos(int A[], int n){
 for(int i=0; i<n; i++){
  printf("Ingrese el %d termino de la lista: ",i+1);
  scanf("%d",&A[i]);
 }
}

void main(){
  int n=6;	//size of list

  pedirdatos(list,n);
  printf("\nLista de numeros desordenada: \n");
  pantalla(list,n);
  ordenamiento(list,n);
  printf("\nLista de numeros ordenados: \n");
  pantalla(list,n);

}




