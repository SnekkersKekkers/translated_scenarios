MsgClose();
BGOpen("ho000",0);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("H6G0400000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Oh, ｛七ツ森＊｝.
What's up?");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("H6G0400000_04_010");
MsgDisp("Nanatsumori","I heard you won a pretty amazing award in
the gardening club's competition.");
MsgDisp("主人公","Yeah.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("H6G0400000_04_020");
MsgDisp("Nanatsumori","That's amazing.
Congrats.");
MsgDisp("主人公","Thanks.");
ChMotion(4,1,1);
VoicePlay("H6G0400000_04_030");
MsgDisp("Nanatsumori","Tell me the details about what it was and
how exactly it got praised by the
gardening world later.");
MsgDisp("主人公","(I did it!
I'm really glad I stayed in the gardening
club!)");
MsgClose();
ScrFadeOut(0,0);
