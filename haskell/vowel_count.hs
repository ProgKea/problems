import System.IO

vowels = "aeiou"

vowel_count :: Char -> [Char] -> Int
vowel_count x s = sum $ map (\a -> 1) $ filter (== x) s

main :: IO()
main = interact $ words
  putStrLn . show . sum $ map (\x -> vowel_count x s) vowels

