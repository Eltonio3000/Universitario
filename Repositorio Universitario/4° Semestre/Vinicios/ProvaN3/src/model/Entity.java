package model;

abstract class Entity {
    protected int id;

    public int getId() {
        return id;
    }

    public abstract String toCSV();
}
