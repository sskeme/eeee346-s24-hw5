rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h 
cat testLargeOverflow.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultLargeOverflow.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Large Overflow - FAIL"
  else
    echo "Large Overflow - PASS"
  fi  
else
  echo "Large Overflow - FAIL (MISSING FILE)"
fi
