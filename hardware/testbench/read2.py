file = open("NyGPU.v")
file2 = open("copy2.txt", 'w')
for i in range(545):
    line = file.readline()
    if (i != 0):
        file2.write('        memory.core_ila.' + line[0:(len(line) - 2)] + ' = 0;\n')


