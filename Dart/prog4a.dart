import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: ListViewExample(),
    );
  }
}

class ListViewExample extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text("Simple ListView")),
      body: ListView(
        children: [
          ListTile(
            leading: Icon(Icons.person),
            title: Text("Vladimir Putin"),
            subtitle: Text("President of Russia"),
            trailing: Icon(Icons.call),
          ),
          ListTile(
            leading: Icon(Icons.person),
            title: Text("Keir Starmer"),
            subtitle: Text("PM of UK"),
            trailing: Icon(Icons.message),
          ),
          ListTile(
            leading: Icon(Icons.person),
            title: Text("Donald Trump"),
            subtitle: Text("President of USA"),
            trailing: Icon(Icons.email),
          ),
        ],
      ),
    );
  }
}