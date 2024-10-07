package main

import (
	"fmt"
)

const (
	X         = (1<<32)/2 - 1
	Y float64 = 1 << 64
)

func main() {
	fmt.Println(X)
	fmt.Println(Y)
}
