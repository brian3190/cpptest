#include "BWString.h"

BWString::BWString(){
    reset();
}

BWString::BWSring(const char * s){
    copy_str(s);
}

BWString::BWString(const BWString & old){
    copy_str(old);
}

BWString::~BWString(){
    reset();
}

BWString::BWString(BWString && other) noexcept {
    reset();
}

long int BWString::char_find(const char & match) const {
    for (size_t i = 0; _str[i]; ++i) {
        if(_str[i] == match) 
            return i;
    }
    return -1;
}

const BWString &BWString::char_repl(const char &match, const char &repl){
    for (size_t i = 0; _str[i]; ++i) {
        if(_str[i] == match)
            _str[i] = repl;
    }
    return *this;
}

BWString BWString::substr(size_t start, size_t len){
    BWString rs;
    char *buf;
    if ((len + 1) > _bwstring_max_len || (start + len) > _bwstring_max_len)
        return rs;
    if (len > _str_len - start)
        return rs;
    if (!_str) return rs;

    buf = new char[len + 1]();
    memcpy(buf, _str + start, len);
    rs = buf;
    delete [] buf;

    return rs;
}

long BWString::find(const BWString & match) const {
    char *pos = strstr(_str, match.c_str());
    if(pos)
        return (long) (pos - _str);
    else 
        return -1;
}

const BWString BWString::replace(const BWString & match, const BWString & repl) {
    BWString rs;
    long f1 = find(match);
    if ( f1 >= 0){
        size_t pos1 = (size_t) f1;
        size_t pos2 = pos1 + match.length();
        BWString s1 = pos1 > 0 ? substr(0, pos1) : "";
        BWString s2 = substr(pos2, length() -pos2);
        rs = s1 + repl + s2;
    }
    return rs;
}   

int main(){
    
    BWString source = "this--/--is--/--a--/--string--/--to--/--be--/--split";
    BWString match = "--/--";
    auto &rs = source.split(match);

    for(int i = 0; rs[i] != NULL; ++i){
        puts(*rs[i]);
    }
}