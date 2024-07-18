import exam1

def test_q1_add():
    assert exam1.q1_add(1, 3) == 4
    assert exam1.q1_add(2, 3) == 5    
    assert exam1.q1_add(1, -1) == 0    

def test_q2_print_add(capsys):
    exam1.q2_print_add(2, 4)
    output = capsys.readouterr().out
    out_n = int(output)
    assert out_n == 6

    exam1.q2_print_add(1, 3)
    output = capsys.readouterr().out
    out_n = int(output)
    assert out_n == 4

def test_q3_print_square(capsys):
    exam1.q3_print_square("*", 5)
    output = capsys.readouterr().out
    lines = output.splitlines()
    assert len(lines) == 5
    assert lines[0] == "*****"
    assert lines[4] == "*****"
    for line in lines[1:3]:
        assert line == "*   *"

    exam1.q3_print_square("#", 7)
    output = capsys.readouterr().out
    lines = output.splitlines()
    assert len(lines) == 7
    assert lines[0] == "#######"
    assert lines[6] == "#######"
    for line in lines[1:6]:
        assert line == "#     #"

def test_q4_sum_odd_squares():
    s = exam1.q4_sum_odd_squares(0,4)
    assert s == (1 + 9)

    s = exam1.q4_sum_odd_squares(0,10)
    assert s == (1 + 9 + 25 + 49 + 81)

def test_q5_sum_value_squares():
    nums = [1, 3, 8]
    s = exam1.q5_sum_value_squares(nums)
    assert s == (1 + 9 + 64)

    nums = [5, 9, 12, 15]
    s = exam1.q5_sum_value_squares(nums)
    assert s == (25 + 81 + 144 + 225)

def test_q6_sum_num_indices():
    #       0  1  2   3  4  5  6  7  8
    nums = [1, 5, 4, 12, 3, 6, 7, 3, 9]
    indices = [6, 4, 1, 3]
    s = exam1.q6_sum_num_indices(nums, indices)
    assert s == (7 + 3 + 5 + 12)

    #       0  1  2  3  4  5  6  7  8  9
    nums = [1, 5, 4, 2, 2, 2, 6, 7, 3, 9]
    indices = [4, 1, 9]
    s = exam1.q6_sum_num_indices(nums, indices)
    assert s == (2 + 5 + 9)

def test_q7_get_new_fib_array():
    nums = exam1.q7_get_new_fib_array(2, 3, 4)
    assert nums == [2, 3, 2*3-2, 3*4-2]

    nums = exam1.q7_get_new_fib_array(3, 4, 6)
    assert nums == [3, 4, 12-2, 4*10-2, 10*38-2, 38*378-2]

# def test_q8_get_phone_numbers():
#     queries = ["Ali", "Zohre"]
#     phone_numbers = exam1.q8_get_phone_numbers("phonebook1.txt", queries)
#     assert len(phone_numbers) == 2
#     assert phone_numbers[0] == "09122331415"
#     assert phone_numbers[1] == "03113421541"

#     queries = ["Zhila", "zhila", "Mojdeh"]
#     phone_numbers = exam1.q8_get_phone_numbers("phonebook1.txt", queries)
#     assert len(phone_numbers) == 3
#     assert phone_numbers[0] == "09153332231"
#     assert phone_numbers[1] == "09153332231"
#     assert phone_numbers[2] == "na"

#     queries = ["Francesco Pera", "Tomi Minasian", "Theodore Ty"]
#     phone_numbers = exam1.q8_get_phone_numbers("phonebook2.txt", queries)
#     assert phone_numbers == ["076019 168 24-53", "0049 6316259", "07814 352-7 85"] 
