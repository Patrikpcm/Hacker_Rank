void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip, tax;
    int total;
    tip = (meal_cost/100.0)*tip_percent;
    tax = (tax_percent/100.0)*meal_cost;
    total = (meal_cost + tip + tax + 0.5);
    cout << total ;
}