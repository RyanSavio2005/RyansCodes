import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(title: Text("Profile Card Example")),
        body: Center(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              // Profile Image
              CircleAvatar(
                radius: 50,
                backgroundImage: AssetImage(
                  'Assets/pic2.jpg',
                ), // Replace with an actual image
              ),
              SizedBox(height: 10), // Space between image and text
              // Name Text
              Text(
                "Ryan",
                style: TextStyle(fontSize: 22, fontWeight: FontWeight.bold),
              ),

              // Role Text
              Text(
                "App Developer",
                style: TextStyle(fontSize: 16, color: Colors.grey),
              ),

              SizedBox(height: 20), // Space before the row
              // Row with Contact Details
              Row(
                mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                children: [
                  Column(
                    children: [
                      Icon(Icons.phone, color: Colors.blue),
                      Text("Call"),
                    ],
                  ),
                  Column(
                    children: [
                      Icon(Icons.email, color: Colors.red),
                      Text("Email"),
                    ],
                  ),
                  Column(
                    children: [
                      Icon(Icons.location_on, color: Colors.green),
                      Text("Location"),
                    ],
                  ),
                ],
              ),
            ],
          ),
        ),
      ),
    );
  }
}