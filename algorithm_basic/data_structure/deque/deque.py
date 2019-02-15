from sys import stdin

class Deque:
    def __init__(self):
        self.deque = []
    def push_front(self, data):
        self.deque.insert(0, data)
    def push_back(self, data):
        self.deque.append(data)
    def pop_front(self):
        if self.size():
            pop_element = self.deque[0]
            del self.deque[0]
            return pop_element
        else:
            return -1
    def pop_back(self):
        if self.size():
            pop_element = self.deque.pop()
            return pop_element
        else:
            return -1
    def size(self):
        return len(self.deque)
    def empty(self):
        return 0 if self.size() else 1
    def front(self):
        return self.deque[0] if self.size() else -1
    def back(self):
        return self.deque[-1] if self.size() else -1

cnt_cmd = int(stdin.readline())
deque = Deque()
for i in range(cnt_cmd):
    cmd = stdin.readline().split()
    if cmd[0] == 'push_front':
        deque.push_front(cmd[1])
    elif cmd[0] == 'push_back':
        deque.push_back(cmd[1])
    elif cmd[0] == 'pop_front':
        print(deque.pop_front())
    elif cmd[0] == 'pop_back':
        print(deque.pop_back())
    elif cmd[0] == 'size':
        print(deque.size())        
    elif cmd[0] == 'empty':
        print(deque.empty())
    elif cmd[0] == 'front':
        print(deque.front())
    elif cmd[0] == 'back':
        print(deque.back())