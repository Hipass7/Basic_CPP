#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum class TextType { Plain, Fancy, Fixed };
class AltText {
    TextType type;
    string text;
    string left_bracket;
    string right_bracket;
    string connector;
public:
    AltText(TextType type, const string& t);
    AltText(TextType type, const string& t, const string& left, const string& right, const string& conn);
    AltText(TextType type);
    string get() const;
    void append(const string& extra);
}; // 여기까지 헤더파일 분리 가능

AltText::AltText(TextType type, const string& t) : type(type), text(t) {}
AltText::AltText(TextType type, const string& t, const string& left, const string& right, const string& conn) : type(type), text(t), left_bracket(left), right_bracket(right), connector(conn) {}
AltText::AltText(TextType type) : type(type), text("FIXED") {}
string AltText::get() const{
    switch (type) {
        case TextType::Plain:
        case TextType::Fixed:
            return text;
        case TextType::Fancy:
            return left_bracket + text + right_bracket;
        default:
            return "UNKNOWN TYPE";
    }
}

void AltText::append(const string& extra){
    switch (type) {
        case TextType::Plain:
            text += extra;
            break;
        case TextType::Fancy:
            text += connector + extra;
            break;
        case TextType::Fixed:
            break;
    }
}

//int main(){
//    vector<AltText> texts;
//    texts.push_back({TextType::Plain, "Wow"});
//    texts.push_back({TextType::Fancy, "Wee", "[", "]", "-"});
//    texts.push_back({TextType::Fixed});
//    texts.push_back({TextType::Fancy, "Whoa", ":", ":", ":"});
//    for (const auto& t : texts)
//        cout << t.get() << endl;
//    for (auto& t : texts){
//        t.append("A");
//        t.append("B");
//    }
//    for (const auto& t : texts)
//        cout << t.get() << endl;
//}
