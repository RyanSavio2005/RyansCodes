package important;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

public class Guesser extends JFrame {
    private JTextField guessField;
    private JTextArea resultArea;
    private JLabel imageLabel;
    private int randomNumber;
    private int attempts;
    private ImageIcon happy;
    private ImageIcon angry;

    public  Guesser() {
        setTitle("Number Guessing Game");
        setSize(700, 800);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());


        happy = new ImageIcon(getClass().getResource("/important/d.jpg"));
        angry = new ImageIcon(getClass().getResource("/important/g.jpg"));


        JPanel inputPanel = new JPanel();
        inputPanel.add(new JLabel("Enter any number (1-10):"));
        guessField = new JTextField(10);
        inputPanel.add(guessField);
        JButton guessButton = new JButton("Guess");
        inputPanel.add(guessButton);
        JButton resetButton = new JButton("Reset");
        inputPanel.add(resetButton);

        add(inputPanel, BorderLayout.NORTH);


        resultArea = new JTextArea(8, 30);
        resultArea.setEditable(false);
        add(new JScrollPane(resultArea), BorderLayout.CENTER);


        imageLabel = new JLabel();
        imageLabel.setHorizontalAlignment(SwingConstants.CENTER);
        add(imageLabel, BorderLayout.SOUTH);


        guessButton.addActionListener(new GuessButtonListener());
        resetButton.addActionListener(new ResetButtonListener());

        resetGame();
    }

    private void resetGame() {
        Random rand = new Random();
        randomNumber = rand.nextInt(10) + 1;
        attempts = 0;
        resultArea.setText("");
        guessField.setText("");
        imageLabel.setIcon(null);
    }

    private class GuessButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            try {
                int guess = Integer.parseInt(guessField.getText());
                attempts++;
                if (guess < 1 || guess > 10) {
                    resultArea.append("Please guess a number between 1 and 10.\n");
                    imageLabel.setIcon(angry);
                    resultArea = new JTextArea(5, 30);
                } else if (guess < randomNumber) {
                    resultArea.append("Too low! Try again.\n");
                    imageLabel.setIcon(angry);
                    resultArea = new JTextArea(5, 30);
                } else if (guess > randomNumber) {
                    resultArea.append("Too high! Try again.\n");
                    imageLabel.setIcon(angry);
                    resultArea = new JTextArea(5, 30);
                } else {
                    resultArea.append("Congratulations! You've guessed the number in " + attempts + " attempts.\n");
                    imageLabel.setIcon(happy);
                    resultArea = new JTextArea(5, 30);
                }
            } catch (NumberFormatException ex) {
                resultArea.append("Invalid input! Please enter a number.\n");
                imageLabel.setIcon(angry);
                resultArea = new JTextArea(5, 30);
            }
        }
    }

    private class ResetButtonListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            resetGame();
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            Guesser game = new Guesser();
            game.setVisible(true);
        });
    }
}