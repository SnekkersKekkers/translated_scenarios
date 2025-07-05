MsgClose();
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
MsgDisp("主人公","So many fireflies!
Amazing......");
ChMotion(8,3,1);
VoicePlay("G020830100_08_000");
MsgDisp("Shirahane","Haha!
It's just like you, isn't it?");
MsgDisp("主人公","Eh, why?");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("G020830100_08_010");
MsgDisp("Shirahane","You have alot of friends, don't ya?
I can tell just by hearing you talk.");
MsgDisp("主人公","Friends......
Yeah, I guess I have a lot.");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,2,1);
ChCheek(8,6);
VoicePlay("G020830100_08_020");
MsgDisp("Shirahane","Am I......your friend?
Or——");
MsgDisp("主人公","Eh?");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,4,1);
ChCheek(8,8);
VoicePlay("G020830100_08_030");
MsgDisp("Shirahane","That's bad.
What am I sayin'?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("G020830100_08_040");
MsgDisp("Shirahane","Friends is fine!
Everyone starts off as friends.");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("G020830100_08_050");
MsgDisp("Shirahane","We go to different schools, 
but let's stay friends from now on, okay?");
MsgDisp("主人公","(｛大地＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
BGMStop();
ChLayout(1);
ChEyeOpenLevel(8,-1);
ChMouthOpenLevel(8,-1);
ChCheek(8,0);
