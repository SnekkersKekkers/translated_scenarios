BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,255,0,0,4,-1,-1,0,0);
VoicePlay("K020500001_05_000");
MsgDisp("Hiiragi","Good evening.
I apologize for the surprise.");
MsgDisp("主人公","No, it's fine.
What is it?");
ChEye(5,2);
ChMotion(5,4);
VoicePlay("K020500001_05_010");
MsgDisp("Hiiragi","I wanted to give this to you directly
no matter what, and before I knew it,
the timing came to this......");
SEPlay("EV_SE_665");
SEWait();
ChEye(5,4);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("K020500001_05_020");
MsgDisp("Hiiragi","It's slightly late, but
happy birthday.
Please accept this.");
MsgDisp("主人公","Really?
Thank you......!");
ChEye(5,3);
ChMotion(5,3);
VoicePlay("K020500001_05_030");
MsgDisp("Hiiragi","Thank you too.
I finally got to see your face.");
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("K020500001_05_040");
MsgDisp("Hiiragi","With this, I can see you at school
without worries.
I apologize for intruding.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(5);
MsgDisp("主人公","(I got a present from ｛柊＊＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
