package solution

import (
	"fmt"
	"strconv"
	"time"

	stack "./stack"
)

func Main(max int) {
	var stk *stack.Stack

	timeStart := time.Now()

	stk = stack.Constructor()

	for i := 0; i < max; i++ {
		stk.Push(i)
//		fmt.Printf("stk.Push(%d)\n", i)
	}

	fmt.Printf("stk.Push(%d) done.\n", max)
	fmt.Printf("stk.Search(%d) ... %d\n", 0, stk.Search(0))

	for stk.Empty() == false {
/*
		size    := stk.Size()
		peek, _ := stk.Peek()
		pop , _ := stk.Pop()
		fmt.Printf("size = %d, peek = %d, pop = %d\n", size, peek, pop)
*/
		stk.Pop()

	}

	fmt.Printf("stk.Pop(%d) done.\n", 0)
	fmt.Printf("stk.Empty()   ... %s\n", strconv.FormatBool(stk.Empty()))

	timeEnd := time.Now()

	fmt.Printf("Execute time : %.3f [ms]\n\n", timeEnd.Sub(timeStart).Seconds()*1000)
}
