package stack

import (
	"fmt"
	"os"
)

type MyStack struct {
	Queue   []Stack
	Index   int
	MaxSize int
}

func MyConstructor(max int) *MyStack {
	this := MyStack{make([]Stack, 1), 0, max}
	this.Queue[0] = Stack{make([]int, SegmentMaxSize), -1}
	return &this
}

func (this *MyStack) MyPush(x int) {
	if this.Queue[this.Index].Index < this.MaxSize-1 {
		this.Queue[this.Index].Push(x)
	} else {
		if this.Index > this.MaxSize-1 {
			fmt.Printf("MyStack Size over %d\n", this.MaxSize)
			os.Exit(-1)
		}
		this.Queue = append(this.Queue, Stack{make([]int, SegmentMaxSize), -1})
		this.Index++
		this.Queue[this.Index].Push(x)
	}
}

func (this *MyStack) MyPop() int {
	if this.Queue[this.Index].Index < 0 {
		this.Index--
	}

	return this.Queue[this.Index].Pop()
}

func (this *MyStack) MyPeek() int {
	if this.Queue[this.Index].Index < 0 {
		return this.Queue[this.Index-1].Peek()
	}

	return this.Queue[this.Index].Peek()
}

func (this *MyStack) MyEmpty() bool {
	return this.Index == 0 && this.Queue[this.Index].Empty()
}

func (this *MyStack) MySize() int {
	return (this.Index * SegmentMaxSize) + this.Queue[this.Index].Size()
}

func (this *MyStack) MySearch(val int) int {
	for i := 0; i <= this.Index; i++ {
		res := this.Queue[i].Search(val)
		if res != -1 {
			return (i * SegmentMaxSize) + res
		}
	}

	return -1
}
