getMiddle :: String -> String
getMiddle s
  | odd $ length s = [s !! halfL]
  | otherwise = [s !! (-) halfL 1, s !! halfL]
  where
    halfL = length s `div` 2
