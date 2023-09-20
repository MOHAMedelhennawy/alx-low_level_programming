#ifndef ATREE_H
#define ATREE_H
#include <stddef.h>

/*opaque types*/
typedef struct atree atree_t;
typedef struct atrav atrav_t;


/*user-defined itme Handling*/
typedef int (*cmp_f)(const void *p1, const void *p2);
typedef void *(*dup_f)(void *p);
typedef void (*rel_f)(void *p);

/*Andresson tree function */
atree_t *anew(cmp_f cmp, dup_f dup, rel_f rel);
void         adelete (atree_t *tree);
void         *afind (atree_t *tree);
int         ainsert (atree_t *tree, void *data);
int         aerase (atree_t *tree, void *data);
size_t      asize (atree_t *tree);

/* Treaversal functions */
atrav_t *atnew (void);
void        atdelete(atrav_t *trav);
void        *atfirst (atrav_t *trav, atree_t *tree);
void        *atlast (atrav_t *trav, atree_t *tree);
void        *atnext (atrav_t *trav);
void        *atprev (atrav_t *trav);
