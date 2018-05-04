
public class cole extends EdifixioJava{
	private int numeroAulas;
	private boolean pabellon;
	public cole(String direccion, String codigoPostal, float altura,
			boolean calefaccionCenral) {
		super(direccion, codigoPostal, altura, calefaccionCenral);
		this.numeroAulas=numeroAulas;
		// TODO Auto-generated constructor stub
	}
	public int getCapacidadColegio(){
		int capacidadColegio;
		capacidadColegio=numeroAulas*30;
		return(capacidadColegio);
	}


}
