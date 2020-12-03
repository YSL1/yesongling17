#ifndef links_h
#define links_h

typedef int dataType;
typedef struct node{
	dataType data;
	struct node *next;
}LinkStack;

LinkStack* InitStack();                 			
int Empty(LinkStack *S);   						
void Push(LinkStack *S, dataType x);   				
void Pop(LinkStack *S);    							
dataType GetTop(LinkStack *S);

int priority(char x);
double compute(double x, double y, char op);


#endif
