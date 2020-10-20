
: '
Chapel Compiler Optimisations for GPU Support
by Yihan Zhou
21/10/2020
Measure compilation time of Chapel programs

- To add new program for time measurement, add the name of the program 
  without extension to programArr, separate by space. 

- Modify pathToBin to correct chpl binary
- Make sure bash shell is used, the output of time command varies 
  on different shell.
'
numOfRuns=2
# e.g /Users/xxx/chapel/bin/darwin-x86_64/chpl
pathToBin=/path-to-chapel-bin

# Each program should have three time measurements: real, user and sys
programArr='GPU CPU empty'

# Time names and init them with corresponding program name
timeNamesArr=()
for t in ${programArr[@]}; do
  timeNamesArr+=("totalRealTime$t")
  timeNamesArr+=("totalUserTime$t")
  timeNamesArr+=("totalSysTime$t")
done

# Time value array
timeValArr=()
# Init all the times
for t in ${timeNamesArr[@]}; do
  timeValArr+=("0")
done

for i in $(seq 1 $numOfRuns); do
  echo "Round $i"
  outputArr=()
  # save outputs from time command
  for t in ${programArr[@]}; do
    output=$((time $pathToBin -o $t ${t}.chpl)  2>&1 > /dev/null | grep -E "m[0-9]*.[0-9]*s" -o)
    outputArr+=($output)
  done

  # Remove the first and last character from the string, only leave number
  index=0
  for time in ${outputArr[@]}; do
    outputArr[$index]=${time:1:${#time}-2}
    index=$((index + 1))
  done
  # Print the middle result to terminal
  for i in ${!timeNamesArr[@]}; do
    echo "${timeNamesArr[$i]} = ${timeValArr[$i]} + ${outputArr[$i]} (current round time)"
  done

  # Update time vals in timeValArr
  index=0
  for time in ${timeValArr[@]}; do
    timeValArr[$index]=$(python -c "print(float(${outputArr[$index]}) + float($time))")
    index=$((index + 1))
  done

done

# Final result after all rounds
echo "======================================"
echo "=            Final Result            ="
echo "======================================"

for i in ${!timeNamesArr[@]}; do
  echo "${timeNamesArr[$i]}: ${timeValArr[$i]}"
done