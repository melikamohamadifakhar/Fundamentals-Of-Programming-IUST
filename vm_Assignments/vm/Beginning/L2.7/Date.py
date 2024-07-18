def is_leap_year(year):
    if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
        return True 
    else:
        return False
def days_in_month(year,monthNumber):
    if monthNumber == 1:
        return(31)
    elif monthNumber == 2:
        if is_leap_year(year):
            return(29)
        else:
            return(28)
    elif monthNumber == 3:
        return(31)
    elif monthNumber == 4:
        return(30)
    elif monthNumber == 5:
        return(31)
    elif monthNumber == 6:
        return(30)
    elif monthNumber == 7:
        return(31)
    elif monthNumber == 8:
        return(31)
    elif monthNumber == 9:
        return(30)
    elif monthNumber == 10:
        return(31)
    elif monthNumber == 11:
        return(30)
    elif monthNumber == 12:
        return(31)
# print(days_in_month(800,2))

def days_before_date(year, monthNumber, day):
    s = 0
    x = []
    for i in range(1, monthNumber):
        m = days_in_month(year, i)
        x.append(m)
    for h in x:
        s = h + s
    result = s + day - 1
    print(result)
print(days_before_date(2014, 3, 12))