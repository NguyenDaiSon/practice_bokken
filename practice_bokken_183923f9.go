package main

import (
	"fmt"
)

// Constants cannot be declared using the := syntax
const Pi = 3.14

func main() {
	fmt.Println(Pi)

	const Pi = 3.141
	fmt.Println(Pi)
}
