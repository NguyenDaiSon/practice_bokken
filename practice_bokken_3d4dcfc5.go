package main

import (
	"fmt"
)

func main() {
	for index, value := range []int{10, 11, 12, 13} {
		fmt.Printf("index: %d value: %d\n", index, value)
	}
}
