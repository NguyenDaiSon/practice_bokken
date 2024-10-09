package main

import (
	"fmt"
)

func main() {
	var nilSlice []int
	fmt.Printf("len=%d cap=%d nil=%t\n", len(nilSlice), cap(nilSlice), (nilSlice == nil))
}
