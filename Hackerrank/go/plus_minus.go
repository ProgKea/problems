//package main

import (
	"bufio"
	"fmt"
	"io"
	"math"
	"os"
	"strconv"
	"strings"
)

/*
* Complete the 'plusMinus' function below.
*
* The function accepts INTEGER_ARRAY arr as parameter.
 */

func plusMinus(arr []int32) {
  // Write your code here
  positive_n := 0
  negative_n := 0
  null_n := 0
  for i := range arr {
    if arr[i] == int32(math.Abs(float64(arr[i]))) && arr[i] != 0 {
      positive_n++
    } 
    if arr[i] == 0 {
      null_n++
    } 
    if arr[i] != int32(math.Abs(float64(arr[i]))) {
      negative_n++
    }
  }
  fmt.Println(float32(positive_n)/float32(len(arr)))
  fmt.Println(float32(negative_n)/float32(len(arr)))
  fmt.Println(float32(null_n)/float32(len(arr)))
}

func main() {
  reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

  nTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
  checkError(err)
  n := int32(nTemp)

  arrTemp := strings.Split(strings.TrimSpace(readLine(reader)), " ")

  var arr []int32

  for i := 0; i < int(n); i++ {
    arrItemTemp, err := strconv.ParseInt(arrTemp[i], 10, 64)
    checkError(err)
    arrItem := int32(arrItemTemp)
    arr = append(arr, arrItem)
  }

  plusMinus(arr)
}

func readLine(reader *bufio.Reader) string {
  str, _, err := reader.ReadLine()
  if err == io.EOF {
    return ""
  }

  return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
  if err != nil {
    panic(err)
  }
}
