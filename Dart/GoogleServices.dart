// import 'package:http/http.dart';
// import 'package:http/io_client.dart';
// import 'package:google_sign_in/google_sign_in.dart';
// import 'package:googleapis/drive/v3.dart' as ga;

// GoogleSignInAccount account;
// ga.DriveApi api;
// GlobalKey<ScaffoldState> _scaffold = GlobalKey();

// class GoogleHttpClient extends IOClient {
//   Map<String, String> _headers;

//   GoogleHttpClient(this._headers) : super();

//   @override
//   Future<IOStreamedResponse> send(BaseRequest request) =>
//       super.send(request..headers.addAll(_headers));

//   @override
//   Future<Response> head(Object url, {Map<String, String> headers}) =>
//       super.head(url, headers: headers..addAll(_headers));
// }

// GoogleSignIn _googleSignIn = GoogleSignIn(
//   scopes: [
//     'email',
//     'https://www.googleapis.com/auth/drive.file',
//   ],
// );

// Future<void> login() async {
//   try {
//     account = await _googleSignIn.signIn();
//     final client =
//         GoogleHttpClient(await _googleSignIn.currentUser.authHeaders);
//     api = ga.DriveApi(client);
//   } catch (error) {
//     print('DriveScreen.login.ERROR... $error');
//     _scaffold.currentState.showSnackBar(SnackBar(
//       backgroundColor: Colors.red.shade700,
//       content: Text(
//         'Error : $error',
//         style: TextStyle(color: Colors.white),
//       ),
//     ));
//   }
//   setState(() {});
// }

// void logout() {
//   _googleSignIn.signOut();
//   setState(() {
//     account = null;
//   });
// }

// Widget _loginIcon() {
//   if (account != null) {
//     return IconButton(
//       icon: Icon(Icons.check_circle_outline),
//       onPressed: () {},
//     );
//   } else {
//     return IconButton(
//       icon: Icon(Icons.account_circle),
//       onPressed: () {
//         login();
//       },
//     );
//   }
// }

// //Dive
// void toDrive() async {
//   final filename = 'MyDatabase.db';

//   final gFile = ga.File();
//   gFile.name = filename;

//   final dir = await getApplicationDocumentsDirectory();
//   final localFile = io.File('${dir.path}/$filename');
//   final createdFile = await api.files.create(gFile,
//       uploadMedia: ga.Media(localFile.openRead(), localFile.lengthSync()));

//   print('${createdFile.id}');
//   setState(() {});
// }
