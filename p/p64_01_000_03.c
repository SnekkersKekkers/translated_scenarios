MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
VoicePlay("P640100003_01_000");
MsgDisp("Kazama?","Mandrake...");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,4,2,-1,-1,0,0);
VoicePlay("P640100003_01_010");
MsgDisp("Kazama","Hey, you,
don't grow ominous things.");
MsgDisp("主人公","Umm...they're vegetables.");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("P640100003_01_020");
MsgDisp("Kazama","That might be true, 
and the flavour might be good, 
but appearances matter too, you know?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("P640100003_01_030");
MsgDisp("Kazama","I don't have the courage to eat that.");
MsgDisp("主人公","(A huge failure...
I should have put more effort into 
preparations for the horticulture club...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
BGMStop();
