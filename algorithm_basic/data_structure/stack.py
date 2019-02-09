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

num = input()
stack = Stack()
for i in range(int(num)) :
    order = input().split()
    if(order[0] == 'push'):
        stack.push(int(order[1]))
    elif(order[0] == 'pop'):
        print(stack.pop())
    elif(order[0] == 'size'):
        print(stack.size())
    elif(order[0] == 'empty'):
        print(stack.empty())
    elif(order[0] == 'top'):
        print(stack.top())
    else:
        print('incorrect command')

    