#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	int i, tamano, j, casos;
	char jei[10000], comilla='"';
	scanf ("%d", &casos);
	getchar();
	while (casos--){
	gets(jei);
	
	tamano=strlen(jei);
	printf ("%c%s%c tiene %d caracteres\n", comilla, jei, comilla, tamano);
}
	return 0;
}
