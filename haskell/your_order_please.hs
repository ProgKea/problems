import Data.List

yourOrderPlease :: String -> String
yourOrderPlease [] = []
yourOrderPlease x = init . concatMap (++ " ") . sortBy (\e1 e2 -> compare (sort e1) (sort e2)) $ words x
