def merge_sort(array_ds, left, right):
    
    if left < right:
        # get the absolute middle
        middle = (left + right) // 2

        # perform recursion on both halves
        merge_sort(array_ds, left, middle)
        merge_sort(array_ds, middle + 1, right)

        merge(array_ds, left, middle, right)
        
        return array_ds


def merge(array_ds, left, middle, right):
    
    # initialize 3 pointers to 0 
    i,j,k = 0,0,left
    
    # initialize the halves of the arrays
    leftArray = array_ds[left:middle + 1]
    rightArray = array_ds[middle + 1:right + 1]

    # merge the arrays back together
    while i < len(leftArray) and  j < len(rightArray):
        if leftArray[i] <= rightArray[j]:
            # modify array data structure in place
            array_ds[k] = leftArray[i]
            i += 1
        else:
            array_ds[k] = rightArray[j]
            j += 1
        # move the pointer
        k += 1
        
        
    # append the remaining elements
    while i < len(leftArray):
        array_ds[k] = leftArray[i]
        i += 1
        k += 1
        
    while j < len(rightArray):
        array_ds[k] = rightArray[j]
        j += 1
        k += 1
        
    return array_ds

def main():
    array = [5,7,1,2,5,6,3,2,1,1,8,2]
    
    # O(n log n) time space
    print(merge_sort(array, 0, len(array)))
    
if __name__ == "__main__":
    main()

