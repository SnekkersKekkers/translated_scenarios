BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("D100600000_06_000");
MsgDisp("Himuro","Hello.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝. What's up?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D100600000_06_010");
MsgDisp("Himuro","What's up......not much, I guess?
I just saw you so I said hi.");
MsgDisp("主人公","Oh.
Hehe, thank you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("D100600000_06_020");
MsgDisp("Himuro","......Bye.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(6);
MsgDisp("主人公","(It's rare that ｛氷室＊＊｝ talks to me for
no reason......)");
MsgClose();
ScrFadeOut(0);
