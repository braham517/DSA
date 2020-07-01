void postorder(Node*root,string &s){
    if(root==NULL)
    {
        s+='$';
        return;
    }
    postorder(root->left,s);
    postorder(root->right,s);
    s+=to_string(root->data);
}
void inorder(Node*root,string &s){
    if(root==NULL){
        s+='$';
        return;
    }
    inorder(root->left,s);
    s+=to_string(root->data);
    inorder(root->right,s);
}

bool isSubTree(Node*T,Node*S){
    string Tin="",Tpost="",Sin="",Spost="";
    postorder(T,Tpost);
    postorder(S,Spost);
    inorder(T,Tin);
    inorder(S,Sin);
    if(Tpost.find(Spost)!=string::npos&&Tin.find(Sin)!=string::npos)
    return true;
    return false;

}
