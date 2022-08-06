import System.IO

print_hw_n_times :: Int -> IO()
print_hw_n_times 0 = return ()
print_hw_n_times n = do
  putStrLn "Hello World"
  print_hw_n_times (n-1)

main :: IO()
main = do
  n <- readLn :: IO Int
  print_hw_n_times n
