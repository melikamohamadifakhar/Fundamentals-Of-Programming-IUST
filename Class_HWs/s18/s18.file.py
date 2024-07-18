score_file = open("s18.txt")
score_str = score_file.readline()
score_file.close()

score = int(score_str)
print("current scire is {:5}".format(score))
score = score + 1
print("new score is {:5}".format)
