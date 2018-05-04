
public class ManejaPersonaViviente {
	public static void main(String[] args){
		PersonaViviente persona1;
		FechaNacimiento nuevaFecha;
		nuevaFecha=new FechaNacimiento(19,4,2018);
		persona1=new PersonaViviente("Hulio","Perez","Lopez",nuevaFecha);
		System.out.println("Me llamo "+persona1.getNombre());
	}

}
