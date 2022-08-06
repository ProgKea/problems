-- import Data.List
-- import Data.Function

-- getUnique :: [Int] -> Int
-- getUnique xs = head . head $ sortBy (compare `on` length) $ map (\x -> (filter (\a -> a==x) xs)) xs

getUnique :: [Int] -> Int
getUnique (x:xs)
  | x `elem` xs = getUnique $ filter (/=x) xs
  | otherwise   = x
