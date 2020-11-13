// inclusion des fichiers d'entêtes (header) d'extension .h
#include <stdlib.h>
#include <stdio.h>
// définition de macros
// #define DEBUG
// programme principal
//définition de type

typedef unsigned char boolean;
typedef unsigned char byte;

int main() {//accolade ouvrante = début de bloc d'instructions
		//Déclaration de variables réservées au main(), et initialisations facultatives
	int A;
	A = 1;
	int B;
	B = 2;
	int C;
	C = 3;
	char OneLetter = 'A';
	char AnOtherLetter = 66;
	byte toto = 0;
	unsigned char VerySmallCounter = 255;
	short SmallCounter = 32767;
	int Counter = 0;
	long LargeCounter = 2147483647;
	unsigned long FullRangeLargeCounter = 4294967295;
	int ChiendeGarde = 0;
	float Dim1 = 1.414F;
	double Dim2 = .5L;
	boolean testResult = 1;
	//Déclaration de constante
	const double Pi = 3.14159265L;
	//les instructions du programme principal : main()

	/*******Debut du programme******/
	printf("\n");
	printf("exemple d'affichage d'un caractère %c, codage sur %d octets\n", OneLetter, sizeof(OneLetter)); //sur 1 octet => 0 à 255 ou de -128 à 127
	printf("exemple d'affichage d'un entier court %c, codage sur %d octets\n", AnOtherLetter, sizeof(AnOtherLetter));//sur 1 octet => 0 à 255 ou de -128 à 127
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", toto, sizeof(toto));//sur 1 octet => 0 à 255 ou de -128 à 127
	printf("exemple d'affichage d'un entier court %u, codage sur %d octets\n", VerySmallCounter, sizeof(VerySmallCounter));//sur 1 octet => 0 à 255 ou de -128 à 127
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", SmallCounter, sizeof(SmallCounter));//sur 2 octets => 0 à 65,535 ou de -32,768 à 32,767
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", Counter, sizeof(Counter));//sur 4 octets => 0 à 4,294,967,295
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", LargeCounter, sizeof(LargeCounter));//sur 4 octets => 0 à 4,294,967,295
	printf("exemple d'affichage d'un entier court %u, codage sur %d octets\n", FullRangeLargeCounter, sizeof(FullRangeLargeCounter));//sur 4 octets => 0 à 4,294,967,295
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", ChiendeGarde, sizeof(ChiendeGarde));//sur 4 octets => 0 à 4,294,967,295
	printf("exemple d'affichage d'un entier court %f, codage sur %d octets\n", Dim1, sizeof(Dim1));//sur 4 octets => 0 à 4,294,967,295
	printf("exemple d'affichage d'un entier court %f, codage sur %d octets\n", Dim2, sizeof(Dim2));//sur 8 octets => 2^64 (max)
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", testResult, sizeof(testResult));//sur 1 octet => 0 à 255 ou de -128 à 127
	/*****Fun de programme****/

	printf("On a A qui donne en decimale %d et son adresse est %x\nOn a B qui donne en decimale %d et son adresse est %x\nOn a C qui donne en decimale %d et son adresse est %x \n",  A, &A, B, &B , C & C);

	system("pause");
	return(EXIT_SUCCESS);

}//accolade fermante = fin de bloc d'instructions