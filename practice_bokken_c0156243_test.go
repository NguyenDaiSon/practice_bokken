package test_hello

import (
	"fmt"
	"testing"
)

// go test -bench=BenchmarkHello -benchtime 4s -count 4 -benchmem -cpu 4
func BenchmarkHello(b *testing.B) {
	for i := 0; i < b.N; i++ {
		_ = fmt.Sprintf("Hello, Benchmark")
	}
}
