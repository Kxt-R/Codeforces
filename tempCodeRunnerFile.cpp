deque<int> v;
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0){
            if(n/i==i)v.push_front(i);
            else{
                v.push_back(n/i);
                v.push_front(i);
            }
        }
    }