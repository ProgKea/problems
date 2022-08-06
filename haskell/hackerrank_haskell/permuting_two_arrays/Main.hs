import Data.List

permutingTwoArrays :: [Int] -> [Int] -> [Int]
permutingTwoArrays a b = zipWith (+) (sort a) $ reverse $ sort b

twoArrays :: Int -> [Int] -> [Int] -> String
twoArrays k a b
  | result    = "YES"
  | otherwise = "NO"
  where result = foldl (&&) True $ map (\x -> x>=k) $ permutingTwoArrays a b
