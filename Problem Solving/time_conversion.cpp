string timeConversion(string s) {
   string h, m, seg, ap, mh;
    h = s.at(0);
    h += s.at(1);
    m = s.at(3);
    m += s.at(4);
    seg = s.at(6);
    seg += s.at(7);
    ap = s.at(8);
    ap += s.at(9);

    if(ap == "AM"){
        if(h == "12"){
            h.replace(0,2,"00");
        }
        mh = h+":"+m+":"+seg;
    }
    
    if(ap == "PM"){
        if(h != "12"){
            int hr;
            hr = stoi(h);
            hr +=12;
            h = to_string(hr);
            mh = h+":"+m+":"+seg;
        }
        else
            mh = h+":"+m+":"+seg;
    }
    return mh;
}