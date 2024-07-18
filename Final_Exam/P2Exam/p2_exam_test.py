import p2_exam
import pytest


def test_q1_get_max():
    assert p2_exam.q1_get_max(1, 2, 3) == 3
    assert p2_exam.q1_get_max(5, 1, 2) == 5
    assert p2_exam.q1_get_max(2, 4, 1) == 4


def test_q2_is_right_angled():
    assert p2_exam.q2_is_right_angled(3, 4, 5)
    assert p2_exam.q2_is_right_angled(3, 5, 4)
    assert p2_exam.q2_is_right_angled(4, 5, 3)
    assert p2_exam.q2_is_right_angled(4, 3, 5)
    assert p2_exam.q2_is_right_angled(5, 3, 4)
    assert p2_exam.q2_is_right_angled(5, 4, 3)

    assert p2_exam.q2_is_right_angled(5, 12, 13)
    assert p2_exam.q2_is_right_angled(15, 17, 8)

    assert not p2_exam.q2_is_right_angled(1, 2, 3)
    assert not p2_exam.q2_is_right_angled(4, 3, 2)
    assert not p2_exam.q2_is_right_angled(2, 2, 2)


def test_q3_array_sum():
    a = [1,  2, 3]
    b = [-1, 3, 2]
    c = [1, -1, -2]

    assert p2_exam.q3_array_fsum(a, b, c) == 9

    a[0] = 2
    b[1] = -1
    c[2] = -1
    assert p2_exam.q3_array_fsum(a, b, c) == 1

    c[0] = 2
    b[1] = 2
    a[2] = 1
    assert p2_exam.q3_array_fsum(a, b, c) == 4

    a1 = [1,  2, 3, 2, 1]
    b1 = [-1, 3, 2, -1, 3]
    c1 = [1, -1, -2, 4, 2]
    assert p2_exam.q3_array_fsum(a1, b1, c1) == 16

# @pytest.mark.skip(reason="not implemented")
# def test_q4_string_shuffle():
#     str1="1032"
#     str1 = p2_exam.q4_string_shuffle(str1)
#     assert str1 == "0123"

#     str2="badcfe"
#     str2 = p2_exam.q4_string_shuffle(str2)
#     assert str2 == "abcdef"

#     str3="livoyeuo"
#     str3 = p2_exam.q4_string_shuffle(str3)
#     assert str3[0] == 'i'
#     assert str3[2] == 'o'
#     assert str3[6] == 'o'
#     assert str3[4] == 'e'

# @pytest.mark.skip(reason="not implemented")
# def test_q5_last_index_of():
#     #     01234567
#     s1 = "abcabcab"
#     #        abc    
#     assert p2_exam.q5_last_index_of(s1, "abc") == 3

#     #01234567
#     #abcabcab
#     #      ab
#     assert p2_exam.q5_last_index_of(s1, "ab") == 6

#     #01234567
#     #abcabcab
#     #    bc
#     assert p2_exam.q5_last_index_of(s1, "bc") == 4

#     #01234567
#     #abcabcab
#     #    bc
#     assert p2_exam.q5_last_index_of(s1, "ad") == -1

#     #01234567
#     #abcabcab
#     #    bc
#     assert p2_exam.q5_last_index_of(s1, "abcd") == -1

# @pytest.mark.skip(reason="not implemented")
# def test_q6_sort():
#     a=5
#     b=1
#     c=2
#     d=-1
#     a,b,c,d = p2_exam.q6_sort(a, b, c, d)
#     assert a == 5 and b == 2 and c == 1 and d == -1

#     b=6
#     d=4
#     a=-1
#     c=2
#     a,b,c,d = p2_exam.q6_sort(a, b, c, d)
#     assert a == 6 and b == 4 and c == 2 and d == -1

#     a,b,c,d = p2_exam.q6_sort(a, b, c, d)
#     assert a == 6 and b == 4 and c == 2 and d == -1

def is_bigger(a,b):
    return a > b

def is_smaller(a,b):
    return a < b

# @pytest.mark.skip(reason="not implemented")
# def test_q7_generic_sort():
#     (a,b,c,d) = (5,1,2,-1)
#     a,b,c,d = p2_exam.q7_generic_sort(a, b, c, d, is_smaller)
#     assert a == 5 and b == 2 and c == 1 and d == -1
#     a,b,c,d = p2_exam.q7_generic_sort(a, b, c, d, is_bigger)
#     assert d == 5 and c == 2 and b == 1 and a == -1

#     (b,d,a,c) = (6,4,-1,2)
#     a,b,c,d = p2_exam.q7_generic_sort(a, b, c, d, is_smaller)
#     assert a == 6 and b == 4 and c == 2 and d == -1
#     a,b,c,d = p2_exam.q7_generic_sort(a, b, c, d, is_bigger)
#     assert d == 6 and c == 4 and b == 2 and a == -1

#     a,b,c,d = p2_exam.q7_generic_sort(a, b, c, d, is_bigger)
#     assert d == 6 and c == 4 and b == 2 and a == -1