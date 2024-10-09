package main

import (
	"fmt"
)

func main() {
	pow := make([]int, 11)

	for index := range pow {
		pow[index] = 1 << uint(index)
	}

	for _, value := range pow {
		fmt.Println(value)
	}
}
