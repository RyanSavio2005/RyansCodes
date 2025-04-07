import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Container Example',
      home: Scaffold(
        appBar: AppBar(title: Text('Container Example')),
        body: Center(
          child: Container(
            width: 300,
            height: 400,
            padding: EdgeInsets.all(10),
            margin: EdgeInsets.all(150),
            decoration: BoxDecoration(
              color: Colors.lightGreen,
              borderRadius: BorderRadius.circular(12),
              boxShadow: [
                BoxShadow(
                  color: Colors.redAccent, // Darker shadow for better visibility
                  blurRadius: 45, // Increase blur radius
                  spreadRadius: 7, // Adds more spread to the shadow
                  offset: Offset(5, 5),
                ),
              ],
            ),
            child: Center(
              child: Text(
                'Hello, Container!',
                style: TextStyle(color: Colors.white, fontSize: 18),
                textAlign: TextAlign.center,
              ),
            ),
          ),
        ),
      ),
    );
  }
}