package UML;
class family{
	void message() {
		System.out.println("��Һð�!");
	}
}
class Dad extends family{
	void message() {
		System.out.println("���ǰְ�");
	}
}
class Mom extends family{
	 void message() {
		 System.out.println("��������");
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
