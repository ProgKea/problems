solution :: Int -> Int
solution x
  | x < 38 = x
  | (nextm5 - x) < 3 = nextm5 
  | otherwise = x
  where nextm5 = x + (5 - x `mod` 5) 

main = interact $ unlines . map show . map solution . tail . map read . words
