package main

import (
	"fmt"
)

func main() {
	i := 1
	defer fmt.Println(i)

	i = 0
	fmt.Println(i)
}
