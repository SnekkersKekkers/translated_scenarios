BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B150410000_04_000");
MsgDisp("Nanatsumori","You're waiting for payback huh?
OK?");
MsgDisp("主人公","Umm...
Sorry?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("B150410000_04_010");
MsgDisp("Nanatsumori","Yeah, yeah.
It's my loss so it's over for tonight.
... Haa.");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
