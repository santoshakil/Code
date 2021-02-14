import 'dart:io';

void main() {
  var x = int.parse(stdin.readLineSync());
  var y = int.parse(stdin.readLineSync());

  var z = x + y;

  print('$x + $y = $z');
}
