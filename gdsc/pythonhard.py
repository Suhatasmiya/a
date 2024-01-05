import math

def calculate_circle_area(radius):
    # Bug 1: Incorrect formula for calculating the area
    area = 3.14 * radius ** 2
    return area

def calculate_hypotenuse(a, b):
    # Bug 2: Missing import statement for the math module
    hypotenuse = math.sqrt(a ** 2 + b ** 2)
    return hypotenuse

# Bug 3: Incorrect variable names
side1 = float(input("Enter the length of side1: "))
side2 = float(input("Enter the length of side2: "))

# Bug 4: Incorrect function call
area_result = calculate_hypotenuse(side1, side2)

# Bug 5: Incorrect print statement
print("The hypotenuse of the right-angled triangle is: {}".format(area_result))
