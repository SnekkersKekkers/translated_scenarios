BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Yay!
Our final concert was a huge success∈");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,#1,#1,0,0);
VoicePlay("P553200002_32_000");
MsgDisp("VP Himuro","How was the final concert?");
MsgDisp("主人公","Ah, Vice Principal Himuro!
Yes, we had a good time!");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P553200002_32_010");
MsgDisp("VP Himuro","That's good to hear.
I also enjoyed conducting the band.");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P553200002_32_020");
MsgDisp("VP Himuro","I can only hope that everything you learn
here in brass band will be useful to you
in your future.");
MsgDisp("主人公","Yes!
Thank you for everything.");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
