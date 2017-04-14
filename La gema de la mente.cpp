#include <cstdio>

using namespace std;

int main(){
	int casos, numero[108], k, i;
	scanf ("%d", &casos);
	 	for (i=0; i<casos; i++){
	 		scanf ("%d", &numero[i]);
		 }
		 scanf ("%d", &k);
		 for (i=0; i<casos; i++){
		 	if (k-3<=numero[i] && k+3>=numero[i])
		 	printf ("%d ", numero[i]);
		 }
		 printf ("\n");
	
	return 0;
}
