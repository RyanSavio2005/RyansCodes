import 'package:flutter/material.dart';
import 'package:math_expressions/math_expressions.dart';

void main() {
  runApp(CalculatorApp());
}

class CalculatorApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Calculator',
      theme: ThemeData(primarySwatch: Colors.blue),
      home: CalculatorScreen(),
    );
  }
}

class CalculatorScreen extends StatefulWidget {
  @override
  _CalculatorScreenState createState() => _CalculatorScreenState();
}

class _CalculatorScreenState extends State<CalculatorScreen> {
  String _input = '';
  String _result = '0';

  // Handle button press events
  void _onButtonPressed(String value) {
    setState(() {
      if (value == 'AC') {
        _input = ''; // Reset the input
        _result = '0'; // Reset the result
      } else if (value == '=') {
        try {
          _result = _evaluateExpression(_input); // Evaluate expression
        } catch (e) {
          _result = 'Error'; // Error in evaluation
        }
      } else {
        _input += value; // Add character to the input
      }
    });
  }

  // Evaluate the mathematical expression
  String _evaluateExpression(String expression) {
    try {
      Parser parser = Parser();
      Expression exp = parser.parse(expression);
      ContextModel contextModel = ContextModel();
      double eval = exp.evaluate(EvaluationType.REAL, contextModel);
      // Format the result to a fixed number of decimal places
      return eval.toStringAsFixed(4);
    } catch (e) {
      return 'Error'; // In case of any error, return 'Error'
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: Text('Calculator')),
      body: Column(
        mainAxisAlignment: MainAxisAlignment.end,
        children: [
          Container(
            padding: EdgeInsets.all(20), // Adjust padding
            alignment: Alignment.centerRight,
            child: Column(
              crossAxisAlignment: CrossAxisAlignment.end,
              children: [
                Text(
                  _input,
                  style: TextStyle(fontSize: 24, color: Colors.grey),
                ),
                Text(
                  _result,
                  style: TextStyle(fontSize: 48, fontWeight: FontWeight.bold),
                ),
              ],
            ),
          ),
          Divider(),
          Expanded(
            child: GridView.count(
              crossAxisCount: 4,
              padding: EdgeInsets.all(5),
              children: [
                _buildCalcButton('7', Colors.blue),
                _buildCalcButton('8', Colors.green),
                _buildCalcButton('9', Colors.orange),
                _buildCalcButton('/', Colors.red),
                _buildCalcButton('4', Colors.blue),
                _buildCalcButton('5', Colors.green),
                _buildCalcButton('6', Colors.orange),
                _buildCalcButton('*', Colors.red),
                _buildCalcButton('1', Colors.blue),
                _buildCalcButton('2', Colors.green),
                _buildCalcButton('3', Colors.orange),
                _buildCalcButton('-', Colors.red),
                _buildCalcButton('AC', Colors.purple),
                _buildCalcButton('0', Colors.blue),
                _buildCalcButton('=', Colors.green),
                _buildCalcButton('+', Colors.red),
              ],
            ),
          ),
        ],
      ),
    );
  }

  // Helper function to build calculator buttons
  Widget _buildCalcButton(String label, Color color) {
    return Container(
      margin: EdgeInsets.all(4), // Space around buttons
      child: ElevatedButton(
        onPressed: () => _onButtonPressed(label), // Handle button press
        style: ElevatedButton.styleFrom(
          backgroundColor: color, // Button color
          shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(6), // Less rounded corners
          ),
        ),
        child: Text(label, style: TextStyle(fontSize: 18, color: Colors.white)),
      ),
    );
  }
}

