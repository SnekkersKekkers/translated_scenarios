MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,5,5,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("P840400001_04_000");
MsgDisp("Nanatsumori","Ah... watch your step——");
MsgDisp("主人公","Eh?
What is it?");
SEPlay("EV_SE_684");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,1,1);
MsgDisp("","(*RIIIIIP*)");
MsgDisp("主人公","Ah!
I teared the blackout curtains...");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("P840400001_04_010");
MsgDisp("Nanatsumori","I was too late.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("P840400001_04_020");
MsgDisp("Nanatsumori","Come on, get another one quickly.
It's already been some time
since it was requested.");
MsgDisp("主人公","I see!
Umm, the spare blackout curtain——Ah!");
SEPlay("EV_SE_685");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,1,1);
MsgDisp("","(*CRASH*)");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("P840400001_04_030");
MsgDisp("Nanatsumori","Ah, hey...
Please calm down.");
MsgDisp("主人公","(Uugh...It's a mess.
A huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
