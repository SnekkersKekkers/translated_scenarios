BGMStop();
EnvAutoSet(0);
ChClose(4,0,0);
StlOpen("ev_04_04");
StlEye(4,0);
StlMouth(4,0);
EnvPlay("SE_ENV_BG_TR440_CO0",0.1,0.3)EfctOpen(14);
SEPlay("EV_SE_084",0,0.8);
ScrFadeIn(0);
Wait(50,0);
StlMouthOpenLevel(4,0);
VoicePlay("B050400200_04_000");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","T-Turns out, it's quite high isn't it?");
StlMouthOpenLevel(4,#1);
VoicePlay("B050400200_04_010");
MsgDisp("Nanatsumori","Haa...");
MsgDisp("主人公","(｛七ツ森＊｝ seems to be in a bad mood...)");
VoicePlay("B050400200_48_000");
MsgDisp("Staff","Excuse me, Sir.
Please remove your glasses.");
StlEyeOpenLevel(4,0);
VoicePlay("B050400200_04_020");
MsgDisp("Nanatsumori","Got it.
... Haa.");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C04_NANA_I",0.01);
StlEye(4,1);
ScrFadeIn(0);
VoicePlay("B050400200_48_010");
MsgDisp("Staff","Thank you for your cooperation!
Now, have a good dive!");
MsgDisp("主人公","(Uugh...
It's about time to jump
｛七ツ森＊｝ is...)");
MsgDisp("主人公","Ah.");
StlEyeOpenLevel(4,5,1);
VoicePlay("B050400200_04_030");
MsgDisp("Nanatsumori","What.");
MsgDisp("主人公","This is the first time you've taken off
your glasses with that hairstyle right?");
StlEyeOpenLevel(4,0,1);
VoicePlay("B050400200_04_040");
MsgDisp("Nanatsumori","That's right.
I'll never take it off at school.");
MsgDisp("主人公","Yeah.
｛七ツ森＊｝ is super
cool even now.");
StlEye(4,1);
VoicePlay("B050400200_04_050");
MsgDisp("Nanatsumori","Thanks.
Then, let's fly.");
MsgDisp("主人公","Eh∋
I haven't braced myself yet——");
StlEyeOpenLevel(4,5);
VoicePlay("B050400200_04_060");
MsgDisp("Nanatsumori","Too late");
BGMStop();
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_AMUSE_007",0,0.8);
SEWait();
MsgDisp("主人公","(Waa～∈)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
EfctClose();
StlClose();
BGOpen("tr440",0);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,0);
ChPrmTblAdd(4,0);
EnvAutoSet(1);
