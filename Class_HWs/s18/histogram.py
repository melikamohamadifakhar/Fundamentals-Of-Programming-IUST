file_name = "script.txt"
opened_file = open(file_name)
readed_file = opened_file.read()
file_lower = readed_file.lower()
words = file_lower.split(" ")
def count_words():
    result = {}
    for word in words:
        s = 0
        for i in range(len(words)):
            tokens = words[i]
            if tokens == word :
                s = s + 1
            result[word] = s
    return result




def table():
    result = count_words()
    print("word " + "    |  " + "  count" )
    for key, value in result.items():
        v = str(value)
        print("{:15} {}".format(key, v))
print(table())