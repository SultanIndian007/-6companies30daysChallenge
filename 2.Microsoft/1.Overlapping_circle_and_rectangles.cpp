class Solution {
public:
    int fnc(int a1, int a2, int x){
        if(x<a1) return abs(a1-x);
        if(x>a2) return abs(x-a2);
        return 0;
    }
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int a = fnc(x1,x2,xCenter);
        int b = fnc(y1,y2,yCenter);

        return (a*a+b*b) <= (radius * radius);
    }
};