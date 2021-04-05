# Questions 
1. Dividing a program
    - is the key to object-oriented programming
    - makes the program easier to conceptualize
    - may reduce the size of the program
    - makes the program
2. A function name must be followed by ______
3. A function body is delimited by _______
4. Why is the main() function special 
5. A C++ instruction that tells the computer to do something is called a ______
6. write an example of a normal C++ comment an example of an old-fashioned /* comment
7. an expression 
    - usually evaluates to a numerical value
    - indicates the emotional state of the program
    - always occurs outside a function
    - may be part of a statement
8. Specify how many bytes are occupied by the following data types in 32-bit system:
    - type int
    - type long double
    - type float
    - type long
9. True or false: A variable of type char can hold the value 301
10. What kind of program elements are the following 
    - 12
    - 'a'
    - 4.28915
    - JungleJim
    - JungleJim()
11. Write statements that display on the screen 
    - the character 'x'
    - the name *Jim*
    - the number 509
12. True or false: In an assignment statement, the value on the left of the equal sign is always equal to the value on the right
13. Write a statement that displays the variable george in a field 10 characters wide
14. What header file must you #include with your source file to use cout and cin
15. Write a statement that gets a numerical value from the keyboard and places it in the variable temp
16. What header file must you #include with your program to use setw
17. Two exceptions to the rule that the compiler ignores whitspace are _____ and _____
18. True or false: It's perfectly all right to use variables of different data types in the same arithmetic expression
19. The expression 11%3 evalutates to _____
20. An arithmetic assignment operator combines the effect of what two operators
21. Write a statement that uses an arithmetic assignment operator to increase the value of the variable temp by 23. Write the same statement without the arithmetic assinment operator
22. The increment operator increases the value of a variable by how much 
23. Assuming var1 starts with the value 20, what will the folowing code fragment print out

`
cout << var1--;
`

`
cout << ++var1;
`

24. In the examples we've seen so far, header files have been used for what purpose
25. The actual code for library functions is contained in a _____ file

# Answer Key 
1. b, c
2. parentheses () 
3. braces {}
4. its the first function executed when the program starts
5. statements
6. //hello this is a C++ comment /* this is an old-fashioned comment and it allows for multiple lines to be allowed in the comment */
7. a, d
8.  - 4
    - 10
    - 4
    - 4
9. false
10. - integer constant
    - character constant
    - variable name
    - function name
11. - cout << 'x'
    - cout << "Jim"
    - cout << 509
12. false
13. see question-13.cpp
14. `#include <iostream>`

    `using namespace std;`
15. `cin >> temp;`
16. `#include <iomanip>`
17. line of the program and `#include`
18. true
19. 2
20. an arithmetic operator and an assignment operator
21. see question-21.cpp
22. 1
23. - nothing
    - adds 1
24. they are used to get certain things like `<iostream>` gives `cout` and `cin`
25. header