MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex000",1);
ChLayout(1);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ScrFadeIn(0);
VoicePlay("B360150101_01_000");
MsgDisp("Kazama","When I come here, I get a weird feeling.");
MsgDisp("主人公","Is that so?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B360150101_01_010");
MsgDisp("Kazama","Look, that mountain looked really big back
in the day right?");
ChEye(1,4);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Are you talking about that play mound?
Has it really been there that long...?");
ChMotion(1,2);
Wait(8,0);
ChEye(1,2);
ChMouth(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("B360150101_01_020");
MsgDisp("Kazama","It has?
There was definitely a hole on the back
where we went in and talked about stuff.");
MsgDisp("主人公","｛風真＊＊｝, amazing!
Your memory is really good.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B360150101_01_030");
MsgDisp("Kazama","I'm somewhat losing confidence.
Wait a second, I'll go check.");
MsgDisp("主人公","Eh.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(40,0);
ChOpen(1,255,2,2,2,0,#1,0,0);
ChMouthOpenLevel(1,0);
VoicePlay("B360150101_01_040");
MsgDisp("Kazama","......");
MsgDisp("主人公","What's wrong?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360150101_01_050");
MsgDisp("Kazama","It was filled with holes.");
MsgDisp("主人公","Ehhh?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
VoicePlay("B360150101_01_060");
MsgDisp("Kazama","Did we go into one of those holesand talk,
or was my memory wrong to begin with?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B360150101_01_070");
MsgDisp("Kazama","I can't be making fun of you like this,
can I?");
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","Hehe.");
MsgDisp("主人公","(It's like searching for memories with
｛風真＊＊｝, It's kind of fun.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
