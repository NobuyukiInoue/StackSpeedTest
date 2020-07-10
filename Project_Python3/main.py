# -*- coding: utf-8 -*-

import os
import sys

""" import local liblarys """
from StackSpeedTest import StackSpeedTest

def main():
    argv = sys.argv
    argc = len(argv)

    if argc < 2:
        exit_msg(argv[0])

    if argv[1].isnumeric() == False:
        print("{0} is not numeric.".format(argv[1]))
        exit(1)

    max = int(argv[1])
    StackSpeedTest.main(max)


def exit_msg(argv0):
    print("Usage: python {0} [max]".format(argv0))
    exit(0)


if __name__ == "__main__":
    main()
