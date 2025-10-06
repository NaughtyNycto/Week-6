#include <iostream>
using namespace std;

// Problem 1
//
// int productNum(int a, int b) {
//     return a * b;
// }
//
// int main() {
//     int a,b;
//
//     cout << "Enter 2 numbers: " << endl;
//     cin >> a >> b;
//
//     cout << productNum(a,b) << endl;
// }


// Problem 2
//
// double linAcc(double v1, double v2, double t) {
//     return (v2-v1)/t;
// }
//
// int main() {
//     double v1, v2, t;
//
//     cout << "Enter velocity 1, velocity 2 and time: " << endl;
//     cin >> v1 >> v2 >> t;
//
//     cout << linAcc(v1, v2, t) << endl;
// }


// Problem 3
//
// void fun(double radius) {
//     double PI = 3.14;
//
//     double circumference = 2 * PI * radius;
//     double area = PI * radius * radius;
//
//     cout << "Circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// }
//
// int main() {
//     double radius;
//
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;
//
//     fun(radius);
// }


// Problem 4
//
// void fun(double a, double b) {
//     double perimeter = 2 * a + b;
//     double area = a * b;
//
//     cout << "Perimeter: " << perimeter << endl;
//     cout << "Area: " << area << endl;
// }
//
// int main() {
//     double a, b;
//
//
//     fun(1);
// }


// Problem 5
//
// void swap(int &a, int &b) {
//     a = a + b;    // Step 1: a now contains sum of both numbers
//     b = a - b;    // Step 2: b gets original value of a
//     a = a - b;
// }
//
// int main () {
//     int a,b;
//
//     cout << "Enter two integers: " << endl;
//     cin >> a >> b;
//     cout << "Before swap: " << a << " " << b << endl;
//
//     swap(a, b);
//
//     cout << "After swap: " << a << " " << b << endl;
// }


// Problem 6
//
// int Factorial(int n = 1) {
//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * Factorial(n - 1);
// }
//
// int main() {
//     cout << "Factorial() = " << Factorial() << endl;
//     cout << "Factorial(5) = " << Factorial(5) << endl;
//     cout << "Factorial(1) = " << Factorial(1) << endl;
// }


// Problem 7
//
// int gcd(int a, int b) {
//     a = (a < 0) ? -a : a;
//     b = (b < 0) ? -b : b;
//
//     while (b != 0) {
//         int c = b;
//         b = a % b;
//         a = c;
//     }
//
//     return a;
// }
//
// int main() {
//     int a, b;
//
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;
//
//     int result = gcd(a, b);
//
//     cout << "GCD of " << a << " and " << b << " is: " << result << endl;
// }


// Problem 8
//
// void max(int a, int b, int c) {
//     if (a > b && a > c) {
//         cout << "Maximum: " << a << endl;
//     }
//     else if (b > a && b > c) {
//         cout << "Maximum: " << b << endl;
//     } else cout << "Maximum: " << c << endl;
// }
//
// void min(int a, int b, int c) {
//     if (a < b && a < c) {
//         cout << "Minimum: " << a << endl;
//     }
//     else if (b < a && b < c) {
//         cout << "Minimum: " << b << endl;
//     } else cout << "Minimum: " << c << endl;
// }
//
// int main() {
//     int a, b, c;
//     cout << "Enter 3 numbers: " << endl;
//     cin >> a >> b >> c;
//
//     max(a, b, c);
//     min(a, b, c);
// }


// Problem 9
//
// double sum(double a, double b) {
//     return a + b;
// }
//
// double subtract(double a, double b) {
//     return a - b;
// }
//
// double product(double a, double b) {
//     return a * b;
// }
//
// double division(double a, double b) {
//     if (b != 0) {
//         return a / b;
//     } else {
//         cout << "Error: Division by zero!" << endl;
//     }
// }
//
// int main() {
//     double num1, num2;
//
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;
//
//     cout << "Sum: " << sum(num1, num2) << endl;
//     cout << "Subtraction: " << subtract(num1, num2) << endl;
//     cout << "Product: " << product(num1, num2) << endl;
//     cout << "Division: " << division(num1, num2) << endl;
// }


// Problem 10
//
// int trig(int m) {
//     return (m * (m + 1) )/ 2;
// }
//
// int main() {
//     cout << "First 75 triangular numbers:" << endl;
//
//     for (int i = 1; i <= 75; i++) {
//         cout << trig(i) << "   ";
//
//         if (i % 5 == 0) {
//             cout << endl;
//         }
//     }
// }


// Problem 11
//
// void displayEven(int number) {
//     cout << "Even digits: ";
//
//     int posit = (number < 0) ? -number : number;
//
//     while (posit > 0) {
//         int digit = posit % 10;
//         if (digit % 2 == 0) {
//             cout << digit << " ";
//         }
//         posit = posit / 10;
//     }
// }
//
// int main() {
//     int num;
//
//     cout << "Enter an integer: ";
//     cin >> num;
//
//     displayEven(num);
// }


// Problem 12
//
// int cubeOfDigits(int num) {
//     int sum = 0;
//     while (num>0) {
//         int digit = (num%10)*(num%10)*(num%10);
//         sum += digit;
//         num = num/10;
//     }
//
//     return sum;
// }
//
// void isArmstrong(int sum, int num) {
//     if (sum == num) {
//         cout << "Armstrong number!" << endl;
//     } else cout << "Not Armstrong number!" << endl;
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//
//     int sum = cubeOfDigits(num);
//
//     isArmstrong(sum, num);
// }


// Problem 13
//
// int febDays(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 29;
//     } else {
//         return 28;
//     }
// }
//
// int main() {
//     cout << "Year\tDays in February" << endl;
//     cout << "---------------------" << endl;
//
//     for (int year = 1985; year >= 1983; year--) {
//         cout << year << "\t" << febDays(year) << endl;
//     }
// }


// Problem 15
//
// void printASCII(char ch1, char ch2, int numberPerLine) {
//     int count = 0;
//
//     for (char ch = ch1; ch <= ch2; ch++) {
//         cout << ch << " ";
//         count++;
//
//         if (count % numberPerLine == 0) {
//             cout << endl;
//         }
//     }
//
//     if (count % numberPerLine != 0) {
//         cout << endl;
//     }
// }
//
// int main() {
//     cout << "ASCII values from 'a' to 'm': " << endl;
//     printASCII('a', 'm', 6);
//
//     return 0;
// }


// Problem 16
//
// int reverseNumber(int num) {
//     int reversed = 0;
//
//     while (num != 0) {
//         reversed = reversed * 10 + (num % 10);
//         num = num / 10;
//     }
//
//     return reversed;
// }
//
// bool isPalindrome(int num) {
//     return num == reverseNumber(num);
// }
//
// bool isEven(int num) {
//     return num % 2 == 0;
// }
//
// int main() {
//     int count = 0;
//     int number = 2;
//
//     cout << "First 50 even palindrome numbers:" << endl;
//
//     while (count < 50) {
//         if (isEven(number) && isPalindrome(number)) {
//             cout << number << "   ";
//             count++;
//
//             if (count % 5 == 0) {
//                 cout << endl;
//             }
//         }
//         number++;
//     }
// }
