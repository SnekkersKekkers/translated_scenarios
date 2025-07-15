MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B360121201_01_000");
MsgDisp("Kazama","It'll be safe here right?");
MsgDisp("主人公","Safe?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360121201_01_010");
MsgDisp("Kazama","Right, I'm talking about whether they'll
notice you here or not.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B360121201_01_020");
MsgDisp("Kazama","Mm...");
MsgDisp("主人公","What's wrong?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,4);
VoicePlay("B360121201_01_030");
MsgDisp("Kazama","I feel like someone's
looking at me.");
MsgDisp("主人公","Hehe ｛風真＊＊｝, don't you want to hang
out with everyone?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360121201_01_040");
MsgDisp("Kazama","Not at all.
I'm finally alone with you.");
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
ChOpen(1,255,7,3,3,#1,#1,0,0,0,30);
SEWait();
ChMotion(1,3);
VoicePlay("B360121201_01_050");
MsgDisp("Kazama","It's here, it's here.
I've found it.");
MsgDisp("主人公","Eh? Are they here?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B360121201_01_060");
MsgDisp("Kazama","Ah, look.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
Wait(30,0);
VoicePlay("B360121201_01_070");
MsgDisp("Kazama","It's here.");
MsgDisp("主人公","Eehー?
Plushies?");
MsgClose();
ChOpen(1,255,0,4,3,#1,#1,0,0);
VoicePlay("B360121201_01_080");
MsgDisp("Kazama","Yeah, every one of them is looking this
way wistfully.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
VoicePlay("B360121201_01_090");
MsgDisp("Kazama","Is this a day where 
we can't be alone?");
MsgDisp("主人公","(Hehe, ｛風真＊＊｝ really does like
them...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
