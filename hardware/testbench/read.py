file = open("NyGPU.v")
file2 = open("copy.txt", 'w')
for i in range(545):
    line = file.readline()
    if (i != 0):
        file2.write("\nlogic[31:0] " + line[0:(len(line) - 2)] + ';')


