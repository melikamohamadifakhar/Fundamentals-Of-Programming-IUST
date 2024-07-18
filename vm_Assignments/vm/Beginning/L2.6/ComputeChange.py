def compute_change(m):
    n = 100 - m
    quarter = int(n/25)
    dime = int((n % 25)/10)
    nickel = int(((n % 25) % 10)/5)
    pennies = n - (25*(quarter)+(10*dime)+(5*nickel))
    print(quarter,"quarters")
    print(dime,"dimes")
    print(nickel,"nickels")
    print(pennies, "pennies")
compute_change(8)