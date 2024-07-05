/*Definig Tree*/
/*
Tree is a collection where one of the node is root node and rest of node are divided into disjoint subset and each subset is tree or subtree.

Now we will study a data structure tree which represent the hierarchical data structure,it is very useful for information retrieval and searching
in tree is also fast and O(log2n);

A Tree T is define as finite set of one or more nodes such that

i)There is special node called root r
ii)The remaining nodes are divided into n>=0 ,disjoint  set T1,T2,T3......Tn where each os these set is a tree.T1,T2,T3 is called subtrees
the subtree of the root.


Properties

i)There is one and only one pathe betwen every pair of vertices in a tree.

ii)A tree with n vertice has exactly (n-1) edges

iii) A graph is a tree if and only if it is minimally connected

iv)Any connected graph with n vertices and (n-1) edge is a tree


Basic Terminolgy in tree

i)Root:- The first node where the tree originates is called as root nodes.

ii)Edge:-The connecting link b/w any two node is called as an edge.

iii)Parent:-The node which has branch from it to any other node is called as parent node.

iv)Child:-The node which is a descendent of some node is called as child node.

v)Sibling:- Nodes which belong to same parent are called as sibling.

vi)Degree:-Degree of node is total number of children of that node.

vii)Internal Nodes:- Internal nodes are called as non terminal nodes.

viii)External Nodes:-Leaf nodes are external nodes.

ix)Level:-In a tree,each step from top to bottom is called as level of a tree.

x)Height:-Height of a tree is the height of root node.

xi)Depth:Depth of a tree is the total no of edges from root node to a leaf node in longest path.

xii)Subtree:- In a tree each child from a node form a subtree recursively.

xiii)Forest:- A forest is a set of disjoint trees.
xiv) Similar and couples.:- The trees are called similar if they have similar data structure als said to be copies if they have data at the corresponding nodes

xv)Leaf node:-Leaf nodes are also called external nodes or terminal nodes.

xvi)Descendent :All set of node which can be thought a particula node or under that node.
*/