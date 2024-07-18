my_file = open("s17.txt")
e = ""
s = my_file.readlines()
for i in s:
    e = e + i
print(e)