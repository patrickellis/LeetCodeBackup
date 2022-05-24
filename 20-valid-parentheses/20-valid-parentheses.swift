class Solution {
    func getComplement(_ c: Character) -> Character {
        print("called with element ", c)
        switch(c){
            case ")":
                return "("
            case "]":
                return "["
            default:
                return "{"
        }
    }
    
    func isValid(_ s: String) -> Bool {
        // stack - push (, {, and [
        // pop ),}, and ]
        // if popping, we check that the complementary
        // brace is present on top of the stack
        // otherwise return false
        if(s.count % 2 == 1){ return false }
        var stack = [Character]()
        for brace in s {
            if(["(","[","{"].contains(brace)){
                print(brace, " found in opening braces list")
                stack.append(brace)
            }
            else{
                var complement = getComplement(brace)
                if(stack.count == 0 || stack[stack.count-1] != complement){
                    print("triggered this condition for element ", brace, " with complement ", complement)
                    return false
                }
                stack.removeLast()
            }
        }
        for char in stack{
            print(char)    
        }
        return stack.count == 0;
    }
}