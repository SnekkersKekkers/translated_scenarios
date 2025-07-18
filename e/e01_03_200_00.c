BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(...Alright then, I guess it's about time to
go home?)");
VoicePlay("E010320000_01_000");
MsgDisp("Kazama?","Honda, don't be so noisy in the store.");
VoicePlay("E010320000_03_000");
MsgDisp("Honda?","Here, look.
Isn't that nice?
The two of them are like a pair.");
MsgDisp("主人公","Huh, those voices...
｛本多＊＊｝ and
｛風真＊＊｝?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,35,0,0,2,#1,#1,0,1,0,30);
ChOpen(3,35,0,0,0,#1,#1,0,2,0,30);
ChEye(1,3);
ChMotion(1,3);
VoicePlay("E010320000_01_010");
MsgDisp("Kazama","Oh, it's you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoiceEVSPlay(3);
VoicePlay("E010320000_03_010");
MsgDisp("Honda","｛主人公｝, good afternoon.");
MsgDisp("主人公","Hehe.
The two of you are wearing differently
colored aprons.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("E010320000_01_020");
MsgDisp("Kazama","You're laughing...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("E010320000_03_020");
MsgDisp("Honda","Yeah!
It's funny right, the aprons.
Hahaha.");
ChEye(1,2);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Aprons?
Ahaha!");
ChSet(3,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010320000_01_030");
MsgDisp("Kazama","You guys are laughing right in front of
the store.
...Geez.");
MsgDisp("主人公","Ah, sorry.
You're working part-time today?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("E010320000_01_040");
MsgDisp("Kazama","Yeah, I was asked to take this shift on
short notice.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("E010320000_03_030");
MsgDisp("Honda","Seeing Ryo-kun wearing the same uniform as
I do at my part-time job made me really
happy.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("E010320000_01_050");
MsgDisp("Kazama","Because of that, Honda-kun went all the
way back just to get the apron from his
part-time job.");
MsgDisp("主人公","Hehe.
｛本多＊＊｝, that's interesting.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("E010320000_01_060");
MsgDisp("Kazama","That's why it isn't interesting.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("E010320000_03_040");
MsgDisp("Honda","I thought I'd take a picture and send it
to you. But it looks like that is no
longer necessary.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,1);
VoicePlay("E010320000_01_070");
MsgDisp("Kazama","I already told you, I don't want to do
that.");
MsgDisp("主人公","Thanks, ｛本多＊＊｝.
I already got to see the aprons, so I
guess it's fine to not take photos?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010320000_03_050");
MsgDisp("Honda","Yeah, you got to see it live.");
VoicePlay("E010320000_47_000");
MsgDisp("Woman Customer","Uhm, Kazama-kun, excuse me...");
ChSet(3,0);
ChEye(1,3);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("E010320000_01_080");
MsgDisp("Kazama","Ah, yes.
I'll be there right away!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010320000_01_090");
MsgDisp("Kazama","I still have work so. At least he changed
his mind, thanks to you. See you later.");
MsgDisp("主人公","Yeah, bye bye.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
ChPosition(3,0);
Wait(60,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010320000_03_060");
MsgDisp("Honda","Okay, since I want to look around the
store a bit more, I'll see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","Okay!");
MsgDisp("主人公","(｛本多＊＊｝ went into the store again
dressed like that...)");
MsgClose();
ScrFadeOut(0,0);
