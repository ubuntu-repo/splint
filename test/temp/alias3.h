/* Output from LCLint 2.6beta */
# include "bool.h"


# ifndef EXPOSED_TYPE_st
typedef struct {
    int a;
    int *b;
    } st;
# endif


# ifndef EXPOSED_TYPE_ut
typedef union {
    int a;
    st s;
    st *t;
    int **c;
    } ut;
# endif

extern st  gst;
extern ut  *gu;
extern int f (int  /* ia */[], st  /* s1 */, ut * /* u1 */);
extern void model (int  /* ia */[]);
extern void modst (st  /* s1 */);
extern void modu (ut * /* u */);