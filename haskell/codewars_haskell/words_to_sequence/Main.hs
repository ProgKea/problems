import qualified Data.Text as Text

formatWords :: [String] -> String
formatWords xs
  | length  filtered_list == 0 = ""
  | length  filtered_list == 1 = head filtered_list
  | otherwise                  = Text.unpack $ Text.replace (Text.pack ",") (Text.pack ", ") $ Text.pack $ filter (\x -> x/='"' && x/='\\' && x/='[' && x/=']') $ show init_list ++ " and " ++ last filtered_list
  where
    init_list = init $ filter (/="") xs
    filtered_list = filter (/="") xs
