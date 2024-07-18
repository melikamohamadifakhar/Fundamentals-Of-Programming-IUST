def is_leap_year(year):
    if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
        return True 
    else:
        return False

print(is_leap_year(1792))
print(is_leap_year(1796))
print(is_leap_year(1800))
print(is_leap_year(1804))
print(is_leap_year(1900))
print(is_leap_year(1904))
print(is_leap_year(2000))
print(is_leap_year(2000))
