BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Even though it was my last concert, 
that was a massive failure...");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,-1,-1,0,0);
VoicePlay("P553200003_32_000");
MsgDisp("Vice Principal Himuro","What's wrong.");
MsgDisp("主人公","Himuro-sensei.
It failed by myself.
I troubled ");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("P553200003_32_010");
MsgDisp("Vice Principal Himuro","What did you learn today?");
MsgDisp("主人公","Um, that I should practice more...");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200003_32_020");
MsgDisp("Vice Principal Himuro","That's right.
If you know the answer, that frustration
will motivate you for the next challenge.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P553200003_32_030");
MsgDisp("Vice Principal Himuro","This might be an opportunity for you to
start anew. To continue with music, or
start a new challenge. Only you can
decide... that is all.");
MsgDisp("主人公","Yes!
Thank you very much Himuro Sensei!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
