static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

    bool judgeCircle(string moves) {
        int tab[86]={};
		for(int i=0;moves[i];i++) tab[moves[i]]++;
		if(tab[85]-tab[68]==0 && tab[76]-tab[82]==0) return true;
		return false;
    }
int main(){
	cout << judgeCircle("UD");
	return 0;
}
