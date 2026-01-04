#include <iostream>
#include <cmath>
using namespace std;
class Node{
    public:
    Node* left;
    Node* right;
    int data;
    Node(int _data){
        data = _data;
        left=right=NULL;
    }
};
class BinaryTree{
    Node* root;
    public:
    BinaryTree(){
        root = NULL;
    }
    void insert(int data){
    Node* tmp = new Node(data);
    Node** r = &root;
    while(*r != NULL){
        if(tmp->data < (*r)->data){
            r = &((*r)->left);
        } else {
            r = &((*r)->right);
        }
    }
    *r = tmp;
    }
    int searchByData(int data){
        Node *r = root;
        while(r){
            if(r->data == data){
                cout<<"Found";
                return 1;
            }
            if(data< r->data) r = r->left;
            else r = r->right;
        }
        cout<< "Not found";
        return 0;
    }
    void deleteNode(int data){
        Node * r =searchByDataPrivate(data);
         Node * p = parent(r);
        if(r == root){
            delete r;
            root = NULL;
            return;
        }
        if(isLeaf(r)){
            if(r == p->left )   p->left = NULL;
            else p->right = NULL;
            delete r;
        }
        else if(hasOneChild(r)){
            Node * rChild = r->left?r->left:r->right;
            if(r == p->left )   p->left = rChild;
            else p->right = rChild;
            delete r;
        }
        else{
            Node * replacedNode = r->left;
            while(replacedNode->right){
                replacedNode = replacedNode->right;
            }
            Node* parentOfReplacedNode = parent(replacedNode);
            r->data = replacedNode->data;
            if(replacedNode == parentOfReplacedNode->left) parentOfReplacedNode->left = NULL;
            else parentOfReplacedNode->right = NULL;
            delete replacedNode;
        }

    }
    int findMax(){
        Node * tmp = root;
        while (tmp->right){
            tmp = tmp->right;
        }
        return tmp->data;
    }
    int findMin(){
        Node * tmp = root;
        while (tmp->left){
            tmp = tmp->left;
        }
        return tmp->data;
    }
    int heightOfNode(int id){
        Node* n = searchByDataPrivate(id);
        if(!n) {return -1;}
        return heightOfNodePrivate(n);
    }
    int depthOfNode(int id){
        Node* n = searchByDataPrivate(id);
        if(!n) return -1;
        Node* tmp = root;
        int count=0;
        while(tmp!=n){
            if(tmp->data>n->data)
                tmp= tmp->left;
            else 
                tmp = tmp->right;
            count++;
        }
        return count;
    }
    void print_inorder(){
        inorder(root);
    }   
    void print_postorder(){
        postorder(root);
    } 
    void print_preorder(){
        preorder(root);
    }     
    private:
    void inorder(Node* r){
        if(r == NULL)
            return;
        inorder(r->left);
        cout<<r->data<<endl;
        inorder(r->right);
    }
    void preorder(Node* r){
        if(r == NULL)
            return;
        cout<<r->data<<endl;
        preorder(r->left);
        preorder(r->right);
    }
    void postorder(Node* r){
        if(r == NULL)
            return;
        postorder(r->left);
        postorder(r->right);
        cout<<r->data<<endl;
    }
    Node * searchByDataPrivate(int data){
        Node *r = root;
        while(r){
            if(r->data == data){
                return r;
            }
            if(data< r->data) r = r->left;
            else r = r->right;
        }
        return NULL;
    }
    int isLeaf(Node * r){
        if( r->left ==NULL && r->right ==NULL)
            return 1;
        return 0;
    }
    Node * parent(Node * r){
        Node* parent =root;
        if(r == root|| r==NULL){
            return NULL;
        }
        while(parent){
              if(r == parent->left || r == parent->right){
                return parent;
            }
            if( r->data < parent->data) parent = parent->left;
            else parent = parent->right;
        }
      return NULL;
    }
    int hasOneChild(Node *r){
        if (!r) return 0;
        return (r->left == NULL) != (r->right == NULL); 
    }
    int heightOfNodePrivate(Node* t){
    if (t == NULL)
        return -1; 
    if (isLeaf(t))
        return 0; 
    return 1 + max(heightOfNodePrivate(t->left), heightOfNodePrivate(t->right));
}
        // Node* findMaxP(){
    //     Node * tmp = root;
    //     while (tmp->right){
    //         tmp = tmp->right;
    //     }
    //     return tmp;
    // }
    // Node* findMinP(){
    //     Node * tmp = root;
    //     while (tmp->left){
    //         tmp = tmp->left;
    //     }
    //     return tmp;
    // }
};
int main(){
    BinaryTree t1;
    t1.insert(40);
    t1.insert(30);
    t1.insert(50);
    t1.insert(20);
    t1.insert(35);
    t1.insert(10);
    t1.insert(25);
    t1.insert(28);
    // t1.print_inorder();
    // cout<<t1.findMax();
    // cout<<t1.findMin();
    cout<<t1.depthOfNode(30)<<endl;
    cout<<t1.heightOfNode(30)<<endl;
}  