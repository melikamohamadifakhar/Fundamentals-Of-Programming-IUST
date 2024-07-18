str = "salam chetory? merci khoobam"
# for s in str:
#     print(s)

x = str.find("ch")
x = str.find("i")
# print(x)

str1 = "salam,chetory,khoobam"
tokens = str1.split(",")
# print(tokens) 
# for toke in tokens[1:3]:
    # print(toke)

# for i in range(50):
#     print("{:10}".format(i))

Gpa = 17.2463
print("this is your gpa: {:15.2f}".format(Gpa))

for i in range(50):
    mystr = "{:15}".format(i)
    print(mystr, end="")
    if((i+1) % 5 ==0):
        print()
