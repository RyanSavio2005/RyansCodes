import 'package:flutter/material.dart';

void main() => runApp(
  MaterialApp(debugShowCheckedModeBanner: false, home: CounterScreen()),
);

class CounterScreen extends StatefulWidget {
  @override
  _CounterScreenState createState() => _CounterScreenState();
}

class _CounterScreenState extends State<CounterScreen> {
  int _counter = 0;

  void _updateCounter(int value) => setState(() => _counter = value);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text("Counter with Reset")),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text('Counter Value:', style: TextStyle(fontSize: 20)),
            Text(
              '$_counter',
              style: TextStyle(fontSize: 40, fontWeight: FontWeight.bold),
            ),
            SizedBox(height: 20),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                ElevatedButton(
                  onPressed: () => _updateCounter(_counter + 1),
                  child: Text("Increment"),
                ),
                SizedBox(width: 10),
                ElevatedButton(
                  onPressed: () => _updateCounter(0),
                  style: ElevatedButton.styleFrom(backgroundColor: Colors.lightGreenAccent),
                  child: Text("Reset", style: TextStyle(color: Colors.redAccent)),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}
