#include <iostream>
#include <string>

using namespace std;

class Message {
    string msg;
    int cnt;
public:
    Message(string s) : msg(s), cnt(0) {}
    void Show() {
        cout << msg << ":" << cnt++ << endl;
    }
};

class TextMessage {
public:
    virtual void Draw(){
        cout << "Text Draw" << endl;
    }
};

class Text0 {
    Message msg;
public:
    Text0(Message s) : msg(s) {}
    void Draw() {
        msg.Show();
    }
};

class Text1 : public TextMessage {
    Message* pMsg;
public:
    Text1(Message* p) : pMsg(p) {}
    void Draw() override {
        pMsg->Show();
    }
};

class Text2 : public TextMessage, public Message {
public:
    Text2(string s) : Message(s) {}
    void Draw() override {
        Show();
    }
};

int main() {
    Message Msg("Message0");
    Text0* p0 = new Text0(Msg);
    p0->Draw(); // message0 : 0
    Msg.Show(); // message0 : 1 XX 두 개 다른거이므로 0
    
    Message* pMsg = new Message("Message1");
    TextMessage *p1 = new Text1(pMsg);
    p1->Draw(); // message1 : 0
    pMsg->Show(); // message1 : 1
    
    TextMessage* p2 = new Text2("Message2");
    p2->Draw(); // message2 : 0
    Message *p3 = dynamic_cast<Message *>(p2);
    if (p3 != nullptr) p3->Show(); // message2 : 1
}
