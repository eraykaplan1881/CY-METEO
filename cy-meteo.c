#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <math.h>

/*

#include<stdio.h>
#include<stdlib.h>

typedef struct date date;
struct date{
	int year;
	int month;
	int day;	
	int hour;
	int minute;
	int second;
};

typedef struct data data;
struct data{
	int id;
	date* time;
	float fileDATA;	
};

typedef struct tree tree;
struct tree{
	data* elmt;
	int count;
    float min;
    float max;
	tree* left;
	tree* right;
};

typedef struct node node;
struct node{
    data* elmt;
    node* next;
    int count;
    float min;
    float max;
};
typedef struct avl avl;
struct avl{
    data* elmt;
    avl* right;
    avl* left;
    int count;
    int Balance;
};

int max(int a,int b,int c){
    if (a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
} 

int min(int a,int b,int c){
    if (a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
}


avl* buildavl(data* a){
    if(a == NULL){
        exit(4);
    }
    avl* new=malloc(sizeof(avl));
    if(new == NULL){
        exit(4);
    }
    new->elmt=a;
    new->right=NULL;
    new->left=NULL;
    new->Balance=0;
    new->count=1;
    return new;
}

avl* rotationleft(avl* a) {
    int eqa, eqb;
    avl* pivot = a->right;
    a->right = pivot->left;
    pivot->left = a;
    eqa = a->Balance;
    eqb = pivot->Balance;
    a->Balance = (eqa - (max(eqb, 0, 0))) - 1;
    pivot->Balance = min(eqa-2, eqa+eqb-2, eqb-1);
    a = pivot;
    return a;
}

avl* rotationright(avl* a){
    int eqa,eqb;
    avl* pivot=a->left;
    a->left=pivot->right;
    pivot->right=a;
    eqa=a->Balance;
    eqb=pivot->Balance;
    a->Balance= (eqa - min(0, eqb,0))+1;
    pivot->Balance= max(eqa+2,eqa+eqb+2,eqb+1);
    a=pivot;
    return a;
}

avl* doublerotationleft(avl* a){
    a->right=rotationright(a->right);
    return rotationleft(a);
}

avl* doublerotationright(avl* a){
    a->left=rotationleft(a->left);
    return rotationright(a);
}

avl* BalanceAVL(avl* a){
    if(a->Balance>=2){
        if(a->right->Balance>=0){
            return rotationleft(a);
        }
        else{
            return doublerotationleft(a);
        }
    }
    else if(a->Balance <= -2){
        if(a->left->Balance<=0){
            return rotationright(a);
        }
        else{
            return doublerotationright(a);
        }
    }
    return a;
}


node* createnode(data* e){
    node* nv = malloc(sizeof(node));
    if(nv == NULL){
        exit(4);
    }
    nv->elmt = e;
    nv->next = NULL;
    nv->count = 1;
    nv->min = e->fileDATA;
    nv->max = e->fileDATA;
    return nv;
}

void writeListinverse(node* p) {
  node* a = p;
  FILE *fp;
  fp = fopen("hSORTED.MAINDATA", "w");
  if (fp == NULL) {
    printf("Error opening file!\n");
    exit(1);
  }
  if (a != NULL) {
    writeListinverse(a->next);
    if (a->elmt == NULL) {
      fclose(fp);
      exit(4);
    }
    fprintf(fp, "%d,%d-%d-%d %d:00,%f\n", a->elmt->id, a->elmt->time->year, a->elmt->time->month, a->elmt->time->day, a->elmt->time->hour, ((a->elmt->fileDATA) / (a->count)));
  }
  fclose(fp);
}

*/

int main(int argc, char *argv[]){

FILE* MAINDATA = fopen(argv[2],"r");
if(MAINDATA==NULL){
	exit(2);
}
	
	//printf("%s %s %s %s %s %s %s\n",argv[1],argv[2],argv[3],argv[4],argv[5],argv[6],argv[7]);

	if (argc != 7 && argc != 8) {
		return 1;
	}
	
	if(strcmp(argv[5], "--tab") == 0){
		/*
		if(strcmp(argv[6], "-t1") == 0){
			tp1tab(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-t2") == 0){
			tp2tab(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-t3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-p1") == 0){
			tp1tab(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-p2") == 0){
			tp2tab(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-p3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-w") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-m") == 0){
			if(strcmp(argv[7], "-r") == 0){
				moisttab(MAINDATA);
				return 0;
			}
		}
		if(strcmp(argv[6], "-h") == 0){
			if(strcmp(argv[7], "-r") == 0){
				altitudetab(MAINDATA);
				return 0;
			}
		}
	}
	
	if(strcmp(argv[5], "--abr") == 0){
		
		if(strcmp(argv[6], "-t1") == 0){
			tp1abr(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-t2") == 0){
			 tp2abr(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-t3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-p1") == 0){
			tp1abr(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-p2") == 0){
			tp2abr(MAINDATA);
			return 0;
		}
		if(strcmp(argv[6], "-p3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-w") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-m") == 0){
			if(strcmp(argv[7], "-r") == 0){
				moistabr(MAINDATA);
				return 0;
			}
		}
		if(strcmp(argv[6], "-h") == 0){
			if(strcmp(argv[7], "-r") == 0){
				altitudeabr(MAINDATA);
				return 0;
			}
		}
	}
	
	if(strcmp(argv[5], "--avl") == 0){
		
		if(strcmp(argv[6], "-t1") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-t2") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-t3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-p1") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-p2") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-p3") == 0){
			return 0;
		}
		if(strcmp(argv[6], "-w") == 0){
			return 0;
		}
		*/
		if(strcmp(argv[6], "-m") == 0){
			if(strcmp(argv[7], "-r") == 0){
				#define MAX_LINE_LENGTH 100

				typedef struct AVLNode {
					int first;
					int second;
					int height;
					struct AVLNode *left;
					struct AVLNode *right;
				} AVLNode;

				int max(int a, int b) {
					return (a > b) ? a : b;
				}

				int height(AVLNode *node) {
					if (node == NULL) {
					return 0;
					}
					return node->height;
				}

				AVLNode *newAVLNode(int first, int second) {
					AVLNode *node = (AVLNode *)malloc(sizeof(AVLNode));
					node->first = first;
					node->second = second;
					node->height = 1;
					node->left = node->right = NULL;
					return node;
				}

				AVLNode *rightRotate(AVLNode *y) {
					AVLNode *x = y->left;
					AVLNode *T2 = x->right;

					x->right = y;
					y->left = T2;

					y->height = max(height(y->left), height(y->right)) + 1;
					x->height = max(height(x->left), height(x->right)) + 1;

					return x;
				}

				AVLNode *leftRotate(AVLNode *x) {
					AVLNode *y = x->right;
					AVLNode *T2 = y->left;

					y->left = x;
					x->right = T2;

					x->height = max(height(x->left), height(x->right)) + 1;
					y->height = max(height(y->left), height(y->right)) + 1;

					return y;
				}

				int getBalance(AVLNode *node) {
					if (node == NULL) {
					return 0;
					}
					return height(node->left) - height(node->right);
				}

				AVLNode *insert(AVLNode *node, int first, int second) {
					if (node == NULL) {
					return newAVLNode(first, second);
					}

					if (second < node->second) {
					node->left = insert(node->left, first, second);
					} else if (second > node->second) {
					node->right = insert(node->right, first, second);
					} else {
					return node;
					}

					node->height = 1 + max(height(node->left), height(node->right));

					int balance = getBalance(node);

					if (balance > 1 && second < node->left->second) {
					return rightRotate(node);
					}

					if (balance < -1 && second > node->right->second) {
					return leftRotate(node);
					}

					if (balance > 1 && second > node->left->second) {
					node->left = leftRotate(node->left);
					return rightRotate(node);
					}
  
					if (balance < -1 && second < node->right->second) {
					node->right = rightRotate(node->right);
					return leftRotate(node);
					}

					return node;
				}

				void inOrder(AVLNode *root, FILE *out) {
					if (root != NULL) {
					inOrder(root->right, out);
					fprintf(out, "%d;%d\n", root->first, root->second);
					inOrder(root->left, out);
					}
				}

				FILE *in = fopen(argv[2], "r");
				if (in == NULL) {
				printf("Could not open file %s\n", argv[2]);
				return 2;
				}

				AVLNode *root = NULL;

				char line[MAX_LINE_LENGTH];
				while (fgets(line, MAX_LINE_LENGTH, in) != NULL) {
				int first, second;
				sscanf(line, "%d;%d\n", &first, &second);
				root = insert(root, first, second);
				}

				fclose(in);

				FILE *out = fopen(argv[4], "w");
				if (out == NULL) {
				printf("Could not open file %s\n", argv[4]);
				return 3;
				}

				inOrder(root, out);
				fclose(out);
				return 0;
			}
		}
		if(strcmp(argv[6], "-h") == 0){
			if(strcmp(argv[7], "-r") == 0){
				typedef struct Node {
					int key1, key2;
					int height;
					struct Node *left;
					struct Node *right;
				} Node;

				int max(int a, int b) {
					return (a > b) ? a : b;
				}

				int height(Node *node) {
					if (node == NULL) {
					return 0;
					}
					return node->height;
				}

				Node* newNode(int key1, int key2) {
					Node *node = (Node*)malloc(sizeof(Node));
					node->key1 = key1;
					node->key2 = key2;
					node->left = NULL;
					node->right = NULL;
					node->height = 1;
					return node;
				}

				Node* rightRotate(Node *y) {
					Node *x = y->left;
					Node *T2 = x->right;
					x->right = y;
					y->left = T2;
					y->height = max(height(y->left), height(y->right)) + 1;
					x->height = max(height(x->left), height(x->right)) + 1;
					return x;
				}

				Node* leftRotate(Node *x) {
					Node *y = x->right;
					Node *T2 = y->left;
					y->left = x;
					x->right = T2;
					x->height = max(height(x->left), height(x->right)) + 1;
					y->height = max(height(y->left), height(y->right)) + 1;
					return y;
				}

				int getBalance(Node *node) {
					if (node == NULL) {
					return 0;
					}
					return height(node->left) - height(node->right);
				}

				Node* insert(Node *node, int key1, int key2) {
					if (node == NULL) {
					return newNode(key1, key2);
					}
					if (key2 > node->key2) {
				        node->right = insert(node->right, key1, key2);
					}
					else if (key2 < node->key2) {
					node->left = insert(node->left, key1, key2);
					}
					else {
					return node;
					}
					node->height = 1 + max(height(node->left), height(node->right));
					int balance = getBalance(node);
					if (balance > 1 && key2 < node->left->key2) {
					return rightRotate(node);
					}
					if (balance < -1 && key2 > node->right->key2) {
    					return leftRotate(node);
					}
					if (balance > 1 && key2 > node->left->key2) {
      					node->left = leftRotate(node->left);
     					return rightRotate(node);
					}
					if (balance < -1 && key2 < node->right->key2) {
					node->right = rightRotate(node->right);
					return leftRotate(node);
					}
					return node;
				}

				void inOrder(Node *root, FILE *f) {
					if (root != NULL) {
						inOrder(root->right, f);
						fprintf(f, "%d;%d\n", root->key1, root->key2);
						inOrder(root->left, f);
					}
				}
				
				FILE *inputFile = fopen(argv[2], "r");
				if (inputFile == NULL) {
					printf("Error opening input file\n");
					return 2;
				}

				Node *root = NULL;
				int key1, key2;
				char line[100];
				while (fgets(line, 100, inputFile)) {
					sscanf(line, "%d;%d", &key1, &key2);
					root = insert(root, key1, key2);
				}
				fclose(inputFile);

				FILE *outputFile = fopen(argv[4], "w");
				if (outputFile == NULL) {
					printf("Error opening output file\n");
					return 3;
				}

				inOrder(root, outputFile);
				fclose(outputFile);
				return 0;
			}
		}
	}
}















