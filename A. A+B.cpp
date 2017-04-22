#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
int main(){
	char num[100];
	long long int i, tamano, j=0, casos, l=1, numeros[100];
	scanf ("%lld", &casos);
		while (casos--){
			scanf ("%s", num);
			tamano=strlen(num);
			sort(num, num+tamano);
			tamano--;
			while(tamano!=0){
				j+=((num[tamano]-'0')*pow(10, tamano-1));
				tamano--;				
			}
			j+=num[0]-'0';
			printf ("%lld\n", j);
			j=0;
		}
	return 0;
 }
