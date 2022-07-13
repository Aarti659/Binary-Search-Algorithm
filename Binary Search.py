
def Binary_search(List1, num):
    low = 0
    high = len(List1) - 1
    mid = 0

    while low <= high:

        mid = (high + low) // 2


        if List1[mid] < num:
            low = mid + 1


        elif List1[mid] > num:
            high = mid - 1


        else:
            return mid


    return -1



List1 = [12, 24, 32, 39, 45, 50, 54]
num = 45


Result = Binary_search(List1, num)

if Result != -1:
    print("Element is present at index", str(Result))
else:
    print("Element is not present in list1")




