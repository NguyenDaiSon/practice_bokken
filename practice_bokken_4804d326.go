package main

import (
	"fmt"
	"runtime"
)

func main() {
	fmt.Printf("Go runs on: ")
	switch os := runtime.GOOS; os {
	case "drawin":
		fmt.Println("OS X.")
	case "linux":
		fmt.Println("Linux.")
	default:
		fmt.Printf("%s.\n", os)
	}
}
