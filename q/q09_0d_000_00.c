BGOpen("sc810",0);
ChLayout(1);
MsgDisp("主人公","(｛みちる＊｝ and ｛ひかる＊｝ are......
Ah, there!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(40,0);
ChOpen(21,254,0,0,0,-1,-1,0,1);
SEPlay("EV_SE_544");
ChOpen(22,254,0,0,3,-1,-1,0,2);
MsgDisp("主人公","Good morning!
｛みちる＊｝ , ｛ひかる＊｝ .");
ChMotion(21,3);
VoicePlay("Q090D00000_21_000");
MsgDisp("Michiru","God morning, Marii.
Let's have lots of fun today.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q090D00000_22_000");
MsgDisp("Hikaru","Yeah!
I want to visit souvenir shops and 
stuff!");
MsgDisp("主人公","Right.
Well, let's get going, shall we?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q090D00000_22_010");
MsgDisp("Hikaru","Bien sur♪");
MsgClose();
ScrFadeOut(0,0);
