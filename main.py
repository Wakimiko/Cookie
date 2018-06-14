#!/usr/bin/env python3
LEN=15
def prinStar():
#    for i in range(LEN):
    print(LEN*'*')
#    print('\n')
def mainFun():
    prinStar()
    print('* Hello World *', end='\n')
    prinStar()

if __name__ == '__main__':
    mainFun()

