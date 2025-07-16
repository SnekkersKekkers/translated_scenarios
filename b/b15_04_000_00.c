MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,4,1,#1,#1,5,0);
ScrFadeIn(0);
VoicePlay("B150400000_04_000");
MsgDisp("Nanatsumori","W...wait!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B150400000_04_010");
MsgDisp("Nanatsumori","That's right.
If you go too far, nothing will come of
it.");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("B150400000_04_020");
MsgDisp("Nanatsumori","Aah～ hey...
Being unaware is the most dangerous
thing....");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B150400000_04_030");
MsgDisp("Nanatsumori","Listen.
Girls shouldn't touch guys thoughtlessly.");
MsgDisp("主人公","Yes...");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("B150400000_04_040");
MsgDisp("Nanatsumori","Ugh...
If you get sad like that, it seems like
I'm the one at fault.");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B150400000_04_050");
MsgDisp("Nanatsumori","I don't really mind... but.
You can't do that recklessly, innocently
to just anyone.");
MsgDisp("主人公","Yeah.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B150400000_04_060");
MsgDisp("Nanatsumori","Yeah.
If you understand, alright.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(Seems like I made
｛七ツ森＊｝ mad...)");
MsgClose();
ScrFadeOut(0,0);
