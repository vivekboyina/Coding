class BusBooking {
public:

    vector<vector<bool>> bus;
    int time = 0;
    int mtime = 0;
    unordered_map<string,int>mp;
    
    BusBooking(int n) {
        bus.resize(n,vector<bool>(4,false));
    }
    
    void toggle(string seat) {
        int id = -1;
        if(seat[0] == 'A') id = 0;
        else if(seat[0] == 'B') id = 1;
        else if(seat[0] == 'C') id = 2;
        else if(seat[0] == 'D') id = 3;
        int num = 0;
        for(int i = 1; i < seat.length(); i++) num = num*10 + (seat[i] - '0');
        if(bus[num - 1][id] == true)
        {
            bus[num - 1][id] = false;
            time-=mp[seat];
            mtime-=1;
            mp.erase(seat);
        }
        else if(id == 0)
        {
            bus[num - 1][id] = true;
            if(bus[num - 1][1] == true)
            {
                mp[seat] = 3;
                time+=3;
            }
            else
            {
                mp[seat] = 1;
                time+=1;
            }
            mtime+=1;
        }
        else if(id == 3)
        {
            bus[num - 1][id] = true;
            if(bus[num - 1][2] == true)
            {
                mp[seat] = 3;
                time+=3;
            }
            else
            {
                mp[seat] = 1;
                time+=1;
            }
            mtime+=1;
        }
        else
        {
            bus[num - 1][id] = true;
            mp[seat] = 1;
            time+=1;
            mtime+=1;
        }
    }
    
    int getTotalTime() {
        return time;
    }
    
    int getMinTime() {
        return mtime;
    }
};