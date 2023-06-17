/*
Bottom view of binary tree
*/


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> v;
    	if(root==NULL) return v;
    
    	int hor = 0;
    	int ver = 0;
    
    	queue<pair<Node*,pair<int,int>>> q;
    	q.push({root,{hor,ver}});
    	map<int,pair<int,int>> mymap;
    
    	while(!q.empty()) {
    
    		root = q.front().first;
    		hor = q.front().second.first;
    		ver = q.front().second.second;
    		q.pop();
    
    		if(mymap.find(hor)==mymap.end()) {
    			mymap[hor] = {root->data,ver};
    		}
    
    		else {
    			auto it = mymap[hor].second;
    			if(ver >= it) {
    				mymap[hor] = {root->data,ver};
    			}
    		}
    
    		if(root->left) {
    			q.push({root->left,{hor-1,ver+1}});
    		}
    		if(root->right) {
    			q.push({root->right,{hor+1,ver+1}});
    		}
    
    
    
    	}
    
    
    	for(auto it:mymap) {
    		v.push_back(it.second.first);
    	}
    
    	return v;
        }
};