# CPP-Module-00
Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuf


# General rules

### Compiling

 - Compile your code with c++ and the flags -Wall -Wextra -Werror
 - Your code should still compile if you add the flag -std=c++98

### Formatting and naming conventions

 - The exercise directories will be named this way: ex00, ex01, ... , exn
 - Write class names in UpperCamelCase format. Files containing class code will always be named according to the class name. For instance:
  ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you
  have a header file containing the definition of a class "BrickWall" standing for a
  brick wall, its name will be BrickWall.hpp.
 - Unless specified otherwise, every output messages must be ended by a new-line
character and displayed to the standard output.
- Goodbye Norminette! No coding style is enforced in the C++ modules. You can
follow your favorite one.

### Allowed/Forbidden

You are not coding in C anymore. Time to C++! Therefore:
- You are allowed to use almost everything from the standard library. Thus, instead
of sticking to what you already know, it would be smart to use as much as possible
the C++-ish versions of the C functions you are used to.
- However, you can’t use any other external library. It means C++11 (and derived
forms) and Boost libraries are forbidden. The following functions are forbidden
too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and
that’s it.
- Note that unless explicitly stated otherwise, the using namespace <ns_name> and
friend keywords are forbidden. Otherwise, your grade will be -42.
- You are allowed to use the STL in Module 08 only. That means: no
Containers (vector/list/map/and so forth) and no Algorithms (anything that
requires to include the <algorithm> header) until then. Otherwise, your grade will
be -42.

### A few design requirements
- Memory leakage occurs in C++ too. When you allocate memory (by using the new
keyword), you must avoid memory leaks.
- From Module 02 to Module 08, your classes must be designed in the Orthodox
Canonical Form, except when explicitely stated otherwise.
- Any function implementation put in a header file (except for function templates)
means 0 to the exercise.
- You should be able to use each of your headers independently from others. Thus,
they must include all the dependencies they need. However, you must avoid the
problem of double inclusion by adding include guards. Otherwise, your grade will
be 0.

# Usefull String Methods

 Here's a short list of some important methods for working with strings in C++ along with a brief description of each:

- ```length()``` or ```size()```:
  - Returns the length of the string, i.e., the number of characters in the string.

- ```empty()```:
  - Checks if the string is empty or not. Returns true if the string is empty, and false otherwise.

- ```clear()```:
  - Clears the contents of the string, making it an empty string.

- ```substr(start, length)```:
  - Returns a substring of the string starting from the start index and of the specified length. If length is not provided, it returns the substring from start until the end of the string.

- ```find(substring)```:
  - Searches for the first occurrence of the substring within the string and returns its index. If the substring is not found, it returns std::string::npos.

- ```replace(start, length, new_string)```:
  - Replaces a portion of the string, specified by start and length, with the new_string.

- ```append(str)```:
  - Appends the str at the end of the string.

- ```insert(pos, str)```:
  - Inserts the str at the specified pos index within the string.

- ```erase(start, length)```:
  - Removes a portion of the string, starting from start and of the specified length.

- ```compare(str)```:
  - Compares the string with str and returns an integer value indicating their lexicographical relationship. It returns 0 if both strings are equal, a negative value if the string is less than str, and a positive value if the string is greater than str.

These are just a few commonly used methods for string manipulation in C++. There are many more methods available in the <string> library that provide additional functionality, such as case conversion, character manipulation, and more.

# Exercise 00

![image](https://github.com/izzypt/CPP-Module-00/assets/73948790/b67bd00a-9ba0-4965-9551-4ac58803a9ef)

### Usefull here :

The `toupper()` function in C++ is not part of the `<iostream>` or `<cstring>` libraries, but they indirectly include the necessary headers. 
It is actually part of the `<cctype>` library, which provides functions for character handling and classification.

Here's a description of the `toupper()` function:

- `toupper()` is a function that is used to convert a lowercase character to its corresponding uppercase representation.
- It takes a single argument of type `int` or `char`, which represents the character to be converted.
- If the input character is a lowercase letter, `toupper()` returns the uppercase version of that letter.
- If the input character is already an uppercase letter or not a letter at all, `toupper()` returns the character unchanged.
- The function is typically used in conjunction with the standard C++ string functions, such as `std::toupper(c)` to convert a single character or `std::transform()` to convert a whole string to uppercase.
- Here's an example usage of `toupper()`:
```cpp
#include <cctype>
#include <iostream>

int main() {
    char lowercase = 'a';
    char uppercase = std::toupper(lowercase);
    std::cout << "Uppercase: " << uppercase << std::endl;
    return 0;
}
```
Output: "Uppercase: A"

Note that `toupper()` operates on single characters and does not modify strings in place. If you want to convert a whole string to uppercase, you'll need to iterate over the characters and apply `toupper()` to each one.


# Exercise 01

![image](https://github.com/izzypt/CPP-Module-00/assets/73948790/fafad39c-9f9c-4ab5-af3a-3baa672288d6)

![image](https://github.com/izzypt/CPP-Module-00/assets/73948790/b0ade502-4251-474d-8c21-29447cb01503)

Used and usefull function on the exercise :


- ```std::cout```

  - It is used for outputting data to the standard output stream, typically the console or terminal.
  - You can use the << operator with std::cout to send data to the output stream.

For example: 

```
std::cout << "Hello, world!";

will print "Hello, world!" to the console.
```


- ```std::cin```

  - It is used for reading input from the standard input stream, typically the keyboard.
  - You can use the >> operator with std::cin to read data from the input stream into variables.

For example: 

```
int num;

std::cin >> num;

will wait for user input and store the entered value into the variable num.
```

- ```std::setw```

std::setw is a function in the <iomanip> header of the C++ standard library.
It is used to set the width of the output field for the next value printed to the output stream.
It takes an integer argument that specifies the width in characters.

For example: 

```
std::cout << std::setw(5) << 42;

will output " 42" (with three leading spaces) because the width is set to 5.
```


- ```str.compare```

  - str.compare is a member function of the std::string class in the C++ standard library.
  - It is used to compare two strings lexicographically.
  - It returns an integer value indicating the result of the comparison: 0 if the strings are equal, a negative value if the calling string is lexicographically less than the argument, and a positive value if the calling string is lexicographically greater.

For example: 

```
std::string str1 = "apple";
std::string str2 = "banana";
int result = str1.compare(str2);

will set result to a negative value (-1) because "apple" is lexicographically less than "banana".
```

- ```std::cin.clear```

  - std::cin.clear is a member function of the std::istream class in the C++ standard library.
  - It is used to clear the error state flags of the input stream.
  - When there is an error, such as an incorrect data type entered, the error flag is set, and subsequent input operations may fail.
  - Calling std::cin.clear() clears the error flags, allowing you to recover from the error state and continue reading input.

For example:

```
std::cin.clear();

is commonly used in error-handling scenarios to reset the stream after an input failure.
```
- ```std::stoi()```

  - In C++, the function `std::stoi()` (string to int) is typically used to convert a string to an integer. 
  - It is part of the `<string>` header and provides more robust error handling compared to `atoi()`. Here's an example of how you can use `std::stoi()` in your code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string input = "123";
    int number = std::stoi(input);
    std::cout << "Number: " << number << std::endl;
    return 0;
}
```

  Output: "Number: 123"
