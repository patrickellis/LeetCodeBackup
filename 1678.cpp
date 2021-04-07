class Solution {
public:
    string interpret(string command) {
        while(command.find("()")!=string::npos){
            auto it = command.find("()");
            command.replace(it,2,"o");
        }
        while(command.find("(al)")!=string::npos){
            auto it = command.find("(al)");
            command.replace(it,4,"al");
        }
        return command;
    }
};