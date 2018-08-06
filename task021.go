//This is task 21 of ProjectEuler, Σ ambicale numbers under 10000
package main

import "fmt"

// Function to find proper divisors, returns list
func Divisors(input int) []int {
	var divisorList []int
	// Loop through all numbers less than the input
	// note than 1 couonts as a proper divisor
	for i := 1; i < input; i++ {
		// If divisible add to the list of divisors
		if input%i == 0 {
			divisorList = append(divisorList, i)
		}
	}
	return divisorList
}

// Sum function, return the sum of a list as int
func Sum(input []int) int {
	currentSum := 0
	for _, x := range input {
		currentSum += x
	}
	return currentSum
}

// Main Function

func main() {
	var amicableNumbers []int
	// The value of the highest amicable number to sum to
	maxRange := 10000
	for a := 1; a < maxRange; a++ {
		// Amicable numbers definition
		// Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
		// If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.
		b := Sum(Divisors(a))
		if Sum(Divisors(b)) == a && b != a {
			amicableNumbers = append(amicableNumbers, a)
		}
	}
	fmt.Println("Answer is:",Sum(amicableNumbers))
}

// Dan Gorringe June 2018
// Completed
// Answer = 31626
