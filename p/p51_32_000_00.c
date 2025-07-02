BGOpen("sc604",0);
ScrFadeIn(0);
VoicePlay("P513200000_33_000");
MsgDisp("Manager","Our brass band will be performing
classical music at this year's school
festival.");
SEPlay("EV_SE_CLAP_004");
Wait(100,0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(32,254,0,0,0,-1,-1,0,0);
SEStop("EV_SE_CLAP_004",2);
VoicePlay("P513200000_32_000");
MsgDisp("Vice Principal Himuro","Make sure you show off the results of your
daily practice.");
MsgDisp("主人公","Yes......");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P513200000_32_010");
MsgDisp("Vice Principal Himuro","What's wrong? Your strange behavior makes
people around you uneasy.");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P513200000_32_020");
MsgDisp("Vice Principal Himuro","There is still time. Think for yourself
how you want spend the next two weeks and
act accordingly.");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
