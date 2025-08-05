class Solution:
  def twoSum(self, nums, target):
      final_lst = []
      found = False
      elem1 = 0
      elem2 = 0
      for i in range(0,len(nums)): # 0,1,2
          elem1 = i
          for j in range(0,len(nums)): # 0,1,2
              elem2 = j
              if elem1==elem2:
                  continue
              if nums[elem1]+nums[elem2] == target:
                  final_lst.append(elem1)
                  final_lst.append(elem2)
                  found = True
                  break
          if found:
              break
      return final_lst

# sol = Solution()
# result = sol.twoSum([3,2,4],6)
# print(result)
