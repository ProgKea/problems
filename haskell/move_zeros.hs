moveZeros :: [Int] -> [Int]
moveZeros xs = [x | x <- xs, x /= 0] ++ [x | x <- xs, x == 0]
