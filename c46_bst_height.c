#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createnode(int val){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct Node *insert(struct Node *root,int val){
    if(root==NULL)
        return createnode(val);

    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }

    return root;
}

int height(struct Node *root){
    if(root==NULL){
        return 0;
    }

    int leftheight=height(root->left);
    int rightheight=height(root->right);

    if(leftheight>rightheight)
        return leftheight+1;
    else
        return rightheight+1;
}

int isBalanced(struct Node *root){
    if(root==NULL)
        return 1;

    int leftheight=height(root->left);
    int rightheight=height(root->right);

    if(abs(leftheight-rightheight)<=1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}

int main(){
    struct Node *root=NULL;

    root=insert(root,10);
    insert(root,5);
    insert(root,15);
    insert(root,3);
    insert(root,7);

    if(isBalanced(root))
        printf("Tree is Balanced");
    else
        printf("Tree is Not Balanced");

    return 0;
}