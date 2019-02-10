from sys import stdin

class Queue:
    def __init__(self):
        self.queue = []
    def push(self, data):
        self.queue.append(data)
    def pop(self):
        if self.size():
            pop_element = self.queue[0]
            del self.queue[0]
            return pop_element
        else:
            return -1
    def size(self):
        return len(self.queue)
    def empty(self):
        return 0 if self.size() else 1
    def front(self):
        return self.queue[0] if self.size() else -1
    def back(self):
        return self.queue[self.size() -1] if self.size() else -1

cnt_cmd = int(stdin.readline())
queue = Queue()
for i in range(cnt_cmd):
    cmd = stdin.readline().split()
    if cmd[0] == 'push':
        queue.push(cmd[1])
    elif cmd[0] == 'pop':
        print(queue.pop())
    elif cmd[0] == 'size':
        print(queue.size())        
    elif cmd[0] == 'empty':
        print(queue.empty())
    elif cmd[0] == 'front':
        print(queue.front())
    else: #back
        print(queue.back())