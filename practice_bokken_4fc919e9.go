package main

import (
	"fmt"
)

func main() {
	m := make(map[string]int)

	fmt.Println(m)

	if _, ok := m["0e27da6a"]; !ok {
		fmt.Println("Not found: key=0e27da6a")
	}

	m["0e27da6a"] = 100
	fmt.Println(m)

	if value, ok := m["0e27da6a"]; ok {
		fmt.Printf("Found: key=0e27da6a, value=%d\n", value)
	}

	delete(m, "0e27da6a")
	fmt.Println(m)
	if _, ok := m["0e27da6a"]; !ok {
		fmt.Println("Not found: key=0e27da6a")
	}
}
