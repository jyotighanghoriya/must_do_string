# Concept is easy as Heck
# Basically take each character and fix it meaning for 1st iteration no. of characters fixed would be 0. So swap first character with all the remaining characters. Eg : ABC
# Replace A with A and resultant string would be ABC then replace A with B so resultant string would be BAC, and then swap A with C so result string would be CBA.
# in next iteration one character would be fixed SO A in ABC is fixed so we can swap B with B resultant string would be ABC and B with C so resultant string would be ACB. 
# likewise it will happend for all the strings.
#######################################################
# Python code to demonstrate
# to find all permutation of
# a given string
 
# Initialising string
ini_str = "abc"
 
# Printing initial string
print("Initial string", ini_str)
 
# Finding all permutation
result = []
 
def permute(data, i, length):
    if i == length:
        result.append(''.join(data) )
    else:
        for j in range(i, length):
            # swap
            data[i], data[j] = data[j], data[i]
            permute(data, i + 1, length)
            data[i], data[j] = data[j], data[i] 
permute(list(ini_str), 0, len(ini_str))
 
# Printing result
print("Resultant permutations", str(result))
		    
		    
