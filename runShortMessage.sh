rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h 
cat testShortMessage.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultShortMessage.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Short Message - FAIL"
  else
    echo "Short Message - PASS"
  fi  
else
  echo "Short Message - FAIL (MISSING FILE)"
fi
