b = [1, 3, 5, 8, 8, 8, 8, 10, 12, 14, 18, 20, 21, 25]
def search(a, start, end, target):
    mid = (end + start) // 2
    if a[mid] == target:
        return mid
    if a[mid] < target:
        return search(a, mid + 1, end, target)
    if a[mid] > target:
        return search(a, start, mid - 1, target)
target = 8
start = 0
end = len(b) - 1  
ans = search(b, start, end, target)
print(ans)
#-------------------------------------------------------------------------------
b = [1, 3, 5, 8, 8, 8, 8, 10, 12, 14, 18, 20, 21, 25]
def search(a, start, end, target):
    mid = (end + start) // 2
    if a[mid] == target:
        return mid
    if a[mid] < target:
        return search(a, mid + 1, end, target)
    if a[mid] > target:
        return search(a, start, mid - 1, target)
target = 8
start = 0
end = len(b) 
ans = search(b, start, end, target)
print(ans)
#------------------------------------------------------------------------------
b = [1, 3, 5, 8, 8, 8, 8, 10, 12, 14, 18, 20, 21, 25]
def search_first(a, start, end, target):
    if start > end:
        return -1  
    mid = (end + start) // 2
    if a[mid] == target and (mid == start or a[mid - 1] < target):
        return mid
    if a[mid] < target:
        return search_first(a, mid + 1, end, target)
    return search_first(a, start, mid - 1, target)
def search_last(a, start, end, target):
    if start > end:
        return -1  
    mid = (end + start) // 2
    if a[mid] == target and (mid == end or a[mid + 1] > target):
        return mid
    if a[mid] > target:
        return search_last(a, start, mid - 1, target)
    return search_last(a, mid + 1, end, target)
def search(a, start, end, target):
    first = search_first(a, start, end, target)
    if first == -1:
        return 0  
    last= search_last(a, start, end, target)
    return last - first + 1
target = 8
start = 0
end = len(b) - 1
frequency = search(b, start, end, target)
print("8 is:",frequency)
#-------------------------------------------------------------------------------

