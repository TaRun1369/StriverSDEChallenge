// #include <bits/stdc++.h> 
// /***************************************************************************

// 	Class for graph node is as follows:

// 	class graphNode
// 	{
// 		public:
//     		int data;
//     	vector<graphNode *> neighbours;
//     	graphNode()
//     	{
//         	data = 0;
//         	neighbours = vector<graphNode *>();
//     	}

//     	graphNode(int val)
//     	{
//         	data = val;
//         	neighbours = vector<graphNode *>();
//     	}

//     	graphNode(int val, vector<graphNode *> neighbours)
//     	{
//         	data = val;
//         	this->neighbours = neighbours;
//     	}
// 	};

// ******************************************************************************/

// graphNode * dfs(graphNode *root,unordered_map<graphNode *,graphNode *>mp){
// 	vector<graphNode *>neigh;
// 	graphNode *clone = new graphNode(root->data);
// 	mp[root] = clone;
// 	for(auto it : root->neighbours){
// 		if(mp.find(it) != mp.end()){
// 			neigh.push_back(mp[it]);
// 		}
// 		else{
// 			neigh.push_back(dfs(it,mp));

// 		}
		
// 	}
// 	clone->neighbours = neigh;
// 	return clone;
// }

// graphNode *cloneGraph(graphNode *node)
// {
// 	// vector<int> otn;
// 	unordered_map<graphNode *,graphNode *> mp;
// 	if(node->neighbours.size() == 0){
// 		graphNode * clone = new graphNode (node->data);
// 		return clone;
// 	}

// 	return dfs(node,mp);


//     // Write your code here.
// }


graphNode* rec(graphNode* node,map<graphNode*,graphNode*>&mp)
{
	graphNode* newNode= new graphNode(node->data);
	mp[node]=newNode;
	vector<graphNode*>v;
	for (auto it: node->neighbours)
	{
		if (mp.find(it)!=mp.end())
		{
			v.push_back(mp[it]);
		}
		else v.push_back(rec(it,mp));
	}
	newNode->neighbours=v;
	return newNode;
	
}
graphNode *cloneGraph(graphNode *node)
{
    map<graphNode*,graphNode*>mp;
	return rec(node,mp);
}