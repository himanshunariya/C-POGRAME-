# a = [1,3,5,10,12,14,18,20,21,25]

# def search(a, start, end, target):
#     mid = (end + start) // 2  
#     if a[mid] == target:
#         return mid
#     if target > a[mid]:
#         return search(a, mid +1,end,target)
#     if target < a[mid]:
#         return search(a, start,mid-1, target)
#     else:
#         print("not found")
#     return -1 
# ans = search(a=0,a) 
# #ans = search(a, 0, len(a) - 1,55)
# print(ans)
#a = [1,3,5,10,12,14,18,20,21,25]
# def search(a, start, end, target):
#     mid = (end + start) // 2  
#     if a[mid] == target:
#         return mid
#     if target > a[mid]:
#         return search(a, mid + 1, end, target)
#     if target < a[mid]:
#         return search(a, start, mid - 1, target)
#     # else:
#     #     print("not found")
#     return -1 
# target = 38  
# ans = search(a, 0, len(a) - 1, target)
# print(ans)





#first index , last index, frixuncey in binary h.w


a= [1,3,4,8,6,5,2]
def rotate_array(arr, k):
    n = len(arr)
    k = k % n  # Handle cases where k is larger than the array size
    return arr[-k:] + arr[:-k]

# Example usage:
a = [1, 3, 4, 8, 6, 5, 2]
rotated_array = rotate_array(a, 2)
print(rotated_array)
with out dictonarey 
