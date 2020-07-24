// void main() {
//   runApp(MaterialApp(
//     home: Home(),
//   ));

//   Workmanager.initialize(callbackDispatcher, isInDebugMode: true);
//   Workmanager.registerPeriodicTask("1", "simplePeriodicTask",
//       existingWorkPolicy: ExistingWorkPolicy.replace,
//       frequency: Duration(minutes: 15),
//       initialDelay:
//           Duration(seconds: 5),
//       constraints: Constraints(
//         networkType: NetworkType.connected,
//       ));
// }

// void callbackDispatcher() {
//   Workmanager.executeTask((task, inputData) async{
//     await _HomeState().callLogDbManager();
//     print('Background Services are Working!');
//     return Future.value(true);
//   });
// }

// class Home extends StatefulWidget {
//   @override
//   _HomeState createState() => _HomeState();
// }

// class _HomeState extends State<Home> {

//   @override
//   void initState() {
//     login();
//     super.initState();
//   }

//   Future<void> callLogDbManager() async {
//     Iterable<CallLogEntry> cLog = await CallLog.get();
//     int rowCount = await DatabaseHelper.instance.queryRowCount();
//     int clLength = cLog.length;
//     if (rowCount >= clLength) {
//       callLogDbUpdate();
//     } else {
//       await callLogDbInsert();
//       callLogDbUpdate();
//     }
//   }

//   .......
//   .......

// }
