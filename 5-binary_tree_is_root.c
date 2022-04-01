#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if @node is a root
 *         0 if @node is not a root or is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int ret = 0;

	if (node == NULL)
		return (ret);

	if (node->parent == NULL)
		ret = 1;

	return (ret);
}
