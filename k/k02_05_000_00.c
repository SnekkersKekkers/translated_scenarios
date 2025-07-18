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
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("K020500000_05_000");
MsgDisp("Hiiragi","Good evening.
Please excuse the sudden visit.");
MsgDisp("主人公","No, it's fine.
...What's up?");
ChMotion(5,4);
VoicePlay("K020500000_05_010");
MsgDisp("Hiiragi","Would you understand if...
I told you it had to be today?");
SEPlay("EV_SE_665");
SEWait();
ChEye(5,4);
ChMotion(5,3);
VoicePlay("K020500000_05_020");
MsgDisp("Hiiragi","Yes, happy birthday.
Here is a little something from me.");
MsgDisp("主人公","Thank you...!");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("K020500000_05_030");
MsgDisp("Hiiragi","I glad I got to see that face.
Well then, apologies for the sudden visit.");
MsgDisp("主人公","Hehe, I was surprised, but I'm really
happy.");
ChEye(5,4);
VoicePlay("K020500000_05_040");
MsgDisp("Hiiragi","I see.
Well then, see you at school.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(5);
MsgDisp("主人公","(I got a present from
｛柊＊＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
