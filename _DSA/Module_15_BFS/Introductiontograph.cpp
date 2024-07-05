/*
Graph:-

A graph G is consist of set of V of vertices(nodes ) and set of E of edges we write.

                              G(V,E);

        /*-------------------------------------------------------------*/

/*
Graph Representation:-
---------------------

Graph is mathematical structure and find its application in many areas of interest in which problem  need to be solved using computer
thus mathematical structure must be reprsent as some kind of datat structure.


For reprsenting them there are more than one method:-

                            1.Adjacency Matrix;
                            2.Adjacency List;
                            3.Compact List;

Graph Traversal:-
---------------
Graph Traversal is technique used for searching a vertex in a graph.

The graph traversal is also used to decide the order of vertices to be visit in the search process.

A graph traversal find the edgers to be used in the search process without creating loops.


Two graph traversal method are:-

i)Depth first search;(It uses stack);
ii)Breadth first search (It uses queue);


DFS and BFS produces the spanning Tree;

About Spanning Tree:-
--------------------

A spanning tree is a subset of Graph G,which has all the vertices covered with minimum possible number of edges.
Hence,a spanning tree does not have cycle and it cannot be connected.

A disconnected graph does not have any spanning tree,as it connected be spanned to all its vertices.

Spanning tree has n  vertices and n-1 edges.


Minimum Spanning Tree(MST):-
--------------------------

In a weighted graph ,a minimum spanning tree is a spanning tree that has minimum weight than all other spanning trees of same graph.

In real world situation the weight can be measured as distance ,congestion,traffic load or nay arbitrary value denoted to the edges.


Minimum Spanning Tree Algorithm:-
--------------------------------

Kruskal's Algorithm;
Prims'S Algorithm;

*/