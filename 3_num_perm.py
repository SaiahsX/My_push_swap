import itertools
import subprocess

# Generate all permutations of 1, 2, 3
permutations = list(itertools.permutations([1, 2, 3]))

# Iterate over each permutation
for perm in permutations:
    # Convert the permutation to a string with spaces between numbers
    perm_str = ' '.join(map(str, perm))
    
    # Print the permutation being tested
    print("Testing permutation:", perm_str)
    
    # Run a.out with the current permutation as input and pipe the output to checker_mac
    command = f"./a.out {perm_str} && ./a.out {perm_str} | ./checker_Mac {perm_str}"
    
    # Execute the command and capture the output
    output = subprocess.run(command, shell=True, capture_output=True, text=True)
    
    # Print the output from checker_mac
    print(output.stdout) 