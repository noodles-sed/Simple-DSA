def is_armstrong(num):
    s_num = str(num)
    order = len(s_num)
    
    # Use a sum generator
    sum_of_powers = sum(int(digit) ** order for digit in s_num)
    
    # Return True if the sum equals the original number, False otherwise
    return num == sum_of_powers

try:
    number = int(input("Enter a number to check: "))

    if number < 0:
        print("Please enter a non-negative integer.")
    elif is_armstrong(number):
        print(f"{number} is an Armstrong number.")
    else:
        print(f"{number} is not an Armstrong number.")

except ValueError:
    print("Invalid input. Please enter an integer.")