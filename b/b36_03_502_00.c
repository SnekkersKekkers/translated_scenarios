MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf620",1);
BGMPlay("BGM_C03_HONDA_B",0.01);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B360350200_03_000");
MsgDisp("Honda","Oh look!
Over there, someone drew a heart with an
umbrella on the sand.");
MsgDisp("主人公","Oh you're right.
It's lovely.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B360350200_03_010");
MsgDisp("Honda","...Alright!
Let's draw our own!");
MsgDisp("主人公","Eh?");
SEPlay("EV_SE_531");
ChClose(3);
Wait(40,0);
SEPlay("EV_SE_584");
SEWait();
VoicePlay("B360350200_03_020");
MsgDisp("Honda","There, perfect!");
MsgClose();
SEPlay("EV_SE_542");
SEWait();
ChOpen(3,255,1,0,0,#1,#1,0,0);
VoicePlay("B360350200_03_030");
MsgDisp("Honda","How does it look?");
SEPlay("EV_SE_532");
MsgDisp("","(*sha-shaaa*)");
ChEye(3,5);
ChMouth(3,5);
ChMotion(3,5,1);
VoicePlay("B360350200_03_040");
MsgDisp("Honda","Ah!
Our umbrella got washed away by the waves!");
SEPlay("EV_SE_580");
ChClose(3);
Wait(30,0);
VoicePlay("B360350200_03_050");
MsgDisp("Honda","In that case, we'll just make another one!
This time, I'll make sure it's far from
the sea!");
MsgDisp("主人公","(｛本多＊＊｝ is really serious about
this...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(3,255,7,0,0,#1,#1,0,0,0,0);
