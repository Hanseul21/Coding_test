


// 현재 시간초과로 실패

#include <iostream>

using namespace std;

int get_head(int* arr, int n1){
	int num = n1;

	while(arr[num] != num)
		num = arr[num];

	return num;
}
int uni(int* arr, int n1, int n2){
	int head1 = get_head(arr, n1);

	arr[n2] = head1;
	return 0;
}

int find(int* arr, int n1, int n2){
	if (get_head(arr, n1) == get_head(arr, n2)){
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}
int main(){
	int n, m, operation, n1, n2;
	cin>>n>>m;

	int *arr = new int[n+1];
	for(int i = 0;i<=n;i++)
		arr[i] = i;

	for(int i=0;i<m;i++){
		cin>>operation>>n1>>n2;
		if (operation == 0)
			uni(arr, n1, n2);
		else
			find(arr, n1, n2);
	}

	return 0;
}
