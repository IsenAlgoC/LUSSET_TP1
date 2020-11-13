#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

	 for (int NoMarche = 1; NoMarche <= 100; NoMarche++)
			{
			 printf("%d ", NoMarche );
			}
	 printf("\n \n");
	 
	 for (int i = 32; i <= 127; i++)
	 {
		 printf("%d => %c ", i, i);
		 if ((i - 31) % 16 == 0)
		 {
			 printf("\n");
		 }
	 }
	 printf("\n");
	 for (float a = 20; a >= 0; a=a-.5)
	 {
		 printf("%.1f ", a);
	 }
	 printf("\n \n");

	 for (double u = 0; u <= 90; u= u+ 10)
	 {
		 double k = sin(u);
		 printf("sin %.0f degres = %f \n", u, k);
	 }
	 printf("\n \n");

}