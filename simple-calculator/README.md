gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c print_menu.c add.c subtract.c multiply.c divide.c -o calculator

To run the basic calculator, compile using the above statement and run ./calculator.

This calculator supports addition, subtraction, multiplication and division.

This calculator can robustly handle character and string inputs, so long as the string does not contain numbers. In both of these cases it will produce an error.
To user the calculator, inputs must be integer values, and the calculator will only output interger values (including for division).
