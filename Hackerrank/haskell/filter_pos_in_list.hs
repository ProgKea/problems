import System.IO

f :: [Int] -> [Int]
f [] = []
f [x] = []
f (x:y:xs) = y : f xs

main = do
  inputdata <- getContents
  mapM_ (putStrLn. show). f. map read. lines $ inputdata
