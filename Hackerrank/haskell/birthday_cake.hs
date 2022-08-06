candle :: [Int] -> Int
candle xs = sum [1 | x <- xs, x == highest]
  where highest = maximum xs

main = interact $ show . candle . map read . tail . words 
