 // static_cast 예외적 형변환 (많이 허용해줌 그래서 많이 사용하면 안됨) -> double result = (doulbe)20/3 ; -> double result = dynamic_cast<double>(20)/3;
 // dynamic_cast 예외적 형변환 (안전성이 더 높음)
 // const_cast 예외적 형변환(const를 일시적으로 품)
 // reinterpret_cast (상관없는 자료형으로 형변환)