//This is task 21 of ProjectEuler, Sort list of names into alphabetical orde,. Then work out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

package main

import (
  "io/ioutil";
	"sort";
	"fmt";
	"strings"
  )


// Sum function, return the sum of alphabetical values of each letter in a string
// e.g. COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53
func Sum(input string) int {
	currentSum := 0
	for _, x := range input {
		// Check if in range (not a space) ((A-Z))
		if 65 <= x && x <= 90 {
			// Remove ASCII (A-1)
			currentSum += int(x) - 64
		} else{
			fmt.Println(input,x)
		}
	}
	return currentSum
}


// Main Function

func main() {
	nameScores := 0
	contents,_ := ioutil.ReadFile("task022Names.txt")
	names := strings.Split(string(contents), "\n")
	sort.Strings(names)
	for position,name := range names {
		nameScores += position*Sum(name)
		//fmt.Println("Current name is: ",name,"and current position is",position,"adding",position*Sum(name),"to the score")
	}
	fmt.Println("Answer is:",nameScores)
}

// Dan Gorringe June 2018
// Completed
// Answer = 871198282
