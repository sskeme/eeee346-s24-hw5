rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h 
cat testShortOverflow.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultShortOverflow.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Short Overflow - FAIL"
  else
    echo "Short Overflow - PASS"
  fi  
else
  echo "Short Overflow - FAIL (MISSING FILE)"
fi
