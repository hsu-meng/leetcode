class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        morseList = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        index = 0
        for i in words:
            replace = ""
            for j in i:
                replace += morseList[ord(j) - 97]
            words[index] = replace
            index += 1
        
        words = set(words)
        return len(words)