MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Waa, it's beautiful...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B360223601_02_000");
MsgDisp("Sassa","Yeah, beautiful...");
MsgDisp("主人公","Eh,｛颯砂＊＊｝...
If you're looking this way, 
you won't be able to
see the parade?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B360223601_02_010");
MsgDisp("Sassa","A-ah, I see. Then, 
I'll watch itn next to you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(2);
SEWait();
MsgDisp("主人公","Hey, skull bear!");
VoicePlay("B360223601_02_020");
MsgDisp("Sassa","It really is.
It's your favourite isn't it?");
MsgDisp("主人公","It's cute.");
VoicePlay("B360223601_02_030");
MsgDisp("Sassa","Yeah, the side
profile is cute too.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,255,0,0,4,-1,-1,0,0);
MsgDisp("主人公","｛颯砂＊＊｝ thinks so too?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B360223601_02_040");
MsgDisp("Sassa","Yeah.
But I prefer the
front view the best.");
MsgDisp("主人公","Hm?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("B360223601_02_050");
MsgDisp("Sassa","Ah, I'm talking about this.");
MsgDisp("主人公","(｛颯砂＊＊｝ keeps turning 
away from the parade...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
