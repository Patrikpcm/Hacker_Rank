#include <iostream>
#include <vector>
using namespace std;

int workbook(int n, int k, vector<int> arr){
    int specials = 0;
    int page = 1;
    
    for(int i=0; i<(int)arr.size(); i++){
        int chapter_problems = arr[i];
        
        int pages_chapter = chapter_problems/k;
        if (chapter_problems%k > 0)
            pages_chapter++;
        
        int page_mark = (page+pages_chapter)-1;
        int exercise=1;
       //cout << "chapter " << i << " - page " << page << " - " << page_mark << endl;
        while(page <= page_mark){
            int exerciseHigh = exercise;
            
            exerciseHigh+k <= arr[i] ? exerciseHigh +=k : exerciseHigh = arr[i] + 1;
            
            if(page>=exercise && page<exerciseHigh){
                //cout << "Os exercício entre " << exercise << " - " << exerciseHigh << " estão na pagina: " << page << ". Um deles é especial!" <<endl; 
                specials++;
            }
            
            page++;
            exercise = exerciseHigh;
        }

    }
        
    return specials;
}

int main(){
    vector<int> arr;
    int n, k;
    cin >> n >> k;
    while(n-- >0){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << workbook(n,k,arr) << endl;
    return 0;
}