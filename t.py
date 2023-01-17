
ragged =[["Jane", "Tom", "Mary"], [80, 90]]
names=[]
grades=[]

for i in range(len(ragged)):
    for j in range(len(ragged[i])):
        if i==0: # first row is names
            names.append(ragged[i][j])
        else:
            grades.append(ragged[i][j]) # second row is grades

print(names) # ['Jane', 'Tom', 'Mary']
print(grades) # [80, 90]
