#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
}vector;
void init(vector *v){
    v->size=0;
    v->capacity=2;
    v->data=malloc(v->capacity*sizeof(int));
}
void resize(vector *v,int new_cap){
v->capacity=new_cap;
v->data=realloc(v->data,v->capacity*sizeof(int));
}
void push(vector *v,int n){
    if(v->size==v->capacity){
        resize(v,v->capacity*2);
    }
    v->data[v->size++]=n;
}
void pop(vector *v){
    if(v->size==0){
        printf("Empty");
        return;
    }
    printf("%d",v->data[v->size-1]);
    v->data[--v->size];
}
void freeVector(vector *v) {
    free(v->data);
}
int main() {
    vector v;
    init(&v);

    push(&v, 10);
    push(&v, 20);
    push(&v, 30);

    printf("Elements:\n");
    for(int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }

    pop(&v);

    printf("After pop:\n");
    for(int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }

    freeVector(&v);
    return 0;
}