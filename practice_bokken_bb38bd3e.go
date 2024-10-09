package main

import (
	"fmt"
)

func incrementByOne(initValue int) func() int {
	counter := initValue
	return func() int {
		counter++
		return counter
	}
}

func main() {
	{
		counter := incrementByOne(0)
		fmt.Println(counter()) // 1
		fmt.Println(counter()) // 2
	}

	{
		counter := incrementByOne(100)
		fmt.Println(counter()) // 101
		fmt.Println(counter()) // 102
	}
}
