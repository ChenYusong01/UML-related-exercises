package UML;
class family{
	void message() {
		System.out.println("大家好啊!");
	}
}
class Dad extends family{
	void message() {
		System.out.println("我是爸爸");
	}
}
class Mom extends family{
	 void message() {
		 System.out.println("我是妈妈");
	 }
}
public class demo1 {
	public static void main(String args[]) {
		family family;
		family = new Dad();
		family.message();
		family = new Mom();
		family.message();
	}

}
