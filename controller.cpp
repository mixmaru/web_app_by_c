#include<iostream>
#include<cstdlib>
#include<string>

#include "boost/shared_array.hpp"

using namespace std;
using namespace boost;

//to get post data
const bool getPostedData(string& data){
	//環境変数から送られたデータサイズを取得する
	char *str = getenv("CONTENT_LENGTH");
	if( str == NULL ){
		return false;
	}
	int length = atol(str) + 1;
}

int main(){
	//httpリクエストを解析
	//mysqlからリクエスト条件にあう商品データを取得する
	//出力htmlを作成
	//htmlヘッダを作成
	//htmlヘッダとhtmlをまとめて出力する。
	return 0;
}
