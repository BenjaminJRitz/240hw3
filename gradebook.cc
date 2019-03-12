#include "gradebook.h"

void GradeBook::Add(double grade){
    book.push_back(grade);
} // Ending bracket for Add method

double GradeBook::Get(size_t index) const {
    double ret;
    if (index < (book.size())) {
        ret = book[index];
    } else {
        ret = NAN;
    } // ending bracket for if else
    return ret;
} // ending bracket for method Get

const GradeBook GradeBook::Add(const GradeBook& that) const {
    GradeBook newBook;
    // loop for adding the calling gradebooks grades to the new gradebook
    for (int i = 0; i < ((int)(book.size())); ++i) {
        newBook.Add(book[i]);
    } // ending bracket for for loop
    // loop for adding the parameters grades to the new gradebook
    for (int i = 0; i < ((int)(that.GetSize())); ++i) {
        newBook.Add(that.Get(i));
    } // ending bracket for for loop
    return newBook;
} // ending bracket for method Add (two books)

double GradeBook::GetGPA() const {
    double ret;
    double sum = 0;
<<<<<<< HEAD
    if(((int) (book.size())) == 0) {
        ret = NAN;
    } else {
        for (int i = 0; i < ((int) (book.size())); ++i) {
            sum += book[i];
        } // ending bracket for for loop
        ret = sum / ((int) (book.size()));
=======
    if(book.size == 0) {
        ret = NAN;
    } else {
        for (int i = 0; i < book.size; ++i) {
            sum += book[i];
        } // ending bracket for for loop
        ret = sum / book.size;
>>>>>>> c981213390c5b9d4229a365d081b1f7a0fe282af
    } // ending bracket for if else
    return ret;
} // ending bracket for GetGPA

double GradeBook::GetMax() const {
<<<<<<< HEAD
    double ret = 0;
    if (((int) (book.size())) == 0) {
        ret = NAN;
    } else {
        for (int i = 0; i < ((int) (book.size())); ++i) {
            if (book[i] > ret) {
                ret = book[i];
            } // ending bracket for inner if
        } // ending bracket for for loop
    } // ending bracket for if else
    return ret;
} // ending bracket for method GetMax

const size_t GradeBook::GetSize() const {
    return book.size();
} // ending bracket for method GetSize

bool GradeBook::Equals(const GradeBook& that) const {
    double callingAve = 0;
    double paramAve = 0;
    bool ret;
=======
    
}

>>>>>>> c981213390c5b9d4229a365d081b1f7a0fe282af

    if (((int) (book.size())) > 0) {
        for (int i = 0; i < ((int) (book.size())); ++i) {
            callingAve += book[i];
        }
        callingAve /= ((int) (book.size()));
    } else {
        callingAve = -INFINITY;
    } // ending bracket of callingAve if/else

    if (that.GetGPA() == NAN) {
        paramAve = -INFINITY;
    } else {
        paramAve = that.GetGPA();
    } // ending bracket of parameter average if/else

    if ( ((callingAve - paramAve) > (0.00001)) || 
        ((callingAve - paramAve) < (-0.00001))) {
            ret = false;
    } else {
        ret = true;
    } // ending bracket for outside param if/else
    return ret;
} // ending bracket for method Equals

bool GradeBook::LessThan(const GradeBook& that) const {
    double callingAve = 0;
    double paramAve = 0;
    double callingMax = 0;
    double paramMax = 0;
    bool ret;

    if (((int) (book.size())) > 0) {
        for (int i = 0; i < ((int) (book.size())); ++i) {
            callingAve += book[i];
        }
        callingAve /= ((int) (book.size()));
    } else {
        callingAve = -INFINITY;
    } // ending bracket of callingAve if/else

    if (that.GetGPA() == NAN) {
        paramAve = -INFINITY;
    } else {
        paramAve = that.GetGPA();
    } // ending bracket of parameter average if/else

    if ( ((callingAve - paramAve) > (0.00001)) || 
       ((callingAve - paramAve) < (-0.00001))) {
             if (callingAve < paramAve) {
            ret = true;
        } else {
            ret = false;
        } // ending bracket for if/else
    } else {
         paramMax = that.GetMax();
           for (int i = 0; i < ((int) (book.size())); ++i) {
            if (book[i] > callingMax) {
                callingMax = book[i];
            } // ending bracket for inner if
        } // ending bracket for for loop
        if (callingMax < paramMax) {
            ret = true;
        } else {
            ret = false;
        } // ending bracket for inner if/else
    } // ending bracket for outer if/else
    return ret;
} // ending bracket for method LessThan