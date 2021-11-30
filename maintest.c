#include <stdio.h>

int main()
{
	void	*test;
	// i
	printf("05i: %05i|\n", 42);
	printf(".5i: %.5i|\n", 47);
	printf("-5i: %-5i|\n", 7);
	printf("5i: %5i|\n", 11);
	printf("\n");

	// c
//	printf("05c: %05c|\n", 'p');
//    printf(".5c: %.5c|\n", 'm');
    printf("-5c: %-5c|\n",'a');
    printf("5c: %5c|\n", 'n');
    printf("\n");

	// s ??
//	printf("05s: %05s|\n", "Hel");
    printf(".5s: %.5s|\n", "Bon");
	printf(".2s: %.2s|\n", "Bon");
    printf("-5s: %-5s|\n", "Kal");
    printf("5s: %5s|\n", "Max");
    printf("\n");

	// p
//	printf("05p: %05p|\n", &test);
//    printf(".5p: %.5p|\n", &test);
    printf("-5p: %-5p|\n", &test);
    printf("5p: %5p|\n", &test);
	printf("-15p: %-15p|\n", &test);
    printf("15p: %15p|\n", &test);
    printf("\n");

	// d
	printf("05d: %05d|\n", 42);
    printf(".5d: %.5d|\n", 47);
    printf("-5d: %-5d|\n", 7);
    printf("5d: %5d|\n", 11);
    printf("\n");

	// u
	printf("05u: %05u|\n", 42);
    printf(".5u: %.5u|\n", 47);
    printf("-5u: %-5u|\n", 7);
    printf("5u: %5u|\n", 11);
    printf("\n");

	// x
	printf("05x: %05x|\n", 42);
    printf(".5x: %.5x|\n", 47);
    printf("-5x: %-5x|\n", 7);
    printf("5x: %5x|\n", 11);
    printf("\n");
	
	// %
	printf("No flag for %%\n");
	printf("\n");

	//		Combinaisons
	// 0.
//	printf("05.5i: %05.5i|\n", 42);
//	printf("05.5c: %05.5c|\n", 'p');
//	printf("05.5s: %05.5s|\n", "Hel");
//	printf("015.15p: %015.15p|\n", &test);
//	printf("05.5d: %05.5d|\n", 7);
//	printf("05.5u: %05.5u|\n", 157);
//	printf("05.5x: %05.5x|\n", 142);
}

// '0' et '.' --> ajout de zero avant
// '-' --> ajout d'espace apres
// juste chiffre --> ajout d'espace avant
