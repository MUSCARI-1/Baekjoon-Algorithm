def change(mid):
    level={'+':1, '-':1, '*':2, '/':2}
    last=[]
    op=[]
    for i in range(len(mid)):
        try:
            int(mid[i],10)
            last.append(mid[i])
            if (i!=len(mid)-1 and mid[i+1]=='(') or (i!=0 and mid[i-1]==')'):
                print("ROCK")
                exit(0)
        except ValueError:
            if mid[i] in level:
                while len(op)!=0 and op[-1]!='(' and level.get(op[-1],-1)>=level[mid[i]]:
                    last.append(op.pop())
                op.append(mid[i])
            elif mid[i]=='(':
                op.append(mid[i])
            elif mid[i]==')':
                while len(op)!=0 and op[-1]!='(':
                    last.append(op.pop())
                op.pop()
    while len(op)!=0:
        last.append(op.pop())
    return last

def solve(last):
    number=[]
    for i in last:
        try:
            value=int(i,10)
            number.append(value)
        except ValueError:
            if len(number)<2:
                print("ROCK")
                exit(0)
            b=number.pop()
            a=number.pop()
            if i=='+':
                cnt=a+b
            elif i=='-':
                cnt=a-b
            elif i=='*':
                cnt=a*b
            else:
                if b==0:
                    print("ROCK")
                    exit(0)
                cnt=a//b
            number.append(cnt)
    return number[0]


s1=input()
s2=[]
ptr=0
while ptr<len(s1):
    c = s1[ptr]
    if c.isdigit():
        num=c
        ptr+=1
        while ptr<len(s1) and (s1[ptr].isdigit()):
            num+=s1[ptr]
            ptr+=1
        s2.append(num)
    elif c=='+' or c=='-' or c=='*' or c=='/' or c=='(' or c==')':
        s2.append(c)
        ptr+=1
    else:
        print("ROCK")
        exit(0)
ptr2=0
stack = []
for i in range(len(s2)):
    now = s2[i]
    if now[0]=='.' or now.count('.')>=2:
        print("ROCK")
        exit(0)
    elif now in "+-*/":
        if(i+1==len(s2) or s2[i+1] in "+-*/)"):
            print("ROCK")
            exit(0)
    elif now=='(':
        if(i+1==len(s2) or s2[i+1] in "+-*/)"):
            print("ROCK")
            exit(0)
        stack.append(ptr2)
    elif now==')':
        if(len(stack)==0):
            print("ROCK")
            exit(0)
        stack.pop()
    ptr2+=len(now)
if(len(stack)!=0):
    print("ROCK")
    exit(0)
last=change(s2)
print(solve(last))