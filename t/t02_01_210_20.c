MsgDisp("主人公","...Yes.");
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChCheek(1,8);
Wait(12,0);
ChEye(1,5);
ChMouth(1,2);
ChCheek(1,8);
VoicePlay("T020121000_01_200");
MsgDisp("Kazama","Huh, really...?");
ChEye(1,3);
MsgDisp("主人公","Yes, I also like ｛風真＊＊｝.
Thank you for always thinking of me.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,6);
VoicePlay("T020121000_01_210");
MsgDisp("Kazama","I have to thank those guys too.");
MsgDisp("主人公","Hehe, yeah.
Thank the first-grade elementary school
student ｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020121000_01_220");
MsgDisp("Kazama","That's right.
It's thanks to everyone's help that my
wish came true.");
MsgDisp("主人公","The pinwheel wish...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("T020121000_01_240");
MsgDisp("Kazama","May we always be happy and healthy and may
we be able to get married.");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("T020121000_01_250");
MsgDisp("Ryota","I really hope it will happen...");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,10);
VoicePlay("T020121000_01_260");
MsgDisp("Kazama","Really, I hope it can happen...");
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
StlOpen("ev_01_20");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020121000_01_270");
MsgDisp("Kazama","...Ah, that's right. This. It looks
similar to your hair accessory doesn't it?");
MsgDisp("主人公","Wow, it's beautiful...!");
VoicePlay("T020121000_01_280");
MsgDisp("Kazama","I found and bought it when I was in
England.");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020121000_01_290");
MsgDisp("Kazama","——I promised to definitely give it to
you one day.");
MsgDisp("主人公","｛風真＊＊｝...
Thank you.");
StlEyeOpenLevel(1,0,1);
Wait(8,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020121000_01_300");
MsgDisp("Kazama","I'll put it on for you.");
BGMStop(5);
MsgClear();
ScrFadeOut(0,1);
StlClose();
SEPlay("EV_SE_694",0,0.7);
SEWait();
VoicePlay("T020121000_01_310");
MsgDisp("Kazama","Also...");
StlOpen("ev_01_22");
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("T020121000_01_320");
MsgDisp("Kazama","｛主人公｝, look this way.");
MsgDisp("主人公","Eh...okay.");
VoicePlay("T020121000_01_330");
MsgDisp("Kazama","Before those guys come...");
VoicePlay("T020121000_01_340");
MsgDisp("Kazama","You're lovely.");
BGMStop();
MsgClear();
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClear();
ScrFadeOut(0,1);
StlClose();
StlOpen("ev_01_21");
StlEye(1,0);
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
Wait(6,0);
ScrFadeIn(0);
VoicePlay("T020121000_01_350");
MsgDisp("Kazama","The bell is ringing...!
Those guys will be coming soon.");
StlEyeOpenLevel(1,0,1);
Wait(6,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020121000_01_360");
MsgDisp("Kazama","Then, come on!
My bride.");
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
