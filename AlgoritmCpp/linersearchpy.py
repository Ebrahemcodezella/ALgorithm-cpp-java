# malti keys 
def linersearch(arr,key):
    flage =True
    for i in range(len(arr)):
        if key == arr[i]:
            print(f"fonud: {key} in index: {i}")
            flage=False
            continue
    if flage:
        print("element not found")
    



linersearch([1,2,3,4,4],4)

# one key 


# def linear_search(arr, key):
#     if key in arr:
#         print(f"Found: {key} at index: {arr.index(key)}")
#     else:
#         print("Element not found")

# # Example usage
# linear_search([1, 2, 3, 4,4], 4)
