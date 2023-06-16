/*
Top View of a binary tree
*/


class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> v;
        if(root==NULL) return v;
        
        map<int,int> mymap;
        queue<pair<Node*,int>> q;
        
        int level = 0;
        
        q.push({root,level});
        
        while(!q.empty()) {
            root = q.front().first;
            level = q.front().second;
            
            if(mymap.find(level)==mymap.end())
                mymap[level] = root->data;
            q.pop();
            if(root->left) {
                q.push({root->left,level-1});
            }
            if(root->right) {
                q.push({root->right,level+1});
            }
        }
        
        for(auto it:mymap) {
            v.push_back(it.second);
        }
        return v;
        
        
        
        
    }

};
