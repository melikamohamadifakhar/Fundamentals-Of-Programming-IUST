import session9

def test_get_x():
    x_result = session9.get_x(-1, 1, 0.5)
    expected = [-1, -0.5, 0, 0.5, 1]
    assert x_result == expected


def test_get_x2():
    input = [-1, 4, 3, 0]
    x2_range = session9.get_x2(input)
    expected = [1, 16, 9, 0]
    assert x2_range == expected