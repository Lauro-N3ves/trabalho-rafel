import java.util.ArrayList;

class Livro {
    String titulo;
    String autor;
    int anoPublicacao;

    public Livro(String titulo, String autor, int anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Livro> estante = new ArrayList<>();

        estante.add(new Livro("Duna", "Frank Herbert", 1965));
        estante.add(new Livro("1984", "George Orwell", 1949));
        estante.add(new Livro("Fahrenheit 451", "Ray Bradbury", 1953));

        System.out.println("Titulos dos livros na estante:");
        for (Livro livro : estante) {
            System.out.println(livro.titulo);
        }
    }
}
