#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* temp,string& s){
    if(!temp){
        s.push_back('*');
        return;
    }
    string newStr=to_string(temp->val)+",";
    s.append(newStr);
    preorder(temp->left,s);
    preorder(temp->right,s);
}

string serialize(TreeNode* root) {
    string s="";
    preorder(root,s);
    return s;
}

TreeNode* decode(string& data){
    if(data.size()==0){
        return NULL;
    }
    if(data[0]=='*'){
        data=data.substr(1);
        return NULL;
    }
    int pos=0;
    string no="";
    while(data[pos]!=','){
        no+=data[pos];
        pos++;
    }
    TreeNode* temp=new TreeNode(stoi(no));
    data=data.substr(pos+1);
    temp->left=decode(data);
    temp->right=decode(data);
    return temp;
}

TreeNode* deserialize(string data) {
    if(data.size()<1){
        return NULL;
    }
    return decode(data);
}

void printPreorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(5);
    cout<<"Original Tree: ";
    printPreorder(root);
    string ans=serialize(root);
    cout<<"\nSerialized Tree: "<<ans<<endl;
    cout<<"Deserialized Tree: ";
    TreeNode* temp=deserialize(ans);
    printPreorder(temp);
}
