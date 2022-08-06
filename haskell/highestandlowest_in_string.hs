import System.IO

highAndLow :: String -> String
highAndLow input = show max ++ " " ++ show min
  where 
    max = maximum $ map read $ words input :: Int
    min = minimum $ map read $ words input :: Int

-- input has to be Int

main :: IO()
main = do 
  n <- getLine
  putStrLn $ highAndLow n
