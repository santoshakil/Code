void main() async {
  var futureData = await Future.delayed(
    Duration(seconds: 3),
    () => 'Future Data',
  );

  print(futureData);
}
