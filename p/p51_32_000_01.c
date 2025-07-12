BGOpen("sc604",0);
ScrFadeIn(0);
VoicePlay("P513200001_33_000");
MsgDisp("Manager","Our brass band will be playing game music
at this year's school festival.");
SEPlay("EV_SE_CLAP_004");
Wait(100,0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(32,254,0,0,0,-1,-1,0,0);
SEStop("EV_SE_CLAP_004",2);
VoicePlay("P513200001_32_000");
MsgDisp("VP Himuro","The pieces to be performed this year seems
to be getting good reviews.");
MsgDisp("主人公","Yes, I'm looking forward to it!");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P513200001_32_010");
MsgDisp("VP Himuro","......Hmm,that's very good. The confidence
backed by practice makes me think so.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P513200001_32_020");
MsgDisp("VP Himuro","Now, It's time for finishing touches. Give
it your all right up until the big day!");
VoicePlay("P513200001_38_000");
MsgDisp("Members","Yes!");
MsgDisp("主人公","(I have to do it successfully......
Okay, let's do our best!)");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
