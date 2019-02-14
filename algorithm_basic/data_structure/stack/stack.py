#Stack
class Stack:
    def __init__(self):
        self.stack = []

    def push(self, data):
        self.stack.append(data)

    def pop(self):
        if self.size():
            pop_element = self.stack[-1]
            del self.stack[-1]
            return pop_element
        else:
            return -1

    def size(self):
        return len(self.stack)

    def empty(self):
        if self.size():
            return 0
        else:
            return 1

    def top(self):
        if self.size():
            return self.stack[-1]
        else:
            return -1

cmd_cnt = input()
stack = Stack()
for i in range(int(cmd_cnt)) :
    cmd = input().split()
    if cmd[0] == 'push':
        stack.push(int(cmd[1]))
    elif cmd[0] == 'pop':
        print(stack.pop())
    elif cmd[0] == 'size':
        print(stack.size())
    elif cmd[0] == 'empty':
        print(stack.empty())
    elif cmd[0] == 'top':
        print(stack.top())
    else:
        print('incorrect command')

    