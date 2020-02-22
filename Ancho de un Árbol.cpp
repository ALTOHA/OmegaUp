#include <bits/stdc++.h>

using namespace std;

int pos[1005], cont = 1;

struct node{
	int value;
	node* left;
	node* right;
	node(int value){
		this->value = value;
		this->left = this->right = NULL;
	}
};

void in_order(node* root){
    if(root == NULL){
        return;
    }
    in_order(root -> left);
    pos[cont] = root->value;
    cont++;
    //cout << root -> value << " ";
    in_order(root->right);

}

int main(){
	node* root = NULL;
	map <int, node*> m;
	int nodos, main_nodo, izq, der, nivel[1005] = {0}, i, j, level = 1005, maximo = INT_MIN;
	
	scanf("%d",&nodos);
	nivel[1] = 1;
	for(i=1; i<=nodos; i++){
		scanf("%d %d %d", &main_nodo, &izq, &der);
		
		if(m.count(main_nodo) == 0){
			node* new_node = new node(main_nodo);
			root = new_node;
			nivel[main_nodo] = 1;
			if(izq != -1){
				nivel[izq] = nivel[main_nodo] + 1;				
				m[izq] = new_node->left = new node(izq);
			}
			if(der != -1){
				nivel[der] = nivel[main_nodo] + 1;				
				m[der] = new_node->right = new node(der);
			}
		}
		else{
			if(izq != -1){
				nivel[izq] = nivel[main_nodo] + 1;
				m[main_nodo] ->left = m[izq] =  new node(izq);
			}
			if(der != -1){
				nivel[der] = nivel[main_nodo] + 1;				
				m[main_nodo] ->right = m[der] = new node(der);	
			}
		}

	}
	in_order(root);
		
	for(i = 1; i<=nodos; i++){
		for(j=nodos; j>=1; j--){
			if(nivel[pos[i]] == nivel[pos[j]]){
				if(maximo <= abs(j-i) + 1){
					maximo = abs(j-i) + 1;
					level = nivel[pos[i]];
				}
			}
		}
	}
	
	printf("%d %d\n", level, maximo);
		
	return 0;
}
