class Solution{
public:
long long int sum=0;
bool flag = false;
Node* node1 = NULL;

void findn(Node* root, int t)
{
    if(root)
    {
        if(flag) return;
        if(root->data == t)
        {
            node1 = root;
            flag = true;
        }
        findn(root->left, t);
        findn(root->right, t);
    }
}

void ff(Node* node, int i, int j)
{
    if(!node) return;
    if(i>0 && j==0)  sum+=node->data;
    
    ff(node->left, i+1, j-1);
    ff(node->right, i+1, j+1);
}

    long long int verticallyDownBST(Node *root,int target){
        // Code here
        flag = false;
        node1 = NULL;
        findn(root, target);
        
        if(!node1) return -1;
        sum=0;
        
        // cout<<node1->data<<"\n";
        ff(node1,0,0);
        return sum;
    }
};
