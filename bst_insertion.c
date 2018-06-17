#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int key;
    struct node *left, *right;
};

struct Node *newNode(int item)
{
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
   
  temp ->key = item;
  temp -> left = temp -> right = NULL;
  return temp;
  
};

void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\n",root->key);
        inorder(root->right);
        
        
        
    }
 
}



struct Node* insert(struct Node* Node, int key)
{
    
     if (Node == NULL)
     return newNode(key);
 
  
    if (key < Node->key)
        Node->left  = insert(Node->left, key);
    else if (key > Node->key)
        Node->right = insert(Node->right, key);   
 
   
    return Node;
    
    
    
}

int main(){
    
    struct Node *root = NULL;
    root = insert(root, 60);
    insert(root, 40);
    insert(root, 30);
    insert(root, 50);
    insert(root, 80);
    insert(root, 70);
    insert(root, 90);
  
    
    inorder(root);
  
    return 0;
}




