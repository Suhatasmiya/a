
def calculate_sum(a, b):
    result = a + b
    return result  # Fix: Added the missing return statement

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Fix: Corrected the function name to calculate_sum
total = calculate_sum(num1, num2)

# Fix: Corrected the curly braces in the print statement
print("The sum of {} and {} is: {}".format(num1, num2, total))
