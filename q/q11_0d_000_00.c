ChClose(21);
ChClose(22);
ChLayout(1);
MsgClose();
ChOpen(21,254,3,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("Q110D00000_21_000");
MsgDisp("Michiru","Sorry to keep you waiting.");
MsgDisp("主人公","｛みちる＊｝.
Were you able to buy souvenirs?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("Q110D00000_21_010");
MsgDisp("Michiru","Yeah, I guess?
Though I shipped everything.");
MsgDisp("主人公","I see.
When is ｛ひかる＊｝ done?");
ChPosition(21,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(22,254,0,3,3,-1,-1,0,2);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q110D00000_22_000");
MsgDisp("Hikaru","Sorry to keep you both waiting～♪");
MsgDisp("主人公","｛ひかる＊｝, 
you're in a good mood, aren't you?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q110D00000_22_010");
MsgDisp("Hikaru","Ehehe▼
Here, take this.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("Q110D00000_21_020");
MsgDisp("Michiru","A glass bead......?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q110D00000_22_020");
MsgDisp("Hikaru","As a memory, of the school trip,
a matching one for us all▼
How do you think?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("Q110D00000_21_030");
MsgDisp("Michiru","Oh no......
I also bought for us three as memory......
Look......");
MsgDisp("主人公","Actually, me too......");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
ChEyeOpenLevel(22,10);
VoicePlay("Q110D00000_22_030");
MsgDisp("Hikaru","There are all color different colored
glass beads......?
We all thought of the same thing∋");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q110D00000_22_040");
MsgDisp("Hikaru","Aha▼
We made a perfect memory!");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q110D00000_21_040");
MsgDisp("Michiru","Yeah, really.
How could you forget such an interesting 
event?");
MsgDisp("主人公","Hehe!
Yeah, I'll never forget......!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
