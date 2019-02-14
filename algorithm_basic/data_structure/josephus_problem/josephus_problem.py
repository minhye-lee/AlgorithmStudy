from sys import stdin

def josephus(_data, _data_size, _del_index):
    _order = []
    for _ in range(_data_size):
        for index in range(_del_index):
            if index < _del_index-1:
                _data.append(_data[0])
                _data = _data[1:]
            else:
                _order.append(_data[0])
                _data = _data[1:]
    return '<'+", ".join([str(i) for i in _order])+'>'
cmd = stdin.readline().split()
data_size = int(cmd[0])
del_index = int(cmd[1])
data = [i for i in range(1, data_size+1)]
print(josephus(data, data_size, del_index))