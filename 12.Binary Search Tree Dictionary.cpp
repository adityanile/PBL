#include <iostream>
using namespace std;
struct node
{
int key;
char m;
node *left;
node *right;
};
class BST
{
public:
node *left=NULL;
node *right=NULL;
node *root=NULL;
node *n,*parent,*temp;
void create()
{
n = new node;
n->left = NULL;
n->right = NULL;
cout<<"\n Enter the element and its meaning : ";
cin>>n->key;
cin>>n->m;
if(root == NULL)
root = n;
else
insert(root,n);
}
void insert(node *root,node *n)
{
if(n->key > root->key){
if(root->right == NULL)
{
root->right = n;
}
else
insert(root->right,n);
}
if(n->key < root->key) {
if(root->left == NULL) {
root->left = n;
}
else
insert(root->left,n);
}
}
void display(node *root)
{
if(root!=NULL) {
display(root->left);
cout<<root->key<<root->m<<" ";
display(root->right);
}
}
void find()
{
int val;
cout<<"\n Enter the element to Search : ";
cin>>val;
node *temp = root;
search(temp,val,parent);
}
void search(node *temp,int val,node *parent)
{
while(temp != NULL)
{
if(temp->key == val)
{
cout<<"\n Element "<<temp->key<<""<<temp->m<<" is Present"<<endl;
break;
}
parent = temp;
if(temp->key > val)
temp = temp->left;
else
temp = temp->right;
}
return;
}
void delet()
{
int val;
cout<<"\n Enter the element to Delete : ";
cin>>val;
if(val== root->key)
{
BST();
}
else
del(root,val);
}
void del(node *root,int val)
{
node *temp_succ;
temp = root;
search(temp,val,parent);
if(temp->left != NULL && temp->right != NULL)
{
parent = temp;
temp_succ = temp->right;
while(temp_succ->left != NULL)
{
parent = temp_succ;
temp_succ = temp_succ->left;
}
temp->key = temp_succ->key;
parent->left = temp_succ->right;
delete temp_succ;
cout<<"Element id deleted"<<endl;
return;
}
else if(temp->left != NULL && temp->right == NULL)
{
if(parent->left == temp)
parent->left = temp->left;
else
parent->right = temp->left;
temp = NULL;
delete temp;
cout<<"Element id deleted"<<endl;
return;
}
else if(temp->left == NULL && temp->right != NULL)
{
if(parent->left == temp)
parent->left = temp->right;
else
parent->right = temp->right;
temp = NULL;
delete temp;
cout<<"Element id deleted"<<endl;
return;
}
else if(temp->left == NULL && temp->right == NULL)
{
if(parent->left == temp)
parent->left = NULL;
else
parent->right = NULL;
cout<<"Element id deleted"<<endl;
return;
}
}
void update()
{
int val;
char mean;
cout << "Enter the key to be updated: ";
cin >> val;
cout << "Enter the new meaning: ";
cin >> mean;
temp = root;
while (temp != NULL && temp->key != val) {
if (val < temp->key) {
temp = temp->left;
}
else
{
temp = temp->right;
}
}
if (temp != NULL && temp->key == val) {
temp->m = mean;
cout << "Meaning updated." << endl;
}
}
};
int main() {
BST b;
int ch;
char ans;
while(1)
{
cout<<"\n1.Insert\n2.Display\n3.Delete\n4.Update\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1:
do
{
b.create();
cout<<"\n Do u want to enter more element? (y/n) "<<endl;
cin>>ans;
}while(ans == 'y');
break;
case 2:
b.display(b.root);
break;
case 3:
b.delet();
break;
case 4:
b.update();
b.display(b.root);
break;
default:
cout<<"Enter valid choice "<<endl;
}
}
return 0;
}
