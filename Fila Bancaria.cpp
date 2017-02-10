#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int a, b, i;
	char t;
	scanf ("%d", &a);
	for (i=0; i<a*2; i++){
	scanf ("%c", &t);	
		if (t=='E')
		b++;
		
		if(t=='F')
		b--;
		
		else if (t=='N' && b<=4){
			printf("Espera\n");
			b++;
		} 
		else if (t=='N' && b>4){
		printf ("No espera\n");
		b--;
	}
	}
	return 0;
}
