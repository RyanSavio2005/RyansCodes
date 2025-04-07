import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Fundamental Widgets Example',
      home: Scaffold(
        appBar: AppBar(title: Text('Text & Image Example')),
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text(
                'Hello, Flutter!',
                style: TextStyle(fontSize: 24, color: Colors.blue),
              ),
              SizedBox(height: 20),
              Image.asset(
                'Assets/pic2.jpg',
                width: 300,
                height: 300,
                fit: BoxFit.cover,
              ),
            ],
          ),
        ),
      ),
    );
  }
}