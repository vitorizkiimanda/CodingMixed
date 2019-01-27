int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> input;
    string inputString;
    int result=0, counter=0, temp=0;

    inputString = to_string(N);

    for(int i=0; i<inputString.length();i++){
        temp = inputString[i]-'0';
        input.push_back(temp);
    }

    sort(input.begin(), input.end());

    temp = 0;
    for (vector<int>::iterator it = input.begin() ; it != input.end(); ++it){
        temp = *it * (pow(10,counter));
        result += temp;
        counter++;
    }

    return result;

}
