phone_book = {}
phone_book["ali"] = "246826894"
phone_book["maria"] = "802493159"

while True:
    command = input("?")
    command = command.lower()
    tokens = command.split()
    if tokens[0] == "lookup":
        name = tokens[1]
        if name in phone_book:
            number = phone_book[name]
            print(number)
        else:
            print("not found")
    elif tokens[0] == "add":
        name = tokens[1]
        number = tokens[2]
        phone_book[name] = number
        print("successfully added")