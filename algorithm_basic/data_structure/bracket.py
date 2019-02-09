def check_bracket(_bracket):
    _cnt_left_bracket = 0
    _cnt_right_bracket = 0
    for element in _bracket:
        if element == '(':
            _cnt_left_bracket += 1
        elif element == ')':
            _cnt_right_bracket += 1            
        if _cnt_left_bracket < _cnt_right_bracket:
            return False
    if _cnt_left_bracket != _cnt_right_bracket:
        return False 
    return True

num = int(input())
for i in range(num):
    bracket = list(input())
    if check_bracket(bracket):
        print('YES')
    else:
        print('NO')