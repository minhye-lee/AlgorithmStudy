from sys import stdin
class Editor:
    def __init__(self, _string):
        self.left_cursor = _string
        self.right_cursor = []
    def cmd_L(self):
        if len(self.left_cursor):
            ch = self.left_cursor.pop()
            self.right_cursor.append(ch)
    def cmd_D(self):
        if len(self.right_cursor):
            ch = self.right_cursor.pop()
            self.left_cursor.append(ch)
    def cmd_B(self):
        if len(self.left_cursor):
            self.left_cursor.pop()
    def cmd_P(self, ch):
        self.left_cursor.append(ch)
    def cmd_print(self):
        return "".join(self.left_cursor+self.right_cursor[::-1])

string = Editor(list(stdin.readline().strip()))
cmd_cnt = int(stdin.readline())
for i in range(cmd_cnt):
    cmd = stdin.readline()
    if cmd[0] == 'L':
        string.cmd_L()
    elif cmd[0] == 'D':
        string.cmd_D()
    elif cmd[0] == 'B':
        string.cmd_B()
    else:
        string.cmd_P(cmd[2])
print(string.cmd_print())