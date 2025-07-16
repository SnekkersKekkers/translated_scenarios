MsgClose();
ChOpen(5,255,4,0,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("G020520001_05_000");
MsgDisp("Hiiragi","｛主人公｝, can you see me
from where you are?");
MsgDisp("主人公","Eh......
Yes, I can see you?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520001_05_010");
MsgDisp("Hiiragi","But if you close your eyes, I'm guessing
there's someone else in front of me,
right?");
MsgDisp("主人公","Eh......");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("G020520001_05_020");
MsgDisp("Hiiragi","I can tell that much.");
ChEye(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G020520001_05_030");
MsgDisp("Hiiragi","It doesn't matter who that person is.
But I want to get closer to you than
anyone else.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520001_05_040");
MsgDisp("Hiiragi","Using my own methods, I want to get closer
to you than anyone else.
Is that okay?");
MsgDisp("主人公","Eh, um...... yes.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("G020520001_05_050");
MsgDisp("Hiiragi","Heheh, I can tell it's not a no.
Now it's up to me.");
MsgDisp("主人公","(Today ｛柊＊＊＊｝ seems
different to how he is usually...... What
did he mean by getting the closest to me?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
