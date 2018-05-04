
public class PersonaViviente {
	private String nombre;
	private String apellido;
	private String apellido2;
	private FechaNacimiento nacimiento;
	public PersonaViviente(String nombre, String apellido, String apellido2,
			FechaNacimiento nacimiento) {

		this.nombre = nombre;
		this.apellido = apellido;
		this.apellido2 = apellido2;
		this.nacimiento = nacimiento;
	}
	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	public String getApellido() {
		return apellido;
	}
	public void setApellido(String apellido) {
		this.apellido = apellido;
	}
	public String getApellido2() {
		return apellido2;
	}
	public void setApellido2(String apellido2) {
		this.apellido2 = apellido2;
	}
	public FechaNacimiento getNacimiento() {
		return nacimiento;
	}
	public void setNacimiento(FechaNacimiento nacimiento) {
		this.nacimiento = nacimiento;
	}

}
