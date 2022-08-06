reverseWords :: String -> String
reverseWords n = init . concatMap (++ " ") . map reverse $ words n

main = interact reverseWords 
