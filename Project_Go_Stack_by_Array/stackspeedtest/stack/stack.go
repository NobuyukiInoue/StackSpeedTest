package stack

import "fmt"

type Stack struct {
	Nodes []int
}

func Constructor() *Stack {
	return &Stack{}
}

func (this *Stack) Push(x int) {
	this.Nodes = append(this.Nodes, x)
	this.Nodes[0], this.Nodes[len(this.Nodes)-1] = this.Nodes[len(this.Nodes)-1], this.Nodes[0]
}

func (this *Stack) Pop() (int, error) {
	if len(this.Nodes) == 0 {
		return 0, fmt.Errorf("Stack is empty")
	}

	item := this.Nodes[0]
	this.Nodes[0], this.Nodes[len(this.Nodes)-1] = this.Nodes[len(this.Nodes)-1], this.Nodes[0]
	this.Nodes = this.Nodes[:len(this.Nodes)-1]
	return item, nil
}

func (this *Stack) Peek() (int, error) {
	if len(this.Nodes) == 0 {
		return 0, fmt.Errorf("Stack is empty")
	}

	return this.Nodes[0], nil
}

func (this *Stack) Empty() bool {
	return len(this.Nodes) == 0
}

func (this *Stack) Size() int {
	return len(this.Nodes)
}

func (this *Stack) Search(val int) int {
	for i, v := range((*this).Nodes) {
		if v == val {
			return len((*this).Nodes) - i + 1
		}
	}
	return -1
}
