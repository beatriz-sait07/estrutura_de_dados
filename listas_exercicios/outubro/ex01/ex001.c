#include "ex001.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _node_simples{
    int valor;
    struct _node_simples *next;
}Node_simples;


Node_simples *Node_create(int val){
    Node_simples *node = (Node_simples*)calloc(1, sizeof(Node_simples));
    node->valor = val;
    node->next = NULL;
    return node;
}

Node_simples *add_final(Node_simples *begin, int elem){
    if (begin == NULL){
        return Node_create(elem);
    }else{
        begin->next = add_final(begin->next, elem);
        return begin;
    }
}

void print(Node_simples *begin){
    if(begin == NULL)return;
    printf("%d ->", begin->valor);
    print(begin->next);
}

/*void add_final(Lista *list, int elem){
    Node_simples *dados = Node_create(elem);
    if(_isNull(list))list->inicio = dados;
    else{
        Node_simples *aux = list->inicio;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = dados;
    }
    list->size++;
}*/



