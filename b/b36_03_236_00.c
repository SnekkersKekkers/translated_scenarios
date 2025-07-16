MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,5,1);
ChLayout(1);
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
ScrFadeIn(0);
VoicePlay("B360323600_03_000");
MsgDisp("Honda","Hah, hah...
We made it to the night parade!
Just in time!");
MsgDisp("主人公","Phew...
You took off running so suddenly, I was
really surprised.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("B360323600_03_010");
MsgDisp("Honda","Ah, sorry!
I just really wanted to see this with you.
Especially today...");
MsgDisp("主人公","Wait, today?
Is there something special about today?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("B360323600_03_020");
MsgDisp("Honda","Yup.
I want to have you all to myself——
that's what makes it a special day!");
MsgDisp("主人公","Huh..?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("B360323600_03_030");
MsgDisp("Honda","Look, the parade is starting.
Let's go up front!");
MsgDisp("主人公","(｛本多＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChCheek(3,0);
