BGMPlay("BGM_PLACE_SHOP");
Wait(50,0);
BGOpen("sc721",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","It's a maze～
If you can reach the finish line, you get
to drink freshly squeezed milk～");
MsgClose();
ChOpen(21,254,0,0,4,#1,#1,0,1);
ChOpen(22,254,0,0,0,#1,#1,0,2);
VoicePlay("P130D00000_21_000");
MsgDisp("Michiru","Freshly squeezed?
I'm quite curious about that......");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P130D00000_22_000");
MsgDisp("Hikaru","It's a maze, you say?
Mari's class thought of something quite
interesting!");
MsgDisp("主人公","｛みちる＊｝,
｛ひかる＊｝, welcome.
It's the cow Molly's maze, feel free to
enter～!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("P130D00000_21_010");
MsgDisp("Michiru","Hikaru, you're good at this sort of thing,
right?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P130D00000_22_010");
MsgDisp("Hikaru","Leave it to me♪
I'll break a new record!");
MsgDisp("主人公","Hehe!
Then, entry for two, please!");
MsgClose();
ScrFadeOut(0,0);
