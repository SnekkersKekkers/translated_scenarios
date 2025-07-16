MsgClose();
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ChCheek(8,7);
VoicePlay("G020810303_08_000");
MsgDisp("Shirahane","Time to relax......");
MsgDisp("主人公","Yeah, that's right.......");
ChEye(8,0);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
VoicePlay("G020810303_08_010");
MsgDisp("Shirahane","...... Ah, but you know?
What happened when we were supposed to
meet was bad.");
MsgDisp("主人公","Eh?");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,2,1);
VoicePlay("G020810303_08_020");
MsgDisp("Shirahane","You were approached by a strange man,
weren't you?");
MsgDisp("主人公","Now that I think about it......");
ChEye(8,1);
ChMouth(8,4);
ChMotion(8,1,1);
VoicePlay("G020810303_08_030");
MsgDisp("Shirahane","I can't forgive something like that!");
MsgDisp("主人公","Hehe.
Thank you for helping me,
｛大地＊＊｝.");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("G020810303_08_040");
MsgDisp("Shirahane","Yeah, leave it to me.");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,2,1);
VoicePlay("G020810303_08_050");
MsgDisp("Shirahane","...... Actually, it was my fault for being
late......
I'm sorry!");
MsgDisp("主人公","(Hehe, I'm counting on you,
｛大地＊＊｝! )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
BGMStop();
ChLayout(1);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
