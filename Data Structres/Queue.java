// Stack using array in Java
class Queue {
	int arr[];
	int front, rear;
	Queue(int size) {
		arr = new int[size];
		rear = -1;
		front = -1;
	}
void enqueue(int item) {
	if(front == arr.length -1)
		System.out.println("Stack overflow");
	else {
		if(front < 0){
			front = 0;
		}
		rear++;
		arr[rear] = item;
	}
}
	int dqueue() {
		int element;
		if(front < 0) {
			System.out.println("Queue is empty");
			return 0;
			}
		else
		{	
			element = arr[front];
			if(front >= rear)
			{
				rear = -1;
				front = -1;
			}
			front++;
			return element;
		}
}
}
class testQueue {
	public static void main(String arg[]) {
		Queue s1 = new Queue(6);
		Queue s2 = new Queue(8);
		s1.enqueue(10);
		s1.enqueue(15);
		s1.enqueue(20);

		System.out.println(s1.dqueue());
		System.out.println(s1.dqueue());
		System.out.println(s1.dqueue());
		System.out.println(s1.dqueue());

		for(int i = 0; i < 6; i++)
		{
			s2.enqueue(i);
			System.out.println(s2.dqueue());
		}
}
}
		