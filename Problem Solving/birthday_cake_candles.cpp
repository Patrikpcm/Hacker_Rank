int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end(), greater<int>());
    vector<int>::iterator it;
    int v = 1;
    it = candles.begin();
    while(true){
        ++it;
        if (*candles.begin() == *it)
            v++;
        else
            break;
    }
    return v;    
}