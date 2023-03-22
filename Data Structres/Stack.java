// Stack using array in Java
class Stack {
	int arr[];
	int top;
	Stack (int size) {
		arr = new int[size];
		top = -1;
}
void push(int item) {
	if(top == arr.length -1)
		System.out.println("Stack overflow");
	else {
		top++;
		arr[top] = item;
}
}
	int pop() {
		if(top < 0) {
			System.out.println("Stack underflow");
			return 0;
		}
		else
			return(arr[top--]);
		}
}
class testStack {
	public static void main(String arg[]) {
		Stack s1 = new Stack(6);
		Stack s2 = new Stack(8);
		s1.push(10);
		s1.push(15);
		s1.push(20);

		System.out.println(s1.pop());
		System.out.println(s1.pop());
		System.out.println(s1.pop());
		System.out.println(s1.pop());

		for(int i = 0; i < 6; i++)
		{
			s2.push(i);
			System.out.println(s2.pop());
		}
}
}
		