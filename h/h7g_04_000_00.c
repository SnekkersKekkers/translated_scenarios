MsgClose();
BGOpen("ho000",0);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("H7G0400000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Oh, ｛七ツ森＊｝. What's up?");
ChMotion(4,1,1);
VoicePlay("H7G0400000_04_010");
MsgDisp("Nanatsumori","I heard your entry in the handicrafts
club's contest got the grand prize.");
MsgDisp("主人公","Yeah.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("H7G0400000_04_020");
MsgDisp("Nanatsumori","Oh, how casual.
As expected of the honor student.");
MsgDisp("主人公","That's......");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("H7G0400000_04_030");
MsgDisp("Nanatsumori","Don't be so modest.
You can be more proud of yourself for
amazing stuff like this.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("H7G0400000_04_040");
MsgDisp("Nanatsumori","Congrats.
I really respect you.");
MsgDisp("主人公","(That makes me so happy......
I'm really glad I stayed in the
handicrafts club!)");
MsgClose();
ScrFadeOut(0,0);
