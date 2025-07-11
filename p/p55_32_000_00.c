BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Yay, it was a huge success∈");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,1,1,-1,-1,0,0);
VoicePlay("P553200000_32_000");
MsgDisp("V.P. Himuro","Ahem! Once you are satisfied, you will not
improve.");
MsgDisp("主人公","Ah, Himuro-sensei.
Yes...");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P553200000_32_010");
MsgDisp("V.P. Himuro","However... Just for today, we should enjoy
a drink of victory. You did welll.");
MsgDisp("主人公","Yes, thank you very much!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
