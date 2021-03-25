    map<int,int> m;
        
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        int check=size/2;
        int answer=-1;
        
        for(auto i=m.begin();i!=m.end();i++)
        {
            if(((*i).second)>size)
            answer=(*i).first;
        }
        
        return an;