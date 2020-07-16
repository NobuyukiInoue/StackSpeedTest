#include <time.h>
#include "../include/stackspeedtest.h"

// #define DEBUG

int stackspeedtest(int max) {
    Stack *s = stackCreate(65536);

    stackspeedtest2(s, max);
    stackspeedtest2(s, max);

    stackDestroy(s);
}

int stackspeedtest2(Stack *s, int max) {
    clock_t time_start = clock();

    for (int i = 1; i <= max; i++) {
        stackPush(s, i);

#ifdef DEBUG
        printf("stackPush(%d)\n", i);
#endif

    }

    printf("stackPush(%d) done.\n", max);
//  printf("stackSearch_from_front(%d) ... %d\n", max, stackSearch_from_front(s, max));
    printf("stackSearch_from_tail(%d) ... %d\n", 1, stackSearch_from_tail(s, 1));

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
    printf("stackEmpty() ... %s\n", stackEmpty(s) != 0 ? "true": "false");
    printf("destroy stack.\n");

    clock_t time_end = clock();
    printf("Execute time : %f [ms]\n\n", (double)(time_end - time_start)*1000/CLOCKS_PER_SEC);

    return 0;
}
