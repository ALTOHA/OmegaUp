#include <cstdio>

using namespace std;

int main(){
	int a, b, i=0, d, c;
	scanf ("%d %d %d", &a, &b, &d);
	c=b;
	b=0;
	do{
		b=b+c;
		i++;
		if (b<a){
		b=b-d;
		i++;
	}	
	}while (b<a);
	printf ("%d\n", i);
	return 0;
}
