package stack

// import "fmt"

const SegmentMaxSize = 65536

type Stack struct {
	Segment []int
	Index   int
}

func Constructor() *Stack {
	return &Stack{make([]int, SegmentMaxSize), -1}
}

func (this *Stack) Push(x int) {
	this.Index++
	this.Segment[this.Index] = x
}

func (this *Stack) Pop() int {
	item := this.Segment[this.Index]
	this.Index--

	return item
}

func (this *Stack) Peek() int {
	if this.Index < 0 {
		return 0
	}

	return this.Segment[this.Index]
}

func (this *Stack) Empty() bool {
	return this.Index < 0
}

func (this *Stack) Size() int {
	return this.Index + 1
}

func (this *Stack) Search(val int) int {
	for i := 0; i < SegmentMaxSize; i++ {
		if this.Segment[i] == val {
			return i
		}
	}

	return -1
}
