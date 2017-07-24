#include <cstdio>

using namespace std;

int main(){
	int casos, dados[100], i, j, mayor=0, menor=1000;
	scanf ("%d", &casos);
	
	for (i=0; i<casos; i++){
		scanf ("%d", &dados[i]);
	}
	
	for (i=0; i<casos; i++){
		for(j=i+1; j<casos; j++){
			if (dados[i]+dados[j] > mayor)
				mayor = dados[i]+dados[j];
			if (dados[i]+dados[j] < menor)
				menor = dados[i]+dados[j];
		}
	}
	printf ("%d\n%d\n", menor, mayor);
	return 0;
}
