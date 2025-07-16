MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B360103300_01_001");
MsgDisp("Kazama","Yeah, it's nice here.");
MsgDisp("主人公","｛風真＊＊｝ likes the deep sea
corner doesn't he?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B360103300_01_010");
MsgDisp("Kazama","It's got nothing to do with the place. I
like the difference between how you are
when we're part of a group to when it's
just the two of us.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360103300_01_020");
MsgDisp("Kazama","When we're alone, I can do things like
this.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.5);
ChClose(1,0,30);
ChLayout(0);
MsgClose();
SEStop("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.1);
SEPlay("EV_SE_544");
ChOpen(1,255,7,0,3,8,#1,0,0,0,30);
MsgDisp("主人公","Ehh∋");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B360103300_01_030");
MsgDisp("Kazama","Why are you that surprised?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.5);
MsgClose();
ChClose(1,0,30);
ChLayout(1);
MsgClose();
ChOpen(1,255,7,0,2,#1,#1,0,0,0,30);
MsgDisp("主人公","B-Because...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B360103300_01_040");
MsgDisp("Kazama","Isn't it nice for it to be just the two of
us after the ruckus with everyone?");
MsgDisp("主人公","Hey, stop getting weird enjoyment from
this!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B360103300_01_050");
MsgDisp("Kazama","My bad.
Alright, this is a waste of time.
Let's go.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChCheek(1,0);
