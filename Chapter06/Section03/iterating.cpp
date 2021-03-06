#include <iostream>
#include <iterator> // Only in C++17 add arg "-std=c++17" when compiling

int main()
{
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = std::size(scores); // To be used in case C++17 is suported
	//const int numStudents = sizeof(scores) / sizeof(scores[0]); // To be used in case C++17 is not supported
	//std::cout << "The number of students is: " << numStudents << "\n";
	int maxScore = 0; // Keeps track of largest score
	for (int student = 0; student < numStudents; student++)
		if (scores[student] > maxScore)
			maxScore = scores[student];
	
	std::cout << "The best score was " << maxScore << "\n";

	return 0;
}

