BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Phew......");
MsgClose();
ChOpen(21,30,0,0,0,#1,#1,0,1);
ChOpen(22,30,0,0,0,#1,#1,0,2);
ChMotion(22,4,1);
VoicePlay("P230D00001_22_000");
MsgDisp("Hikaru","Ha～, we managed to make it in time,
right?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P230D00001_21_000");
MsgDisp("Michiru","I couldn't decide on my makeup so it ended
up being a close call.");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝, good
work, both of you.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("P230D00001_22_010");
MsgDisp("Hikaru","AaーAh.
\"Flora Angel\" I wanted to do it with the
three of us～......");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P230D00001_21_010");
MsgDisp("Michiru","Hehe. A Cupid warrior of love. That
certainly sounds interesting.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P230D00001_22_020");
MsgDisp("Hikaru","Mari is definitely the main character in
white, and Hikaru and the others are
purple and pink. That's perfect!");
MsgDisp("主人公","Haha......");
VoicePlay("P230D00001_47_000");
MsgDisp("Broadcast","We will now begin Habataki High School's
play.");
SEPlay("EV_SE_038");
SEWait();
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P230D00001_21_020");
MsgDisp("Michiru","Seems like it's starting.");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P230D00001_22_030");
MsgDisp("Hikaru","Well, let's just enjoy it as a different
series!");
MsgDisp("主人公","Yeah.");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
