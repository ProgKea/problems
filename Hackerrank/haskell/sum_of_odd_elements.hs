import System.IO

f arr = sum (filter odd arr)

main :: IO()
main = do
  inputdata <- getContents
  putStrLn $ show $ f $ map (read :: String -> Int) $ lines inputdata
