#!/bin/bash

# Specify the name of the C program
program_name="my_program"

# Capture the current date
current_date=$(date +"%Y-%m-%d")

# Create a new C file with the heading section
echo -e "/*" > "$program_name.c"
echo -e " * Author: mhs3n" >> "$program_name.c"
echo -e " * Date: $current_date" >> "$program_name.c"
echo -e " */" >> "$program_name.c"
echo -e "" >> "$program_name.c"
echo -e "#include <stdio.h>" >> "$program_name.c"
echo -e "" >> "$program_name.c"
echo -e "int main() {" >> "$program_name.c"
echo -e "    // Your code goes here" >> "$program_name.c"
echo -e "    return 0;" >> "$program_name.c"
echo -e "}" >> "$program_name.c"

# Print a success message
echo "C program '$program_name.c' created successfully."

