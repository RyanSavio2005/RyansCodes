import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(title: 'Passing Data Example', home: HomeScreen());
  }
}

// Home Screen
class HomeScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text('Home Screen')),
      body: Center(
        child: ElevatedButton(
          onPressed: () {
            // Creating data and passing it to the DetailsScreen
            final dataToPass = 'Hello from Home Screen!';
            Navigator.push(
              context,
              MaterialPageRoute(
                builder: (context) => DetailsScreen(data: dataToPass),
              ),
            );
          },
          child: Text('Go to Details'),
        ),
      ),
    );
  }
}

// Details Screen
class DetailsScreen extends StatelessWidget {
  final String data; // Variable to receive the data

  DetailsScreen({required this.data});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text('Details Screen')),
      body: Center(
        child: Text(
          'Received Data: $data', // Displaying the received data
          style: TextStyle(fontSize: 20),
        ),
      ),
    );
  }
}
