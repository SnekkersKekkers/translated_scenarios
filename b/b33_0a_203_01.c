ChLayout(4);
BGOpen("fp510",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A20301_02_000");
MsgDisp("Sassa","Hey, why don't we
have a competition?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20301_01_000");
MsgDisp("Kazama","Let's not.
Sassa, what would we even do underwater?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330A20301_06_000");
MsgDisp("Himuro","I don't mind.
I might have a chance
if it's in water.");
ChEyeOpenLevel(1,-1);
MsgDisp("主人公","But, won't we bother the people 
around us if we have a competition?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("B330A20301_02_010");
MsgDisp("Sassa","I see.
Then, let's compete on how long we
can dive for. Shall we do that?");
MsgDisp("主人公","If so... that might be fine.
But you all have to be careful okay?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A20301_02_020");
MsgDisp("Sassa","Yeah, got it.
Then, it's decided, right?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330A20301_06_010");
MsgDisp("Himuro","I don't mind.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B330A20301_01_010");
MsgDisp("Kazama","Fine by me.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A20301_02_030");
MsgDisp("Sassa","Then, I'll leave it to you to referee.");
SEPlay("EV_SE_571");
SEPlay("EV_SE_562");
MsgClose();
ChClose(6,0,30);
ChClose(1,0,30);
ChClose(2,0,30);
SEWait();
MsgDisp("主人公","Then, let's go.
Ready, set, go!");
SEPlay("EV_SE_631",0,0.9);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(...?
No matter how you look at it,
it's been too long...)");
MsgDisp("主人公","Everyone! Are you alri-——");
SEPlay("EV_SE_573",0,0.9);
SEWait();
Wait(10,0);
SEPlay("EV_SE_571");
SEPlay("EV_SE_562");
ChOpen(2,31,5,2,1,-1,5,0,3,0,30);
ChMouth(2,-1);
ChMouth(2,0);
ChOpen(1,31,3,0,1,0,5,0,3,0,30);
ChMouth(1,2);
ChEyeOpenLevel(1,-1);
ChOpen(6,31,5,2,1,0,5,0,3,0,30);
ChMouth(6,2);
ChEyeOpenLevel(6,-1);
VoicePlay("B330A20301_02_040");
MsgDisp("Sassa","Haa haa... was I first?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3,1);
VoicePlay("B330A20301_01_020");
MsgDisp("Kazama","Haa, haa...
n-no it was me, right?");
SEWait();
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20301_06_020");
MsgDisp("Himuro","Haa, haa... it was me.");
MsgDisp("主人公","(They were completely synchronised...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1);
ChClose(2);
ChClose(6);
ChLayout(2);
ChOpen(2,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(2,3);
ChOpen(1,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(1,3);
ChOpen(6,253,7,0,0,-1,-1,0,0,0,0);
ChPosition(6,3);
