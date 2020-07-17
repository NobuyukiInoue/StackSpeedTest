package solution

import (
	"fmt"
	"strconv"
	"time"

	stack "./stack"
)

func Main(max int) {
	var stk *stack.MyStack
	stk = stack.MyConstructor(65536)

	/* First time */
	testMain(stk, max)

	/* Second time */
	testMain(stk, max)
}

func testMain(stk *stack.MyStack, max int) {
	timeStart := time.Now()

	for i := 1; i <= max; i++ {
		stk.MyPush(i)
		//		fmt.Printf("stk.MyPush(%d)\n", i)
	}

	fmt.Printf("stk.MyPush(%d) done.\n", max)
	fmt.Printf("stk.MySearch(%d) ... %d\n", max, stk.MySearch(max))

	for stk.MyEmpty() == false {
		/*
			size := stk.MySize()
			peek := stk.MyPeek()
			pop := stk.MyPop()
			fmt.Printf("size = %d, peek = %d, pop = %d\n", size, peek, pop)
		*/
		stk.MyPop()
	}

	fmt.Printf("stk.MyPop() done.\n")
	fmt.Printf("stk.MyEmpty()   ... %s\n", strconv.FormatBool(stk.MyEmpty()))

	timeEnd := time.Now()

	fmt.Printf("Execute time : %.3f [ms]\n\n", timeEnd.Sub(timeStart).Seconds()*1000)
}
