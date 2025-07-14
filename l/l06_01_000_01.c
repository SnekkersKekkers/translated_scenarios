BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("L060100001_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A");
ChOpen(1,254,0,0,3,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝.");
ChMotion(1,3);
VoicePlay("L060100001_01_010");
MsgDisp("Kazama","I finally found you.
Come over here.");
MsgDisp("主人公","O-Okay.");
MsgClose();
ScrFadeOut(0,0);
BGOpen("sc220",0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ScrFadeIn(0);
SEPlay("EV_SE_664");
SEWait();
VoicePlay("L060100001_01_020");
MsgDisp("Kazama","Thanks for last month.
Today's White Day, right?");
MsgDisp("主人公","Wah, thanks!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("L060100001_01_030");
MsgDisp("Kazama","It's a little different than the others.
That's why it'd be a problem if others
saw, right?");
MsgDisp("主人公","I see, thanks.
｛風真＊＊｝, you got a lot of chocolate,
right?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("L060100001_01_040");
MsgDisp("Kazama","Ooh, nice.
So you can have those feelings, too.");
MsgDisp("主人公","Hm?　What do you mean?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("L060100001_01_050");
MsgDisp("Kazama","Sorry, sorry.
Forgive me, please.");
MsgDisp("主人公","Hehe, I guess I have no choice.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("L060100001_01_060");
MsgDisp("Kazama","Thank you very much.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(I'm happy I got a White Day present from
｛風真＊＊｝! )");
