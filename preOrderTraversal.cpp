
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};

void preOrderTraversal(Node* root)
{
    if(root==NULL)
    {
        return;
    }   
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

Node* createTree()
{
    cout<<"Enter the value."<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    Node* root=new Node(data);
    root->left=createTree();
    root->right=createTree();
    return root;
}
int main()
{
    Node* root=createTree();
    cout<<root->data;
}