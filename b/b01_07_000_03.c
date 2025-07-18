BGDateBeforeOpen();
ChLayout(1);
SEPlay("EV_SE_788",0.3);
ScrFadeIn(0);
Wait(30,0);
MsgDisp("主人公","(Everyone is already here...
I wonder what's wrong?)");
SEPlay("EV_SE_FOOT_025",1.2,0.9);
Wait(88,1);
MsgClose();
SEStop("EV_SE_FOOT_025",0);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
ChOpen(7,254,5,2,3,#1,#1,0,0);
SEStop("EV_SE_788",2);
VoicePlay("B010700003_07_000");
MsgDisp("Mikage","Phew, whoo...
Right on time.");
MsgDisp("主人公","Umm, but teacher...
You're really not on time.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B010700003_07_010");
MsgDisp("Mikage","...Sorry.
I'm guessing my plan to \"just wing it\"
backfired, huh?");
SEPlay("EV_SE_GAYA_023",0,0.6);
Wait(30,0);
MsgDispSksp(1,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B010700003_07_020");
MsgDisp("Mikage","Anyway, let's begin!");
MsgDispSksp(0);
BGMStop();
SEStop("EV_SE_GAYA_023",1.5);
