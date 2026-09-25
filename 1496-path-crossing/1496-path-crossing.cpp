class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0; // east and west
        int y=0; // north and south
        set<pair<int, int>> present;
        present.insert({x,y});
        for(auto ch : path) {
            if(ch == 'N') y++;
            else if(ch == 'S') y--;
            else if(ch == 'E') x++;
            else if(ch == 'W') x--;

            if(present.count({x,y})) return true;
            present.insert({x,y});
        }
        return false;
    }
};