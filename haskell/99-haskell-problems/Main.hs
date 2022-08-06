-- Problem 01
myLast :: [a] -> a
myLast [] = error "Empty list"
myLast [x] = x
myLast (x:xs) = myLast xs

-- Problem 02
myButLast :: [a] -> a
myButLast [] = error "Empty list"
myButLast [x] = error "List must contain 2 or more elements."
myButLast [x, _] = x
myButLast (_:xs) = myButLast xs

-- Problem 03
elementAt :: [a] -> Int -> a
elementAt [] _ = error "Empty list"
elementAt list k = go list k 1
    where 
        go (x:xs) k acc
          | acc == k = x
          | otherwise = go xs k (acc + 1)

-- Problem 04
myLength :: Eq a => [a] -> Int
myLength list = go list 0
    where 
        go list acc
          | null list = acc
          | otherwise = go (init list) (acc + 1)

-- Problem 05
myReverse :: Eq a => [a] -> [a]
myReverse list = go list []
    where
        go list acc
          | null list = acc
          | otherwise = go (init list) (acc ++ [last list])

-- Problem 06
isPalindrome :: Eq a => [a] -> Bool
isPalindrome [] = False
isPalindrome [_] = True
isPalindrome list = go list True
    where
        go (x:xs) acc
          | not acc || length (x:xs) <= 1 = acc
          | otherwise = go (init xs) (x == last xs)

-- Problem 07
-- data NestedList a = Elem a | List [NestedList a]

-- myFlatten :: NestedList -> []
-- myFlatten list = foldl 

-- Problem 08
compress :: Eq a => [a] -> [a]
compress list = go list []
  where
    go (x:xs) acc
      | null xs = acc
      | null acc = go xs (acc ++ [x])
      | last acc /= x = go xs (acc ++ [x])
      | otherwise = go xs acc
