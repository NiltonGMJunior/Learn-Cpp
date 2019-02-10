#include <utility>
#include "main.h"

void sortByGrade(Student *students, const int numStudents)
{
    for (int startIndex { 0 }; startIndex < numStudents - 1; ++startIndex)
    {
        int largestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numStudents; ++currentIndex)
            if (students[currentIndex].grade > students[largestIndex].grade)
                largestIndex = currentIndex;
        
        std::swap(students[startIndex], students[largestIndex]);
    }
}