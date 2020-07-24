void main(List<String> arguments) {
  List<Item> item = [];
  item.add(Item(name: 'a', roll: 1));
  item.add(Item(name: 'b', roll: 2));
  for (var i in item) {
    print('${i.name} ${i.roll}');
  }
}

class Item {
  String name;
  int roll;
  Item({this.name, this.roll});
}
