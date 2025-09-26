'''Ransom note'''
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        # check whether ransomNote and magainze share the same chracters
        if len(ransomNote) > len(magazine):
            return False

        # if the nubmer of the characaters in magainze is less than  ransomNote, then False
        for c in set(ransomNote):
            if magazine.count(c) < ransomNote.count(c):
                return False
                
        # else True
        return True
