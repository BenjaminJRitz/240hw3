#include <iostream>

#include "gradebook.h"

GradeBook test;
GradeBook test2;
GradeBook test3;
GradeBook test4;
GradeBook test5;
GradeBook test6;
GradeBook test7;
GradeBook test8;
GradeBook test9;
GradeBook test10;
GradeBook test11;
const size_t size = 15;



int main(int argc, char* argv[]) {
    test.Add(15.0);
    test.Add(0.0);
    test.Add(47.9);

    test2.Add(100);
    test2.Add(1.34);
    test2.Add(15.53);
    test2.Add(36.45);
    test2.Add(25);

    test3.Add(25);
    test4.Add(25.0001);
    test5.Add(25);
    test6.Add(24.000000001);
    test7.Add(25.001);
    test8.Add(25.00001);

    test9.Add(100);
    test9.Add(50);
    test9.Add(100);

    test10.Add(100);
    test10.Add(50);
    test10.Add(75);

    


    size_t index1= 0;
    size_t index2= 2;
    size_t index3= 3;
    size_t index4= 4;
    size_t index5= -4;

    // TESTING ADD
    std::cout << test.Get(index1) << std::endl;
    std::cout << test.Get(index2) << std::endl;
    std::cout << test.Get(index3) << std::endl;
    std::cout << test.Get(index4) << std::endl;
    std::cout << test.Get(index5) << std::endl;

    GradeBook total1 = test.Add(test2);
    GradeBook total2 = test2.Add(test);

    for (int i = 0; i < ((int) (total1.GetSize())); ++i) {
        std::cout << total1.Get(i) << std::endl;
    }
    for (int i = 0; i < ((int) (total2.GetSize())); ++i) {
        std::cout << total2.Get(i) << std::endl;
    }

    std::cout << test3.Equals(test4) << std::endl;
    std::cout << test5.Equals(test6) << std::endl;
    std::cout << test4.Equals(test6) << std::endl;
    std::cout << test3.Equals(test5) << std::endl;
    std::cout << test3.Equals(test8) << std::endl;

    std::cout << test9.LessThan(test10) << std::endl;
    std::cout << test10.LessThan(test9) << std::endl;

    std::cout << test11.LessThan(test9) << std::endl;
    std::cout << test9.LessThan(test9) << std::endl;

    return 0;
}