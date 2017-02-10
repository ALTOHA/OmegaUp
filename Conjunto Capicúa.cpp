#include <cstdio>

using namespace std;

int main(){
	int a, b[100000], i, c, j, l=0;
	scanf ("%d", &a);
	for (i=0; i<a; i++){
		scanf ("%d", &b[i]);
	}
	c=a-1;
	for (j=0; j<a; j++){
		if (b[j]==b[c])
		l++;
		
		
		c--;
	}
	(l==a)?printf("SI\n"):printf("NO\n");
	return 0;
}
