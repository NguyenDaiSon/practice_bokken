package main

import (
	"fmt"
)

func swap(first, second string) (string, string) {
	return second, first
}

func main() {
	fmt.Println(swap("Hello", "World"))
}
