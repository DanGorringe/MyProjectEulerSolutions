//This is task 21 of ProjectEuler,Find the Σ of all the positive integers which cannot be written as the Σ of two abundant numbers

package main

import "fmt"

// Function to find proper divisors, returns list
func Divisors(input int) []int {
	var divisorList []int
	// Loop through all numbers less than the input
	// note than 1 counts as a proper divisor
	for i := 1; i < input; i++ {
		// If divisible add to the list of divisors
		if input%i == 0 {
			//fmt.Println(i,input)
			divisorList = append(divisorList, i)
		}
	}
	return divisorList
}
// Function to find if an integer is in a list, bool
func IntIn(target int, inputArray []int) bool {
	for _,x := range inputArray{
		if x == target {
			return true
		}
	}
	return false
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
	min := 12
	max := 28125

	// Method:
	// 1) Find all abundant numbers in range, put into an array
	// 2) Create array of Σ of any two abundant numbers
	// 3) Find Sum of abundant numbers in range array
	// 4) Find difference from Σ  of all numbers in range (making use of S_n = 0.5n(n+1))

	// Step 1:
	//fmt.Println("Finding all abundant numbers in range...")
	var abundantNumbers []int
	for i := min; i <= max; i++{
		if Sum(Divisors(i)) > i{
			abundantNumbers = append(abundantNumbers,i)
		}
	}

	// Step 2:
	//fmt.Println("Creating an array of all combinations of two abundant numbers...")
	var abundantNumbersTwo []int // list of all sums of two abundant numbers
	for _,x := range abundantNumbers{
		for _,y := range abundantNumbers{
			sum := x+y
			if sum <= max && !IntIn(sum,abundantNumbersTwo){
				abundantNumbersTwo = append(abundantNumbersTwo,sum)
			}
		}
	}

	// Step 3:
	//fmt.Println("Summing...")
	sumAbundentTwo := Sum(abundantNumbersTwo)
	//fmt.Println("The sum of all pairs of abundant numbers:",sumAbundentTwo)

	// Step 4:
	sumMax := (max*(max+1))/2
	//fmt.Println("The sum of all numbers:",sumMax)
	fmt.Println("Answer is:",sumMax-sumAbundentTwo)
}

// Dan Gorringe June 2018
// Completed
// Answer = 4179871
