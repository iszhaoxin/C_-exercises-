def isprimenumber(i):
    for j in range(i-1,2,-1):
        if i%j == 0:
            print("IS NOT\n");
            return
    print("IS\n");

isprimenumber(10)
