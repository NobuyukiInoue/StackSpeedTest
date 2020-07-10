package stack

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

type Stack struct {
	Node   *ListNode
	Length int
}

func Constructor() *Stack {
	return &Stack{nil, 0}
}

func (this *Stack) Push(val int) {
	if this.Node == nil {
		this.Node = &ListNode{val, nil}
	} else {
		nextNode := *this.Node
		*this.Node = ListNode{val, &nextNode}
	}
	this.Length++
}

func (this *Stack) Pop() (int, error) {
	if this.Node == nil {
		return 0, fmt.Errorf("Stack is empty")
	}

	item := this.Node.Val
	if this.Node.Next != nil {
		*this.Node = *this.Node.Next
	} else {
		this.Node = nil
	}
	this.Length--

	return item, nil
}

func (this *Stack) Peek() (int, error) {
	if this.Node == nil {
		return 0, fmt.Errorf("Stack is empty")
	}

	return this.Node.Val, nil
}

func (this *Stack) Empty() bool {
	if this.Node == nil {
		return true
	}

	return false
}

func (this *Stack) Size() int {
	return (*this).Length
}

func (this *Stack) Search(val int) int {
	nodeTemp := this.Node
	for index := 1; nodeTemp != nil; index++ {
		if nodeTemp.Val == val {
			return index
		}
		nodeTemp = nodeTemp.Next
	}
	return -1
}
