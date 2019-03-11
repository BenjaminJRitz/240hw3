#include "gradebook.h"

void GradeBook::Add(double grade){
    book.push_back(grade);
} // Ending bracket for Add method

double GradeBook::Get(size_t index) const {
    double ret;
    if (index > book.size()) {
        ret = book[index];
    } else {
        ret = NAN;
    } // ending bracket for if else
    return ret;
} // ending bracket for method Get

