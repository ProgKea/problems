import System.IO

findMissingLetter :: [Char] -> Char
findMissingLetter xs = head [x | x <- [head xs..last xs], notElem x xs] 

main :: IO()
main = do
  n <- getLine
  putStrLn $ show . findMissingLetter n 
