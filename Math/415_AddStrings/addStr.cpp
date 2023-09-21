class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size(), d1 = 0, d2 = 0, carry = 0;
        string ans = "";

        if(num1 == "0" && num2 == "0") return "0";
        if(num1 == "0" && num2 != "0") return num2;
        if(num2 == "0" && num1 != "0") return num1;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        while(d1 < n1 || d2 < n2) {
            int value1 = d1 < n1 ? num1[d1] - '0' : 0;
            int value2 = d2 < n2 ? num2[d2] - '0' : 0;
            int value = (value1 + value2 + carry) % 10;

            carry = (value1 + value2 + carry) / 10;
            d1++;
            d2++;
            ans += char(value + '0');

            if(n1 == n2 && d1 == n1 && carry) ans += '1';
            else if(n1 > n2 && d1 == n1 && carry) ans += '1';
            else if(n1 < n2 && d2 == n2 && carry) ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
