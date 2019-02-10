def check_cnt_rod(_iron_rod):
    _cnt_rod = 0
    _cnt_stack = 0
    for index in range(len(_iron_rod)):
        if iron_rod[index] == '(':
            _cnt_stack += 1
        elif iron_rod[index] == ')':
            _cnt_stack -= 1
            if iron_rod[index-1] == '(':
                _cnt_rod += _cnt_stack
            else:
                _cnt_rod += 1
    return _cnt_rod


iron_rod = list(input())
print(check_cnt_rod(iron_rod))