class Solution:
    def lemonadeChange(self, bills: list[int]) -> bool:
        five, ten = 0,0
        for b in bills:
            if b == 5:
                five+=1
            if b == 10:
                ten+=1
            change = b-5
            if change == 5:
                if five >0:
                    five-=1
                else:
                    return False
            if change == 15:
                if ten>0 and five>0:
                    ten-=1
                    five-=1
                elif five >2:
                    five -=3
                else:
                    return False
        return True
