#include <bits/stdc++.h>
using namespace std;

void test(vector<int> *v, int arr[])
{
    (*v)[0] = 0;
    arr[0] = 0;
    cout << *arr << endl;
}
void test2(string s)
{
    s[0] = '1';
}

int main()
{
    // char a[100] = {'a', 's', 'a', 's'};
    // cout << a;
    // vector<int> v = {10, 10, -10, -10, -10};
    // cout << v[0];
    // int n = v.size();
    // int cs =0;
    // int ms=0;
    // for(int i=0;i<n;i++){
    //     cout<<cs<<"|"<<v[i]<<endl;
    //     cs = cs+v[i];
    //     if(cs>0)
    //     {
    //         ms = max(ms,cs);
    //     }
    // }
    // cout<<ms;
    // char a[100];
    // cin >> a;
    // cout << a;
    // char b[100];
    // cin.getline(b, 100);
    // string a = "abc";
    // cout << a.length() << a.size();
    // char a[100] = "zzxz";
    // char b;
    // cin >> b;
    // cout << b;
    // cout << a << strlen(a) << sizeof(a);
    // char b = cin.get();
    // cout << b;
    // char s[100];
    // cin.getline(s, 100, ',');
    // cout << s;
    // cin >> s;
    // cout << s;
    // string s("hwllo");
    // getline(cin, s, '/');
    // cout << s;
    // int a = 5, b = 10, c = 15;
    // int *arr[] = {&a, &b, &c};
    // cout << arr[1];

    // int a[10], n, i;
    // cout << "Enter the number to convert: ";
    // cin >> n;
    // for (i = 0; n > 0; i++)
    // {
    //     a[i] = n % 2;
    //     n = n / 2;
    // }
    // cout << "Binary of the given number= ";
    // for (i = i - 1; i >= 0; i--)
    // {
    //     cout << a[i];
    // }
    // unordered_map<int, int>
    //     map;
    // map[1] = 2;
    // cout << map[2];

    // vector<int> v = {1, 1, 1};
    // int arr[] = {1, 1, 1};
    // test(&v, arr + 2);
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // for (int i : arr)
    // {
    //     cout << i << " ";
    // }
    // // cout << 3 / 2;

    // int arr[10];
    // cout << arr[0];

    // char a[3] = {'\0'};
    // cout << a[1];
    // string word = "captian";
    // test2(word);
    // cout << word;

    // int arr[][2] = {{0, 0}, {0}};
    // cout << sizeof(arr);

    // int k = 0, n = 0;
    // if (true)
    //     k = 3, n = 6, cout << "hi";
    // else if (false)
    //     k = 5, n = 9;

    // cout << k << " "
    //      << " " << n;

    // string s = "ilikesamsungmobile";
    // cout << s.substr(0, 17);

    // vector<vector<int>> v;
    // v.push_back({});
    // v.push_back({1});
    // for (auto i : v)
    // {
    //     for (auto j : i)
    //         cout << j << " ";

    //     cout << endl;
    // }

    // vector<vector<int>> v;
    // vector<int> c;

    // cout << v.size();
    // cout << v[0].size();
    // for (auto i : v)
    // {
    //     for (auto j : i)
    //         cout << "d" << j << "d";

    //     cout << endl;
    // }

    // char a[] = "abc";
    // char *b = new char[strlen(a) + 1];
    int a = 10;
    int *b = &a;
    int *c = b;
    int *d = c;

    cout << d << endl
         << c << endl
         << b;
    return 0;
}