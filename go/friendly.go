package main

import "fmt"
import "os"
import "strconv"

func sumDevidors(victim uint64) (sum uint64) {
	sum = 1
	var i uint64
	for i=2; i*i < victim; i++ {
		if victim % i == 0 {
			sum += i + (victim / i)
		}
	}
	return
}

func main() {
	top, err := strconv.ParseUint(os.Args[1], 10, 64)
	if err != nil { panic(err) }
	var candidate, mate uint64
	for candidate = 1; candidate < top; candidate++ {
		mate = sumDevidors(candidate)
		if mate <= candidate { continue }
		if sumDevidors(mate) == candidate {
			fmt.Printf("%d,%d\n", candidate, mate)
		}
	}
}

