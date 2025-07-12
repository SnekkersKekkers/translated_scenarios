BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
MsgClose();
ChClose(1,0,0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChPosition(2,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChPosition(6,2);
ScrFadeIn(0);
MsgDisp("主人公","...Huh?
Where's ｛風真＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A10201_02_000");
MsgDisp("Sassa","He's buying tickets.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A10201_06_000");
MsgDisp("Himuro","Despite how he looks, 
he's surprisingly caring. ");
MsgDisp("主人公","Hehe, that's right.");
VoicePlay("B330A10201_01_000");
MsgDisp("Kazama","Here, your tickets.");
SEPlay("EV_SE_FOOT_WALK_COME_RUN");
SEWait();
MsgClose();
ChClose(2,0,30);
ChClose(6,0,30);
ChLayout(2);
MsgClose();
ChOpen(2,255,2,0,0,#1,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(1,255,3,0,3,#1,#1,0,0,0,30);
VoicePlay("B330A10201_02_010");
MsgDisp("Sassa","Ryota, 
why are you cutting in between?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A10201_06_010");
MsgDisp("Himuro","Why...
This is Ryota-senpai 
we're talking about.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10201_01_010");
MsgDisp("Kazama","What's that mean.
I'm the one in front of her?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330A10201_06_020");
MsgDisp("Himuro","Haa...
I praised him just now,
but I take it back.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A10201_01_020");
MsgDisp("Kazama","Inori praised me?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A10201_02_020");
MsgDisp("Sassa","He said you're caring.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A10201_01_030");
MsgDisp("Kazama","What was he praising me for?
...Geez.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A10201_01_040");
MsgDisp("Kazama","Alright, let's go.
It'll be feeding time soon.
You all wanna watch right?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("B330A10201_02_030");
MsgDisp("Sassa","Ohー!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("B330A10201_06_030");
MsgDisp("Himuro","Sounds good.");
SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
MsgClose();
ChClose(1,0,30);
ChClose(2,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(Hehe, it's true. Seems like ｛風真＊＊｝
is surprisingly caring?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
