import mathfunctions

def test_is_odd():
    assert mathfunctions.is_odd(5) == True
    assert mathfunctions.is_odd(8) == False
    assert mathfunctions.is_odd(0) == False


def test_sum():
    result = mathfunctions.sum(1,2,3,4)
    assert result == 10 