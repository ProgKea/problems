module solution where

fiblist :: [Integer]
fiblist = 0 : 1 : zipWith (+) fiblist (tail fiblist)

fib :: Int -> Integer
fib n = last $ take n fiblist
