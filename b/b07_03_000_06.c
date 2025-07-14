MsgDisp("主人公","Hey ｛本多＊＊｝, What were you like in
middle school?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B070300000_03_310");
MsgDisp("Honda","I spent all of my time in the library.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300000_03_320");
MsgDisp("Honda","I decided to read every single book in the
library.");
MsgDisp("主人公","That's incredible!
Did you manage to read them all?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("B070300000_03_330");
MsgDisp("Honda","No, I couldn't do it. Just when I was
getting close, they swapped out the
library cards for a digital rental system.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B070300000_03_340");
MsgDisp("Honda","I lost track of the books I read.");
MsgDisp("主人公","I still think that's amazing, though.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("B070300000_03_350");
MsgDisp("Honda","It isn't. If you can't remember if you've
read it or not, that means you didn't
really learn from it, right?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("B070300000_03_360");
MsgDisp("Honda","But thanks to that, I was freed from the
library curse and started to go outside.
It was around that time that I discovered
how much I enjoy teaching others.");
MsgDisp("主人公","(......I see, as a junior high schooler
｛本多＊＊｝ was even more of a bookworm
than he is now.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
