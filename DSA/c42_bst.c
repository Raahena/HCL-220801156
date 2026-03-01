//Build a binary search tree supporting insert, search, inorder traversal.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *create(int data){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct Node *insert(struct Node *root,int data){
    if(root==NULL)
    return create(data);
     if(data<root->data){
        root->left=insert(root->left,data);

    }
    else if(data>root->data)
    root->right=insert(root->right,data);
return root;
}
struct Node *search(struct Node *root,int key){
    if(root==NULL||root->data==key)
    return root;
    if(key<root->data)
    return search(root->left,key);
    return search(root->right,key);

}
void inorder(struct Node *root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}

int main(){
    struct Node *root=NULL;
    root=insert(root,50);
      insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);


    printf("Inorder Traversal: ");
    inorder(root);
    int key = 90;
    if(search(root, key))
        printf("\n%d found in BST", key);
    else
        printf("\n%d not found", key);


    return 0;

}