# -*- coding: utf-8 -*-

import time

def main(max):
    time0 = time.time()

    stack = []

    for i in range(max):
        stack.append(i)

    print("stack.push({0:d}) done.".format(max))
    print("stack.index(0) ... {0:d}".format(stack.index(0)))

    while len(stack) > 0:
        """
        size = len(stack)
        peek = stack[-1]
        pop = stack.pop()
        print("size = {0:d}, peek = {1:d}, pop = {2:d}".format(size, peek, pop))
        """
        stack.pop()

    print("stack.pop({0:d}) done.".format(0))
    print("len(stack) == {0:d}".format(len(stack)))

    time1 = time.time()

    print("Execute time : {0:f} [ms]\n".format((time1 - time0)*1000))

def exit_msg(argv0):
    print("Usage: python {0} [target number]".format(argv0))
    exit(0)

if __name__ == "__main__":
    main()
