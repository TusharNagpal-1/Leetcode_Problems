class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> dup = words;

        // Convert all words to lowercase
        for(int i = 0; i < words.size(); i++){
            string d = "";
            for(int j = 0; j < words[i].size(); j++){
                if(isupper(words[i][j])){
                    d += tolower(words[i][j]);
                } else {
                    d += words[i][j];
                }
            }
            words[i] = d;
        }

        vector<string> rows = {"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string> ans;

        for(int i = 0; i < words.size(); i++){
            string w = words[i];

            for(int r = 0; r < 3; r++){
                bool ok = true;

                for(char ch : w){
                    if(rows[r].find(ch) == string::npos){
                        ok = false;
                        break;
                    }
                }

                if(ok){
                    ans.push_back(dup[i]); // original word
                    break;
                }
            }
        }

        return ans;
    }
};