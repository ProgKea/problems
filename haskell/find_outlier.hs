findOutlier :: [Int] -> Int 
findOutlier xs
  | length (filter odd xs) == 1 = head $ filter odd xs
  | otherwise = head $ filter even xs
