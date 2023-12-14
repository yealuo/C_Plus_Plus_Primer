#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include<fstream>
using namespace std;

class StrBlobPtr;

class StrBlob {
    using size_type = string::size_type;

   private:
    shared_ptr<vector<string>> data;
    void check(size_type, const string&) const;

   public:
    friend class StrBlobPtr;
    StrBlob() : data(make_shared<vector<string>>()){};
    StrBlob(initializer_list<string> il)
        : data(make_shared<vector<string>>(il)){};
    // 返回类成员状态
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    // 增加和删除元素
    void push_back(const string& str) { data->push_back(str); }
    void pop_back();
    // 元素访问
    string& front();
    string& back();
    // const重载
    string& front() const;
    string& back() const;
    // 返回自身首元素与尾后StrBlobPtr
    StrBlobPtr begin();
    StrBlobPtr end();
};

void StrBlob::check(size_type i, const string& msg) const {
    if (i >= data->size()) {
        throw out_of_range(msg);
    }
}

string& StrBlob::front() {
    check(0, "StrBlob为空！");
    return data->front();
}

string& StrBlob::back() {
    check(0, "StrBlob为空！");
    return data->back();
}

string& StrBlob::front() const {
    check(0, "StrBlob为空！");
    return data->front();
}

string& StrBlob::back() const {
    check(0, "StrBlob为空！");
    return data->back();
}

void StrBlob::pop_back() {
    check(0, "不能Pop一个空的StrBlob!");
    data->pop_back();
}

class StrBlobPtr {
   private:
    shared_ptr<vector<string>> check(size_t, const string&) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;  // 在数组中的当前位置

   public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob& a, size_t pos = 0) : wptr(a.data), curr(pos) {}
    size_t getCurr()const{return curr;}
    string& deref() const;
    StrBlobPtr& incr();
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i,
                                             const string& msg) const {
    auto ret = wptr.lock();

    if (!ret) {
        throw runtime_error("当前StrBlobPtr未绑定合法的StrBlob！");
    }

    if (i >= ret->size()) {
        throw runtime_error(msg);
    }

    return ret;
}

string& StrBlobPtr::deref() const {
    auto p = check(curr, "curr超出范围！");

    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "curr已到达末尾或超出范围！");
    ++curr;

    return *this;
}

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

void _12_21(){
    const string path("/home/yeluo/文档/C++/C_Plus_Plus_Primer/12.1/test");
    ifstream ifs(path);
    string line;
    StrBlob strb;

    if(ifs){
        while(getline(ifs,line)){
            strb.push_back(line);
        }
    }

    for(auto begin=strb.begin(),end=strb.end();begin.getCurr()!=end.getCurr();begin.incr()){
        cout<<begin.deref()<<endl;
    }
}

int main() {
    _12_21();
    return 0;
}