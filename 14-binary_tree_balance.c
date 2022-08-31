#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    	int height_l, height_r;
     /*test dev mous1*/
    printf( "1001");
 /*test dev mous2*/
    printf( "001");
	if (!tree)
		return (0);

	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;
    /*test devé mous3*/
    printf( "01");
	return (height_l - height_r);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_l = 0;
	size_t height_r = 0;
        /*test dev mous4*/
            printf( "011");

    /*test dev mous5*/
        printf( "0101");
	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
        /*test dev mous5*/
            printf( "01011");


	return (height_l > height_r ? height_l : height_r);
}