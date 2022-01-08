class Solution {
public:
    string capitalizeTitle(string title) {
        int count = 0;
        for(int i = 0; i <= title.length(); i++) {
            if(title[i] == ' ' || i == title.length()) {
                if(count < 3) {
                    for(int j=i-count; j < i; j++) {
                        title[j] = tolower(title[j]);
                    }
                }
                else if(count > 2) {
                    title[i-count] = toupper(title[i-count]);
                    for(int j=i-count+1; j < i; j++) {
                        title[j] = tolower(title[j]);
                    }
                }
                count = 0;
            }
            else {
                count++;
            }
        }
        return title;
    }
};