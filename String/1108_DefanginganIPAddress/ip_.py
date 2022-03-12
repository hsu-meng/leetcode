# Another rather simple approach would be to use the perfect one-liner solution
class Solution:
    def defangIPaddr(self, address: str) -> str:
        address = address.replace('.', '[.]')
        return address