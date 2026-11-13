#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left,*right;
};
struct node*create(int value)
{
struct node*new node
newnode=(struct node*malloc(sizeof(struct node));
newnode->data=value;
newnode->left=newnode_>right=NULL;
return newnode;
}
struct node*insert(struct node*root,int value)
{
if (root==NULL)
return create(value);
if (value<root->data)
root_>left=insert(root->left,value);
else if (value>root->data)
root->right=insert(root->right,value);
return root;
}
void inorder(struct node*root)
{
if(root!=NULL)
{
inorder(root!=NULL)
printf("%d",root->data);
inorder(root->right);
}
}
void preorder(srruct node*root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d",root->data);
}
}
struct node*findMin(struct node*root)
{
while(root!=NULL&&root->left!=NULL)
root=root->left;
return root;
}
struct node*deleteNode(struct node*root,int value)
{
struct node*temp;
if(root==NULL)
{
printf("element not found\n");
return NULL;
}
if (value<root->data)
root->left=deleteNode(root->left,value);
else if(value>root->data)
root->right=deleteNode(root-right,value);
else
{
if(root->left==NULL&&root->right==NULL)
{
free(root);
return NULL;
}
else if(root->left==NULL)
{
temp=root->right;
free(root);
return temp;
}
else
{
temp=findMin(root->right)
root->data=temp->data;
root->right=deleteNode(right,temp->data);
}
}
return root;
}
int main()
{
struct node*root=NULL;
int choice,value;
do
{
printf("\n--BINARY SEARCH TREE---\n");
printf("1.insert\n");
printf("2.inorder traversal\n");
printf("3.preorder traversal\n")
printf("postroder traversal\n");
printf("delete a node\n");
printf("6.exit\n");







