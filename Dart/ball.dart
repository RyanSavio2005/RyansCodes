import 'package:flutter/material.dart';
import 'dart:math';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(home: MagicBallScreen());
  }
}

class MagicBallScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.black,
      body: Center(child: MagicBall()), // Add the animated ball here
    );
  }
}

// 🎱 Magic Ball Widget (Now with Color Animation and Random Answers!)
class MagicBall extends StatefulWidget {
  @override
  _MagicBallState createState() => _MagicBallState();
}

class _MagicBallState extends State<MagicBall> with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<double> _animation;
  late Animation<Color?> _colorAnimation;
  late String _answer;

  final List<String> _answers = [
    "Yes",
    "No",
    "Maybe",
    "Ask again later",
    "Definitely",
    "Absolutely not",
    "I don't know"
  ];

  final Random _random = Random();

  @override
  void initState() {
    super.initState();
    _answer = _getRandomAnswer();  // Initial random answer

    _controller = AnimationController(
      vsync: this,
      duration: Duration(seconds: 1), // Move up and down every 3 seconds
    )..repeat(reverse: true);

    _animation = Tween<double>(
      begin: 0,
      end: 200,
    ).animate(CurvedAnimation(parent: _controller, curve: Curves.easeInOut));

    _colorAnimation = ColorTween(
      begin: Colors.grey,
      end: Colors.orange,
    ).animate(_controller);
  }

  String _getRandomAnswer() {
    return _answers[_random.nextInt(_answers.length)];
  }

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        setState(() {
          _answer = _getRandomAnswer();  // Get a new random answer on tap
        });
      },
      child: AnimatedBuilder(
        animation: _controller,
        builder: (context, child) {
          return Transform.translate(
            offset: Offset(0, _animation.value - 15), // Moves up & down
            child: Container(
              width: 200,
              height: 200,
              decoration: BoxDecoration(
                shape: BoxShape.circle,
                color: _colorAnimation.value, // Change color dynamically
                boxShadow: [
                  BoxShadow(
                    color: _colorAnimation.value!.withOpacity(0.5),
                    blurRadius: 20,
                    spreadRadius: 5,
                  ),
                ],
              ),
              child: Center(
                child: Text(
                  _answer,
                  style: TextStyle(
                    fontSize: 30,
                    fontWeight: FontWeight.bold,
                    color: Colors.white,
                  ),
                  textAlign: TextAlign.center,
                ),
              ),
            ),
          );
        },
      ),
    );
  }
}
