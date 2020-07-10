package main

import (
	"fmt"
	"os"
	"path/filepath"
	"strconv"

	stackspeedtest "./stackspeedtest"
)

func main() {
	if len(os.Args) < 2 {
		printMsgAndExit(os.Args[0])
	}

	max, err := strconv.Atoi(os.Args[1])
	if err != nil {
		fmt.Printf("%s ... ParseInt() error.\n", os.Args[1])
		os.Exit(1)
	}

	stackspeedtest.Main(max)
}

func printMsgAndExit(arg0 string) {
	fmt.Printf("Usage: go run %s <max>", getFileNameWithoutExt(arg0)+".go")
	os.Exit(1)
}

func getFileNameWithoutExt(path string) string {
	return filepath.Base(path[:len(path)-len(filepath.Ext(path))])
}
