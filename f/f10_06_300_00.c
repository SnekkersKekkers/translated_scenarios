BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Umm, what was my
next lesson again?)");
VoicePlay("F100630000_06_000");
MsgDisp("Himuro?","At any rate, please stop that.
That's all.
Well then.");
VoicePlay("F100630000_22_000");
MsgDisp("Hikaru?","Ehhh∋
Himuro-chan, wait～!");
MsgDisp("主人公","(Hm? These voices...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,2,#1,#1,0,2,0,30);
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝. What's
wrong?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100630000_21_000");
MsgDisp("Michiru","Ah, Mari.
It's nothing.
Don't worry about it.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,1,1);
VoicePlay("F100630000_22_010");
MsgDisp("Hikaru","I suggested a cute nickname to
Himuro-chan, but he rejected it");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100630000_21_010");
MsgDisp("Michiru","I don't think that's it...
Himuro-chan was really troubled.");
MsgDisp("主人公","Eeh.
What did you call him?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100630000_22_020");
MsgDisp("Hikaru","\"Himuhimu\", 
\"Himuron\", and \"Inorinrin\"!");
MsgDisp("主人公","T-That's...");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F100630000_21_020");
MsgDisp("Michiru","Right.
I think that's a bit wrong.");
MsgDisp("主人公","...A bit?");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F100630000_22_030");
MsgDisp("Hikaru","Even though you suggested something like
\"Himurin\"?
No way～...");
MsgDisp("主人公","H-Himurin?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100630000_21_030");
MsgDisp("Michiru","It's super nice, isn't it?
Right?");
MsgDisp("主人公","(I-I wonder?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
