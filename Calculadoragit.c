//Calculadora 
#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main ()
{
	int num1, num2, sum, res, mult, div;
	printf("Intruzca el valor de a: ");
	scanf("\n%d", &num1);
	printf("\nIntruzca el valor de b: ");
	scanf("\n%d", &num2);
	//suma();
	printf("\nLa suma es: %d", suma(num1, num2));
	//resta();
	printf("\nLa resta es: %d", resta(num1, num2 ));
	//division();
	printf("\nLa multiplicacion es: %d", multiplicacion(num1, num2));
	//multiplicacion();
	printf("\nLa division es: %d", division(num1, num2));
	
	return 0;
}

int suma(int a, int b)
{
	return a + b;	
}

int resta(int a, int b)
{
		return a - b;
}

int multiplicacion(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}




