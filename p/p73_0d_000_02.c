BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year the handicrafts club
is doing traditional wedding dresses...
I think it turned out beautifully but...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,4,3,#1,#1,0,1);
ChOpen(22,254,0,3,3,#1,#1,0,2);
VoicePlay("P730D00002_21_000");
MsgDisp("Michiru","Mari...!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P730D00002_22_000");
MsgDisp("Hikaru","Tres bi～en!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P730D00002_21_010");
MsgDisp("Michiru","It's totally a culimation of your hard
work. The best finish.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("P730D00002_22_010");
MsgDisp("Hikaru","Yup yup!
The world's best bride.");
MsgDisp("主人公","Hehe, thank you.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P730D00002_21_020");
MsgDisp("Michiru","Yes. A wonderful smile.");
ChEye(22,3);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
SEPlay("EV_SE_038");
SEWait();
VoicePlay("P730D00002_21_030");
MsgDisp("Michiru","This will be your best high school 
show. Enjoy it, okay?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P730D00002_22_020");
MsgDisp("Hikaru","Imagine that Hikaru is your groom, next to
you! You won't be nervous like that,
right?");
MsgDisp("主人公","Hehe.
The, I'm off!");
MsgDisp("主人公","(This is my last fashion show of high
school! I absolutely have to make this a
success!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
