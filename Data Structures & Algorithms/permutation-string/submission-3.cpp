class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int r=s1.length()-1;
        int current_count=0;
        int desire_count=0;
//map <int,int> m1;
        for (int i=0;i<s1.length();i++){
           current_count+=s2[i];
           desire_count+=s1[i];
           //m1.insert({s1[i],0});
        }
        cout<<desire_count<<'\n';
         cout<<current_count<<'\n';
        while (r<s2.length()){
        cout<<current_count<<'\n';
        if(current_count==desire_count){
            string s="";
            for(int i=l;i<=r;i++){
              s+=s2[i];
            }
            sort(s.begin(),s.end());
            sort(s1.begin(),s1.end());
            if(s==s1){
            return true;
            }
        }
        r+=1;
        l+=1;
        current_count=current_count+s2[r]-s2[l-1];
    }
    return false;
}
};