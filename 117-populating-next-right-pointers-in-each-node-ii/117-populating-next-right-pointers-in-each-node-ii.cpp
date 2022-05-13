/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)
            return root;
        
        queue<Node*> q{};
        q.push(root);
        
        while(!q.empty()){
            int levelSize=q.size();
            Node *dummyNode=new Node();
            
            while(levelSize--){
                Node* cnode=q.front();
                q.pop();
                
                dummyNode->next=cnode;
                dummyNode=cnode;

                if(cnode->left!=nullptr)
                    q.push(cnode->left);

                if(cnode->right!=nullptr)
                    q.push(cnode->right);
            }
        }
        
        return root;
    }
};