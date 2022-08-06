import System.IO

staircase :: Int -> Int -> [String]
staircase n b 
  | n == 1 = [(replicate (b-1) ' ' ++ replicate 1 '#')]
  | otherwise = [(replicate (b-n) ' ' ++ replicate n '#')] ++ staircase (n-1) b

main :: IO()
main = do
  n <- getLine
  mapM_ putStrLn $ reverse (staircase (read n) (read n))
