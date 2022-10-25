// template <typename T> -> template <class T> 같은 의미 -> 함수 템플릿

/*
template <typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    cout<< Add<int>(15, 20)<<end1; // -> int Add<int> (int num1, int num2){} 로 템플릿 함수가 생성되는 것.
    cout<< Add<double>(15.2,20.4)<<end1;

    return 0;
}
*/

//