import Data.List
import Data.Char

duplicateCount :: String -> Int
duplicateCount s = length $ nubBy (\x y -> toLower x/=toLower y) s
