#include <stdio.h>
#include <string.h>


typedef char string[256];


typedef struct 
{
	
	char Judullagu [50];
	char Penyanyi [50];
	char Album [50];
	string Tahunrilis [20];
	char Genre [20];
		
}Musik;

 

Musik InputDataMusik (Musik M) 
{
	printf("======================================================================\n");
	printf(" \t\t\t   MASUKKAN DATA\n");
	printf("======================================================================\n");
	printf("\n");
	printf(" Judul lagu	: "); 
	scanf("%[^\n]",M.Judullagu);fflush(stdin);
	printf("\n");
	printf(" Musisi		: "); 
	scanf("%[^\n]",M.Penyanyi);fflush(stdin);
	printf("\n");
	printf(" Album		: "); 
	scanf("%[^\n]",M.Album);fflush(stdin);
	printf("\n");
	printf(" Tahun rilis	: "); 
	scanf("%s", &M.Tahunrilis);fflush(stdin);
	printf("\n");
	printf(" Genre		: ");
	scanf("%s",	&M.Genre);fflush(stdin);
	printf("\n\n\n");

return M;
}

void TampilkanDataMusik (Musik M) {

 
	system("cls");
	printf("\n");
	printf("======================================================================\n");
	printf(" \t\t\t  DATA MUSIK \n");
	printf("======================================================================\n");
	printf("\n");
	printf(" Judul lagu	: %s\n ", M.Judullagu);
	printf("\n");
	printf(" Musisi		: %s\n ", M.Penyanyi);
	printf("\n");
	printf(" Album		: %s\n ", M.Album);
	printf("\n");
	printf(" Tahun rilis	: %s\n ", M.Tahunrilis);
	printf("\n");
	printf(" Genre		: %s\n",M.Genre);
	printf("\n\n");
	printf("======================================================================\n");
	printf("======================================================================\n");
}

int main() {
	
	
	printf("\n");
	printf("\n");
	printf("======================================================================\n");
	printf(" 		  TUGAS ADT PEMROGRAMAN LANJUT \n");
	printf("	  		  Nabil Habibi\n"); // Nama Mahasiswa
	printf("	  		  19081010184\n"); // NPM Mahasiswa
	printf("   		      Pemrograman Lanjut C \n"); // Mata kuliah
	printf("======================================================================\n");
	printf("\n");
	printf("   		    -------------------------- \n");
    	printf("   		    |   PROGRAM DATA MUSIK   |\n");
    	printf("   		    -------------------------- \n\n");
	
Musik M;

M=InputDataMusik(M);
TampilkanDataMusik(M);

return 0;
}
