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
        if(s.count % 2 == 1){ return false }
        var stack = [Character]()
        for brace in s {
            if(["(","[","{"].contains(brace)){                
                stack.append(brace)
            }
            else{
                var complement = getComplement(brace)
                if(stack.count == 0 || stack[stack.count-1] != complement){                    
                    return false
                }
                stack.removeLast()
            }
        }
        return stack.count == 0;
    }
}