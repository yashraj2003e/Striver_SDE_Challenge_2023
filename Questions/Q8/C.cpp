/*
Left view of Binary Tree
Done on - GeeksforGeeks
*/

vector<int> leftView(Node *root)
{
   // Your code here
   queue<pair<Node*,int>> q;
   int level = 0;
   vector<int> v;
   if(root==NULL) return v;
   q.push({root,level});
   while(!q.empty()) {
       
       root = q.front().first;
       level = q.front().second;
       q.pop();
       if(v.size()==level) {
           v.push_back(root->data);
       }
       if(root->left!=NULL) {
        q.push({root->left,level+1});
       }
       if(root->right!=NULL) {
        q.push({root->right,level+1});
       }
   }
   return v;
}
