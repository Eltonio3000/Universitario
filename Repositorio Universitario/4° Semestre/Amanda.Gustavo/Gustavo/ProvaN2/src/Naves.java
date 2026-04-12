import java.util.ArrayList;

public class Naves {
    private int idNave;

    public Naves(int idNave) {
        this.idNave = idNave;
    }

    @Override
    public String toString() {
        return "Nave [" + idNave + "]";
    }

    public int getIdNave() {
        return idNave;
    }
}
