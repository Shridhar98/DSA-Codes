#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *createnode(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int BST(struct node *root)
{
    static struct node *prev = NULL;

    if (root == NULL)
        return 1;
    else
    {
        if (!BST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return BST(root->right);
    }
}
// recursive method for searching element
struct node *search(struct node *root, int key)
{

    if (root == NULL)
        return NULL;
    else
    {
        if (root->data == key)
            return root;
        else if (root->data > key)
            return search(root->left, key);
        else
            return search(root->right, key);
    }
}
// iterative method for searching element
struct node *searchiter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
            return root;
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}
void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("cannot insert element");
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createnode(key);
    if (prev->data < key)
    {
        prev->right = new;
    }
    else
    {
        prev->left = new;
    }
}

int main()
{
    struct node *p = createnode(9);
    struct node *p1 = createnode(4);
    struct node *p2 = createnode(11);
    struct node *p3 = createnode(3);
    struct node *p4 = createnode(5);
    struct node *p5 = createnode(10);
    struct node *p6 = createnode(12);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    //      9
    //     / \
     //   4   11
    //   / \ /  \
     // 3  5 10  12
    inorder(p);
    printf("%d Its a binary search tree\n",BST(p));
    struct node *n = searchiter(p,6);
    if(n!=NULL)
        printf("%d ,element found",n->data);
    else {
        printf("element not found");
    }
    insert(p, 1);
    printf("%d", p->left->left->left->data);

    return 0;
}