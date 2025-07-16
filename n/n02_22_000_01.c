MsgClose();
ChOpen(22,254,0,3,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(22,5,1);
VoicePlay("N022200001_22_000");
MsgDisp("Hikaru","Amazing!
Your name is high on the list, Mari!");
MsgDisp("主人公","Ah, ｛ひかる＊｝.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("N022200001_22_010");
MsgDisp("Hikaru","It's almost at the top.
That's really impressive!");
MsgDisp("主人公","(Then...
If I work a little harder, I can make it
to the first place.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(22);
