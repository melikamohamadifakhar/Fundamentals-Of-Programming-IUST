def Pythagorean():
    for a in range(1, 100):
        for b in range(1, 100):
            for c in range(100):
                if(a < b) and (a * a) + (b * b) == (c*c):
                    print("a =", a, "b =", b, "c =", c)
Pythagorean()