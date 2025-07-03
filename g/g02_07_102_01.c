MsgClose();
ChLayout(1);
ChOpen(7,255,1,0,4,-1,-1,0,0);
VoicePlay("G020710201_07_000");
MsgDisp("Mikage","Hey, you know the rumor about this place,
right?");
MsgDisp("主人公","Yeah. 
You can hear the inner voices of
people you're with......");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020710201_07_010");
MsgDisp("Mikage","Right. I wondered why anyone would want to
go to such a scary place～? ......then I
came here.");
MsgDisp("主人公","Why is it scary?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G020710201_07_020");
MsgDisp("Mikage","You don't know what I'm saying, do you?
It's really scary.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020710201_07_030");
MsgDisp("Mikage","If I could hear it,
I could deal with it.");
MsgDisp("主人公","......Then why did you invite me here
today?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("G020710201_07_040");
MsgDisp("Mikage","Well, there's that saying, 
'Without entering the tiger's den, 
one cannot catch the tiger's cub.'");
MsgDisp("主人公","(｛御影＊＊｝ wants to hear my inner
voice......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,-1);
ChMouthOpenLevel(7,-1);
ChCheek(7,0);
