MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("G020710306_07_000");
MsgDisp("Mikage","｛主人公｝, thank you.");
MsgDisp("主人公","Eh...why all of a sudden?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G020710306_07_010");
MsgDisp("Mikage","Because you always come along with me to
the places I want to go.");
MsgDisp("主人公","No, I also want to go to those places.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,0);
VoicePlay("G020710306_07_020");
MsgDisp("Mikage","Hearing that makes me feel better.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,10);
VoicePlay("G020710306_07_030");
MsgDisp("Mikage","We started with bowling, and now we're
watching fireflies.");
MsgDisp("主人公","And we went to the amusement park too.");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("G020710306_07_040");
MsgDisp("Mikage","Yeah, that's right.
The roller coaster at Habataki Land Town
is intense.");
MsgDisp("主人公","｛御影＊＊｝, you were really excited.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("G020710306_07_050");
MsgDisp("Mikage","I'm just as excited right now.
I always am when I'm with you.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
ChEyeOpenLevel(7,8);
VoicePlay("G020710306_07_060");
MsgDisp("Mikage","Heh.
Thank you.");
MsgDisp("主人公","(｛御影＊＊｝...
He seems a bit different than usual?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
