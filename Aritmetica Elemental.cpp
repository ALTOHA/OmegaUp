#include <cstdio>
#include <cstring>

using namespace std;

int main(){
	char uno[100], dos[100];
	int tamano1, tamano2, i, cont=0, l=0, q=0;
	scanf ("%s %s", uno, dos);
	
	tamano1=strlen(uno);
	tamano2=strlen(dos);
	
	l=tamano2-1, q=tamano1-1;
	
	if (tamano1 > tamano2){
		for(i=tamano1-1; i>=0; i--){
			
			if ((uno[i]-'0' + dos[l]-'0') >= 10){
				cont++;
				uno[i-1]+=1;
			}
			l--;
			if (l < 0){
				dos[0] = '0';
				l=0;
			}
		}
	}
	else{
		for(i=tamano2-1; i>=0; i--){
			
			if ((uno[q]-'0' + dos[i]-'0') >= 10){
				cont++;
				dos[i-1]+=1;
			}
			q--;
			if (q < 0){
				uno[0] = '0';
				q=0;
			}
		}
	}
	
	printf ("%d\n", cont);
	return 0;
}
