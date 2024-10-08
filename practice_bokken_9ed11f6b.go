package main

import (
	"fmt"
)

func main() {
	s := []int{1, 2, 3}
	defer fmt.Println(s)

	s[0] = s[1] + s[2]
	fmt.Println(s)
}
