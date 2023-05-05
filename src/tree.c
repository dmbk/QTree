    
#include <stdio.h>

    
typedef struct tree_t         tree_t;
typedef struct tree_ops_t tree_ops_t;

typedef struct node_t         node_t;
typedef struct node_ops_t node_ops_t;

//This is the tree data structure that holds meta information about the tree that is populated
struct tree_t
{
    int num_of_nodes;
    node_t *root;
    tree_ops_t *ops; 
    int padding; 
    
}



struct tree_ops_t
{


}


struct node
{
    int num_of_children;


}

struct node_ops_t
{


}
	
