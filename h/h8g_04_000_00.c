MsgClose();
BGOpen("ho000",0);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("H8G0400000_04_000");
MsgDisp("Nanatsumori","Ah, you came.");
MsgDisp("主人公","Huh, ｛七ツ森＊｝.
What's up?");
ChMotion(4,1,1);
VoicePlay("H8G0400000_04_010");
MsgDisp("Nanatsumori","I wanted to see the model student of Haba
High.");
MsgDisp("主人公","Huh?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("H8G0400000_04_020");
MsgDisp("Nanatsumori","It's a joke... well, not really.
Seriously, being awarded as a model
student is amazing.");
MsgDisp("主人公","You're making me a little shy...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("H8G0400000_04_030");
MsgDisp("Nanatsumori","This award, and you doing stuff like that
too, all of it just makes you so dazzling
to me. Congrats on the award.");
MsgDisp("主人公","(I'm really glad I stayed in the student
council...!)");
MsgClose();
ScrFadeOut(0,0);
