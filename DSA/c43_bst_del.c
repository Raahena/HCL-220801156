//Delete a node from a BST; correctly handle zero/one/two children cases.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;

};
struct node *create(int data){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node *insert(struct node *root,int data){
    if(root==NULL)
    return create(data);
    if(data<root->data)
    root->left=insert(root->left,data);
    else if(data>root->data){
        root->right=insert(root->right,data);
    }
return root;

}
struct node *searchmin(struct node *root){
    while(root->left!=NULL)
{
    root=root->left;
}
return root;
}
struct node *deleten(struct node *root,int key){
 if(root==NULL)
 return NULL;
 else if(key<root->data)
 root->left=deleten(root->left,key);
 else if(key>root->data)
 root->right=deleten(root->right,key);
 else{
    if(root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }
    else if(root->left==NULL){
        struct node *temp=root->right;
        free(root);
        return temp;
    }
        else if(root->right==NULL){
        struct node *temp=root->left;
        free(root);
        return temp;

 }
 else{
    struct node *temp=searchmin(root->right);
    root->data=temp->data;
    root->right = deleten(root->right, temp->data);
 }
} return root;
}
void inorder(struct node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node* root = NULL;

    root = insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);

    printf("Before deletion: ");
    inorder(root);

    root = deleten(root,50);

    printf("\nAfter deletion: ");
    inorder(root);

}

