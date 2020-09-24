#include <stdio.h>
int N;
char tree[27][3]={0};
char value, left, right;

void preorder(int i){
   printf("%c",i+'A');
   if(tree[i][1] != '.') preorder(tree[i][1]-'A');
   if(tree[i][2] != '.') preorder(tree[i][2]-'A');
}
void inorder(int i){
   if(tree[i][1] !='.') inorder(tree[i][1]-'A');
   printf("%c",i+'A');
   if(tree[i][2] != '.') inorder(tree[i][2]-'A');
}
void postorder(int i){
   if(tree[i][1] != '.') postorder(tree[i][1]-'A');
   if(tree[i][2] != '.') postorder(tree[i][2]-'A');
   printf("%c",i+'A');
}

int main(void){
	scanf("%d",&N);
	for(int i = 0; i < N; i++){
		scanf(" %c %c %c", &value, &left, &right);
		tree[value-'A'][1]=left;
		tree[value-'A'][2]=right;
		if(tree[value-'A'][1] != '.')
			left = left-'A';
		else
			left = 0;
      	if(tree[value-'A'][2] != '.')
      		right = right-'A';
      	else
      		right = 0;
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
	printf("\n");
}