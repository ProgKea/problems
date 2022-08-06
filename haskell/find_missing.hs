import Data.List

findMissing :: Integral n => [n] -> n
findMissing all@(x:y:xs)
  | y - x == 2 = head $ [x..last all] \\ all 
  | otherwise = head $ [x,y..last all] \\ all
