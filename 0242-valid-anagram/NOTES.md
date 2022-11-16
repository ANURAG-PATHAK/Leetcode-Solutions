**Solution with o(1) space somplexity asumming sorting won't take any extra memory**
``` C++
bool isAnagram(string s, string t) {
sort(s.begin(),s.end());
sort(t.begin(),t.end());
return s == t;
}
```
**Solution with o(n) complexity and o(n) space complexity**
```
bool isAnagram(string s, string t) {
if(s.size() != t.size())
return false;
vector<int> vec(26);
for(auto letter : s){
vec[letter - 'a']++;
}
for(auto letter : t){
vec[letter - 'a']--;
}
for(int i = 0; i < 26; i++)
if(vec[i] != 0)
return false;
return true;
}
```