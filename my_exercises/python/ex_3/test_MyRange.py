import unittest

class MyRange():     
    def __init__(self, stop, start=0, step=1):
        self.range = range(start, stop, step)

def myrange(*args):
        n_args=len(args)
        if n_args not in range(1,4):
            raise TypeError("my range has the following paramenters: myrange(stop, opt start=0, opt step=1)")
        if n_args==1:
            return MyRange(args[0]).range
        elif n_args==2:
            return MyRange(args[1],args[0]).range
        elif n_args==3:
            return MyRange(args[1],args[0],args[2]).range

class TestMyRange(unittest.TestCase):
    def test_min_arguments(self):
        with self.assertRaises(TypeError):
            myrange()
    
    def test_max_arguments(self):
        with self.assertRaises(TypeError):
            myrange(1,2,3,4)
        
    def test_match_range_behavior(self):
        self.assertEqual(range(10), myrange(10))
        self.assertEqual(range(1,6), myrange(1,6))
        self.assertEqual(range(12, 0, -1), myrange(12, 0, -1))
    
    def test_range_size(self):
        self.assertEqual(100, len(myrange(0,100,1)))
        self.assertEqual(50, len(myrange(1,101,2)))
        
if __name__ == '__main__':
    unittest.main() 
