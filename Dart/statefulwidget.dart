import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: MagicButtonScreen(),
    );
  }
}

class MagicButtonScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.blueGrey[900], // Dark background
      appBar: AppBar(title: Text("Magic Button")),
      body: Center(child: MagicButton()), // Add the custom widget here
    );
  }
}

// 🎩 Magic Button Widget (Stateful because it changes)
class MagicButton extends StatefulWidget {
  @override
  _MagicButtonState createState() => _MagicButtonState();
}

class _MagicButtonState extends State<MagicButton> {
  bool isClicked = false;

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        setState(() {
          isClicked = !isClicked; // Toggle the button color
        });
      },
      child: AnimatedContainer(
        duration: Duration(milliseconds: 300), // Animation time
        width: isClicked ? 120 : 100, // Grow on click
        height: isClicked ? 60 : 50,
        decoration: BoxDecoration(
          color: isClicked ? Colors.orange : Colors.purple, // Change color
          borderRadius: BorderRadius.circular(20),
        ),
        child: Center(
          child: Text(
            isClicked ? "Clicked!" : "Click Me!",
            style: TextStyle(color: Colors.white, fontSize: 18),
          ),
        ),
      ),
    );
  }
}