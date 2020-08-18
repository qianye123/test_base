

HANDLE_TEST = False
print(HANDLE_TEST)

class controller():

    def __init__(self, hz):
        self.hz = hz
        self.output = 0
        print('this is controller.\n')
    
    def sethz(self, hz):
        self.hz = hz

    def gethz(self):
        return self.hz

    def setcontrol(self, error):
        self.output = 20 * error

    def getcontrol(self):
        return self.output


class pidcontorller(controller):

    def __init__(self, hz):
        print('this is pid.\n')
        super().__init__(hz)
        self.kp = 0
        self.ki = 0
        self.kd = 0

    def setkp(self, kp):
        self.kp = kp

    def setcontrol(self, error):
        self.output = self.kp * error

