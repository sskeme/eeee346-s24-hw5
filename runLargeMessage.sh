rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h 
cat testLargeMessage.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultLargeMessage.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Large Message - FAIL"
  else
    echo "Large Message - PASS"
  fi  
else
  echo "Large Message - FAIL (MISSING FILE)"
fi
