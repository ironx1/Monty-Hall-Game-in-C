/*
	Name: Monty Hall Game
	Copyright: The GNU General Public License v3.0
	Author: ironx1
	Date: 21.09.22 22:29
	Description: The Monty Hall problem is a brain teaser, in the form of a probability puzzle, 
	loosely based on the American television game show Let's Make a Deal and named after its original host, Monty Hall. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	char door[3];
	char askQ[1];
	char *p1;
	p1 = door;
	int r1,r2,r3,r4,r5,selectDoor;
	printf("Welcome to Monty Hall Game\n\n");
	printf("Cikmak icin ctrl+c'ye basin\n\n");
	while(1){
	srand(time(NULL));
	go:
	r1 = rand()%3;
	r2 = rand()%3;
	r3 = rand()%3;
	if (r1==r2||r1==r3||r2==r3)
	{
		goto go;
	}
	door[r1] = 'K';
	door[r2] = 'K';
	door[r3] = 'A';
	soru:
	printf("Bir Kapi Seciniz(1/2/3):");
	scanf("%d",&selectDoor);
	if(selectDoor==1){
		go2:
		r4=rand()%2+1; 
		r5=rand()%2+1;
		if (r4==r5)
		{
			goto go2;
		}
		else{
			
		}
		if (door[r4]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r5+1,door[r5]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r4+1,door[r4]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 1,door[0]);
			}
		}
		else if (door[r5]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r5+1,door[r5]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 1,door[0]);
			}
		}
		else{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e'){
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n",r5+1,door[r5] );
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", 1,door[0]);
			}
		}
		
	}

	else if(selectDoor==2){
		go3:
		r4=rand()%2;
		r5=rand()%2;
		if (r4==r5)
		{
			goto go3;
		}
		else{

		}
		if (r4==1)
		{
			r4++;
		}
		else if (r5==1)
		{
			r5++;
		}
		else{

		}
		if (door[r4]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r5+1,door[r5]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r4+1,door[r4]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 2,door[1]);
			}
		}
		else if (door[r5]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r5+1,door[r5]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 2,door[1]);
			}
		}
		else{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e'){
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n",r5+1,door[r5] );
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", 2,door[1]);
			}
		}

	}	
	
	else if(selectDoor==3){
		go4:
		r4=rand()%2;
		r5=rand()%2;
		if (r4==r5)
		{
			goto go4;
		}
		else{

		}

		if (door[r4]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r5+1,door[r5]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r4+1,door[r4]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 3,door[2]);
			}
		}
		else if (door[r5]=='A')
		{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e')
			{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", r5+1,door[r5]);
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n", 3,door[2]);
			}
		}
		else{
			printf("\n%d.kapi acildi\n%c:Keci\n",r4+1,door[r4]);
			printf("Seciminizi Degistirmek Istiyor Musunuz(e/h): ");
			scanf("%s",&askQ);
			if (askQ[0]=='e'){
				printf("\nSecilen kapi: %d\n%c: Keci\nMaalesef Kaybettiniz...\n",r5+1,door[r5] );
			}
			else{
				printf("\nSecilen kapi: %d\n%c: Araba\nTebrikler Kazandiniz...\n", 3,door[2]);
			}
		}

	}
	else{
		printf("Hatali Secim!\n");
		goto soru;
	}
}
	

	return 0;
}
