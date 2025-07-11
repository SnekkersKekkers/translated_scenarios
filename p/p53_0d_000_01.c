BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year's program is Game Music. I have
to be careful to to mess it up......)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ChMotion(22,4,1);
VoicePlay("P530D00001_22_000");
MsgDisp("Hikaru","Ma～ri▼
I stopped by to see you!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P530D00001_21_000");
MsgDisp("Michiru","I heard this year is about Game Music.
How is it going?");
MsgDisp("主人公","Ah, ｛ひかる＊｝, ｛みちる＊｝.
Did you come to support us?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P530D00001_22_010");
MsgDisp("Hikaru","That's right.
I thought Mari would be nervous♪");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("P530D00001_21_010");
MsgDisp("Michiru","Hikaru, don't.
That would be too much pressure.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P530D00001_21_020");
MsgDisp("Michiru","It will be fine.
Mari can do it. Right?");
MsgDisp("主人公","Thank you......!");
SEPlay("EV_SE_038");
SEWait();
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("P530D00001_21_030");
MsgDisp("Michiru","Take care.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("P530D00001_22_020");
MsgDisp("Hikaru","I'm looking forward to Game Music!");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
