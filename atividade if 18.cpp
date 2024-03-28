    #include <stdio.h>

int main() {
	int e, n1, n2;
	
	printf("Escolha uma equacao:\n\nAdicao digite 1\nSubtracao digite 2\nMultiplicacao digite 3\nDivisao digite 4\n\n");
	scanf("%d", &e);
	
	if(e <= 0 || e >= 5) {
		printf("\n\nescolha um numero entre 1 e 4.");
	} else if (e == 1) {
		printf("\n\nescolha um numero: ");
		scanf("%d", &n1);
		
		printf("\nescolha um numero: ");
		scanf("%d", &n2);	
		
		printf("\n\no resultado foi: %d", (n1 + n2));
	}else if (e == 2) {
		printf("\n\nescolha um numero: ");
		scanf("%d", &n1);
		
		printf("escolha um numero: ");
		scanf("%d", &n2);	
		
		printf("\n\no resultado foi: %d", (n1 - n2));
	}else if (e == 3) {
		printf("\n\nescolha um numero: ");
		scanf("%d", &n1);
		
		printf("escolha um numero: ");
		scanf("%d", &n2);	
		
		printf("\n\no resultado foi: %d", (n1 * n2));
	}else if (e == 4) {
		printf("\n\nescolha um numero: ");
		scanf("%d", &n1);
		
		printf("escolha um numero: ");
		scanf("%d", &n2);	
		
		printf("\n\no resultado foi: %d", (n1 / n2));
	}
}
