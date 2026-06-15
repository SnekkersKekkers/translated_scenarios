BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, it was a huge failure...");
VoicePlay("P553200001_32_000");
MsgDisp("VP Himuro?","Ahem!");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, Himuro-sensei!
I'm sorry, I held everyone back from
succeeding...");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200001_32_010");
MsgDisp("VP Himuro","Do you think so?");
MsgDisp("主人公","Yes.");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("P553200001_32_020");
MsgDisp("VP Himuro","Good.
If that's how you feel, there's a future
for you.");
MsgDisp("主人公","Eh?");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200001_32_030");
MsgDisp("VP Himuro","Your thoughts are your assets.
How you decide to use them, is already the
beginning of the next battle.");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
