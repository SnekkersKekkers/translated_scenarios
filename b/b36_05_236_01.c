MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("B360523601_05_000");
MsgDisp("Hiiragi","｛主人公｝, are you having fun?");
MsgDisp("主人公","Yeah, I didn't think you'd be able to come
to the Night Parade today!");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B360523601_05_010");
MsgDisp("Hiiragi","That's good...
But now I feel a little more guilty.");
MsgDisp("主人公","Eh?");
ChEyeOpenLevel(5,0);
VoicePlay("B360523601_05_020");
MsgDisp("Hiiragi","Because Inori-kun and Mikage-sensei can't
see your sparkling face right now.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B360523601_05_030");
MsgDisp("Hiiragi","It's only for me.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(5);
VoicePlay("B360523601_05_040");
MsgDisp("Hiiragi","I feel bad for those two, but I'll have it
to myself for now.
Shall we sit side by side?");
MsgDisp("主人公","(｛柊＊＊＊｝, you must have thought about
it a lot before inviting me...
Thank you.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(5,255,7,0,0,#1,#1,0,0,0,0);
