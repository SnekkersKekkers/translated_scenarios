BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Today's weather is nice too!) Then, I'll
bring my bento-)");
VoicePlay("F100610001_41_000");
MsgDisp("Male Student","Then, I'll leave the rest to you, Himuro!
Please confirm it with Himurocchi!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
Wait(30,0);
VoicePlay("F100610001_06_000");
MsgDisp("Himuro?","Hey...
There's no way I can do that!");
MsgDisp("主人公","...Hmmm?");
MsgClose();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,254,2,2,0,0,#1,0,0);
VoicePlay("F100610001_06_010");
MsgDisp("Himuro","Haa...");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,1);
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
MsgDisp("主人公","Confirming what with Himuro-sensei?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610001_06_020");
MsgDisp("Himuro","What, it's you...
Another pointless rumor.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610001_06_030");
MsgDisp("Himuro","They were wondering if it's true that
Reiichi-san once went to the legendary
church to meet the princess who was
waiting there..");
MsgDisp("主人公","Ehh∋");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,7);
VoicePlay("F100610001_06_040");
MsgDisp("Himuro","I don't believe it.
It's just a rumor.");
MsgDisp("主人公","T-That's right.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610001_06_050");
MsgDisp("Himuro","It would be troubling if it wasn't.
That's something...
I'm also weirdly conscious of.");
MsgDisp("主人公","(It is ｛氷室＊＊｝'s relative after all...
It's no wonder.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
