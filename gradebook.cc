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

const GradeBook GradeBook::Add(const GradeBook& that) const {
    GradeBook newBook;
    // loop for adding the calling gradebooks grades to the new gradebook
    for (int i = 0; i < book.size(); ++i) {
        newBook.Add(book[i]);
    } // ending bracket for for loop
    // loop for adding the parameters grades to the new gradebook
    for (int i = 0; i < that.GetSize(); ++i) {
        newBook.Add(that.Get(i));
    } // ending bracket for for loop
    return newBook;
} // ending bracket for method Add (two books)

double GradeBook::GetGPA() const {
    double ret;
    double sum = 0;
    if(book.size == 0) {
        ret = NAN;
    } else {
        for (int i = 0; i < book.size; ++i) {
            sum += book[i];
        } // ending bracket for for loop
        ret = sum / book.size;
    } // ending bracket for if else
    return ret;
} // ending bracket for GetGPA

double GradeBook::GetMax() const {
    double ret = 0;
    if (book.size == 0) {
        ret = NAN;
    } else {
        for (int i = 0; i < book.size; ++i) {
            if (book[i] > ret) {
                ret = book[i];
            } // ending bracket for inner if
        } // ending bracket for for loop
    } // ending bracket for if else
    return ret;
} // ending bracket for method GetMax




