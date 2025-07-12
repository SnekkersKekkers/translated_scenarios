ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(6,255,0,0,0,#1,#1,0,3);
ChOpen(1,255,0,0,0,#1,#1,0,3);
ChOpen(2,255,0,0,0,7,#1,0,3);
SEPlay("EV_SE_817");
ScrFadeIn(0);
VoicePlay("B330A30701_02_000");
MsgDisp("Sassa","The rolelrcoaster is fun but
The feeling of having to entrust 
everything to that safety bar is...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B330A30701_01_000");
MsgDisp("Kazama","Your body still
sticks out of it doesn't it?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B330A30701_02_010");
MsgDisp("Sassa","That's right.
That's why I can't help but give it
a shake around to make sure.");
SEWait();
ChEye(1,2);
ChMouth(1,2);
MsgDisp("主人公","Ehh? That's dangerous?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("B330A30701_06_000");
MsgDisp("Himuro","It is.
It might break because of 
Nozomu-senpai's shaking?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B330A30701_02_020");
MsgDisp("Sassa","O-Oi.
Don't say such scary things.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("B330A30701_01_010");
MsgDisp("Kazama","Sassa.
You're banned from shaking it.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30701_02_030");
MsgDisp("Sassa","Got it.
But, I still can't quite trust it.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A30701_01_020");
MsgDisp("Kazama","That bar is 
definitely quite thin...");
MsgDisp("主人公","Yeah, 
if it's ｛颯砂＊＊｝ who has it on,
it sure seems that way.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B330A30701_02_040");
MsgDisp("Sassa","Right?
Ryota is pretty tall too.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330A30701_06_010");
MsgDisp("Himuro","Because of that, for your 
safety, I'll sit next to you.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A30701_02_050");
MsgDisp("Sassa","What kind of reasoning is that?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B330A30701_01_030");
MsgDisp("Kazama","If we think of it in terms 
of balance, Inori and Sassa 
should sit next to each other.");
MsgDisp("主人公","(Umm... we ended up talking 
about seats again...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
