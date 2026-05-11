class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        //if an email has a period, it goes to the same address without the period
        //if an email has a + sign, it goes to the address before the plus sign

        //given an array of strings = emails, one email is sent to each email
        //return the num of valid email addresses

        //look through the array and store email addresses together such that
        //the emails don't have periods and + signs and everything after the + is deleted
        //then count the number of valid emails in the new list and output that

        //list of valid emails
        unordered_set<string> uniqueEmails;

        for (int i = 0; i < emails.size(); i++) {
            string clean = "";
            bool ignore = false;

            for (int j = 0; j < emails[i].size(); j++) {
                char c = emails[i][j];

                if (c == '@') {
                    clean += emails[i].substr(j);
                    break;
                }

                if (c == '+') {
                    ignore = true;
                }

                if (!ignore && c != '.') {
                    clean += c;
                }
            }

            uniqueEmails.insert(clean);
        }

        return uniqueEmails.size();

//uh im coming back to this/
    }};