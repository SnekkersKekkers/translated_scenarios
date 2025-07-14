BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(22,254,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("F112210001_22_000");
MsgDisp("Hikaru","He～ey, Mari!
Are you having fun at the festival?");
MsgDisp("主人公","Oh, ｛ひかる＊｝. You're in good
spirits, huh?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F112210001_22_010");
MsgDisp("Hikaru","Of course!
The refreshments are different from last
year, there's a lot of new things to see.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F112210001_22_020");
MsgDisp("Hikaru","Oh! Do you remember the fortune telling
girl from last year?");
MsgDisp("主人公","Ah... The one who ｛ひかる＊｝
consulted about love?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F112210001_22_030");
MsgDisp("Hikaru","Right, right.
Well, their love predictions game true.");
MsgDisp("主人公","No way, amazing!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F112210001_22_040");
MsgDisp("Hikaru","Hehe～
So Hikaru's very happy～");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F112210001_22_050");
MsgDisp("Hikaru","So this year Hikaru's looking again for
girls struggling with love. Boys are okay
too～ See you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
MsgDisp("主人公","(As expected of ｛ひかる＊｝... )");
MsgClose();
ScrFadeOut(0,0);
