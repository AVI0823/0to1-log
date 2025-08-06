class Solution:
    def romanToInt(self, s: str) -> int:
        intgr = 0
        int_lst = []
        rom_dict = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }
        for i in s:
            int_lst.append(rom_dict[i])
        i = 0
        while i < len(int_lst):
            if i < len(int_lst) - 1:
                if int_lst[i] >= int_lst[i + 1]:
                    intgr = intgr + int_lst[i]
                elif int_lst[i] < int_lst[i + 1]:
                    intgr = intgr - int_lst[i]
            else:
                if int_lst[i] >= int_lst[i]:
                    intgr = intgr + int_lst[i]
                elif int_lst[i] < int_lst[i]:
                    intgr = intgr - int_lst[i]
            i += 1
        return intgr

# sol = Solution()
# result = sol.romanToInt("XIV")
# print(result)
