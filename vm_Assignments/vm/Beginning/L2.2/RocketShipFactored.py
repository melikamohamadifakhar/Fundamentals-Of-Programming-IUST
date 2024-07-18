def cone_part():
    print(r"    ^    ")
    print(r"   /|\   ")
    print(r"  //|\\  ")
    print(r" ///|\\\ ")

def minus_sign():
    print("+-------+")

def star_sign():
    print("+*******+")

def body():
    minus_sign()
    for i in range(4):
        star_sign()
    minus_sign()
    for i in range(4):
        star_sign()
    minus_sign()

def make_rocket():
    cone_part()
    body()
    cone_part()

make_rocket()
