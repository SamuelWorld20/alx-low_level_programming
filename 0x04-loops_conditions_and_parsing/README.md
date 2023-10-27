## 0x04-loops_conditions_and_parsing

This module covers the following topics:

* Loops
* Conditions
* Parsing

### Loops

Loops are used to repeat a block of code until a certain condition is met. There are three main types of loops in shell scripting:

* **for loops:** for loops iterate over a sequence of values, such as a list of files or a range of numbers.
* **while loops:** while loops iterate while a certain condition is true.
* **until loops:** until loops iterate until a certain condition is false.

### Conditions

Conditions are used to evaluate whether a statement is true or false. There are two main types of conditions in shell scripting:

* **Simple conditions:** simple conditions compare two values, such as two numbers or two strings.
* **Complex conditions:** complex conditions use multiple simple conditions combined with logical operators, such as **and**, **or**, and **not**.

### Parsing

Parsing is the process of breaking down a string of text into its individual components. This can be useful for extracting data from files, or for processing user input.

The shell has a number of built-in features for parsing strings, such as the `read` command and the `awk` utility.

## Examples

```shell
# for loop
for file in *.txt; do
  echo "Processing file $file"
done

# while loop
while [ -f "$file" ]; do
  echo "Processing file <span class="math-inline">file"
file\=</span>(find "$file" -type f -newer "$file")
done

# until loop
until [ ! -f "$file" ]; do
  echo "Processing file <span class="math-inline">file"
file\=</span>(find "$file" -type f -newer "$file")
done

# simple condition
if [ "$file" -gt 10 ]; then
  echo "$file is greater than 10"
else
  echo "$file is not greater than 10"
fi

# complex condition
if [ "$file" -gt 10 ] && [ "$file" -lt 20 ]; then
  echo "$file is between 10 and 20"
elif [ "$file" -gt 20 ]; then
  echo "$file is greater than 20"
else
  echo "$file is less than 10"
fi

# parsing
read -p "Enter your name: " name
echo "Hello, $name!"

# awk
awk '{print $1, $2}' /etc/passwd


## Conclusion

Loops, conditions, and parsing are fundamental concepts in shell scripting. By understanding these concepts, you will be able to write more powerful and flexible scripts.

---
Happy Coding!!!
