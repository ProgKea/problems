import System.IO

deletefirst :: Char -> [Char] -> [Char]
deletefirst a (x:xs)
  | a == x = xs
  | otherwise = x : deletefirst a xs

scramble :: [Char] -> [Char] -> Bool
scramble _ [] = True
scramble s1 (x:xs)
  | x `elem` s1 = scramble (deletefirst x s1) xs
  | otherwise = False

main :: IO()
main = do
  s1 <- getLine
  s2 <- getLine
  putStrLn $ show $ scramble s1 s2
