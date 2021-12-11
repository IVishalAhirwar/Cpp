# def foo(a,b=0,c=0):
#     print(a,b,c);

# foo(1,c=5)

def foo(a,*args,**kw):
    print(a,args,kw)

foo(1,2,3,4,x=0,y=6)
