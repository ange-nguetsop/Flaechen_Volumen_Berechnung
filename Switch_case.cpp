#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#pragma warning (disable: 4996)
void main(void)
{

	// Aufgabe 5.2 switch-case
	char c = 'X';
	const float pi = 3.141593;
	while (c != 'e' && c != 'E')
	{
		printf("\n\tProgramm zur Flaechen- und volumenberechnung");
		printf("\n\t********************************************");

		printf("\n Kreisflaeche       K\n Zylindervolumen    Z\n Rechteckflache     R\n Ende               E");

		printf("\n Treffen Sie Ihre Wahl bitte:> ");
		scanf("%c", &c);
		if (c != '\n') while (getchar() != '\n');
		switch (c)
		{
		case 'k':
		case 'K':
		{
			float R1, R2, S;
			float i = 0;
			float Flaeche;
			printf("\nKreisflaeche in Abhaengigkeit von dem Radius");
			printf("\n*******************************************");
			printf("\nStartwert fuer den Radius eingeben:>       ");
			scanf("%f", &R1);
			if (R1 != '\n') while (getchar() != '\n');
			printf("\nEndwert fuer den Radius eingeben:>         ");
			scanf("%f", &R2);
			if (R2 != '\n') while (getchar() != '\n');
			printf("\nSchrittweite eingeben:>                    ");
			scanf("%f", &S);
			if (S != '\n') while (getchar() != '\n');
			printf("\nRadius                                    Kreisflaeche");
			printf("\n******                                    ************");
			for (i = R1; i <= R2; i = i + S)
			{
				printf("\n%f                                   %f", i, pi * i * i);

			}
			printf("\n\n Weiter mit <Enter>");
			scanf("%c", &c);
			if (c != '\n') while (getchar() != '\n');
		}
		break;

		case 'z':
		case 'Z':
		{
			float R, H1, H2, S1, j = 0;
			printf("\nZylindervolumen in Abhaengigkeit von der Hoehe");
			printf("\n**********************************************");
			printf("\nRadius des Zylinders eingeben:>");
			scanf("%f", &R);
			if (R != '\n') while (getchar() != '\n');
			printf("\nStarwerte Hoehe des Zylinders eingeben:>");
			scanf("%f", &H1);
			if (H1 != '\n') while (getchar() != '\n');
			printf("\nEndwerte Hoehe des Zylinders eingeben:> ");
			scanf("%f", &H2);
			if (H2 != '\n') while (getchar() != '\n');
			printf("\nSchrittweite eingeben:>                 ");
			scanf("%f", &S1);
			if (S1 != '\n') while (getchar() != '\n');
			printf("\nHoehe                                      Volumen");
			printf("\n*****                                      *******");
			for (j = H1; j <= H2; j = j + S1)
			{
				printf("\n%f                                 %f", j, (pi * R * R * j) / 2);
			}
			printf("\n\n Weiter mit < Enter>");
			scanf("%c", &c);
			if (c != '\n') while (getchar() != '\n');
			break;
		}
		case 'R':
		case 'r':
		{
			float L1, L2, S2;
			float k = 0;
			printf("\nRechteckflaeche in Abhaengigkeit von dem Radius");
			printf("\n***********************************************");
			printf("\n Startwert Laenge eingeben:>    ");
			scanf("%f", &L1);
			if (L1 != '\n') while (getchar() != '\n');
			printf("\n Endwert Laenge eingeben;>      "),
				scanf("%f", &L2);
			if (L2 != '\n') while (getchar() != '\n');
			printf("\n Schrittweite eingeben:>        ");
			scanf("%f", &S2);
			if (S2 != '\n') while (getchar() != '\n');
			printf("\n Laenge                            Flaeche");
			printf("\n*******                           ********");
			for (k = L1; k <= L2; k = k + S2)
			{
				printf("\n%f                            %f", k, k * k);
			}
			printf("\n\n Weiter mit <Enter>");
			scanf("%c", &c);
			if (c != '\n') while (getchar() != '\n');
			break;
		}
		case 'e':
		case 'E':
		{
			printf("\nProgramm beendet.\nAuf wiedersehen!");
			printf("\n\n");
			break;
		}
		default:
			system("cls");
			printf("\nSie haben eine falsche Wahl getroffen\n\nBittev ersuchen Sie noch mal \n\nDer Wert soll entwerder Z, R, K oder E fuer'ende des Programms' sein.\n\n");

		}
	}
}