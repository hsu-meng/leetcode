from threading import Lock
class FooBar:
    def __init__(self, n):
        self.n = n
        self.f = Lock()
        self.b = Lock()
        self.b.acquire()


    def foo(self, printFoo: 'Callable[[], None]') -> None:
        
        for i in range(self.n):
            self.f.acquire() # Lock acquired by the current thread
            # printFoo() outputs "foo". Do not change or remove this line.
            printFoo()
            self.b.release() # Lock released by the given thread


    def bar(self, printBar: 'Callable[[], None]') -> None:
        
        for i in range(self.n):
            self.b.acquire()
            # printBar() outputs "bar". Do not change or remove this line.
            printBar()
            self.f.release()