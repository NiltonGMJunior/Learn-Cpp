#include <iostream>
#include <iterator> // for std::size
 
int main()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = std::size(scores); // requires C++17
//  const int numStudents = sizeof(scores) / sizeof(scores[0]); // use this instead if not C++17 capable
 
    int maxScoreIndex = 0; // keep track of our largest score index position

    // now look for a larger score
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxScoreIndex])
            maxScoreIndex = student;
            
    std::cout << "The best score was " << scores[maxScoreIndex] << '\n';
 
    return 0;
}