#include <time.h>
#include "../include/stackspeedtest.h"

// #define DEBUG

int stackspeedtest(int max) {
    clock_t time_start = clock();
    Stack *s = stackCreate();

/*
    stackPush(s, 1);
    stackPush(s, 2);
    stackPush(s, 3);
    printf("pop = %d\n", stackPop(s));
    printf("pop = %d\n", stackPop(s));
    printf("pop = %d\n", stackPop(s));
*/

    for (int i = 1; i <= max; i++) {
        stackPush(s, i);
#ifdef DEBUG
        printf("stackPush(%d)\n", i);
#endif
    }

    printf("stackPush(%d) done.\n", max);
//  printf("stackSearch(1) ... %d\n", stackSearch(s, 1));
    printf("stackSearch(%d) ... %d\n", max, stackSearch(s, max));

    while (stackEmpty(s) == false) {

#ifdef DEBUG
        int size = stackSize(s);
        int top  = stackTop(s);
        int pop  = stackPop(s);
        printf("size = %d, top = %d, pop = %d\n", size, top, pop);
#else
        stackPop(s);
#endif

    }

    printf("stackPop() done.\n");
    if (stackEmpty(s) != 0) {
        printf("stackEmpty() ... %s\n", "true");
    } else {
        printf("stackEmpty() ... %s\n", "false");
    }

    printf("destroy stack.\n");
    stackDestroy(s);

    clock_t time_end = clock();
    printf("Execute time : %f [ms]\n\n", (double)(time_end - time_start)*1000/CLOCKS_PER_SEC);

    return 0;
}
