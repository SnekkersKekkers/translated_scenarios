MsgDisp("主人公","......Yes.");
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
ChCheek(1,10);
Wait(12,0);
ChEye(1,3);
ChMouth(1,2);
VoicePlay("T020101000_01_180");
MsgDisp("Kazama","Huh, really......?");
MsgDisp("主人公","Yes, I also like ｛風真＊＊｝.
Thank you for always thinking of me.");
ChEye(1,4);
ChMouth(1,2);
ChCheek(1,6);
MsgDisp("主人公","I'm sorry I've disappointed ｛風真＊＊｝
so much by forgetting so many things.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020101000_01_190");
MsgDisp("Kazama","It's okay.
You remembered the most important memory
of all.");
MsgDisp("主人公","A wish made by a pinwheel......");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020101000_01_200");
MsgDisp("Kazama","Ah, the wish we made together.
It really came true.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("T020101000_01_220");
MsgDisp("Kazama","May we always be happy and healthy, and
may we get married.");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("T020101000_01_230");
MsgDisp("Ryota","I absolutely hope it can come true......");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,10);
VoicePlay("T020101000_01_240");
MsgDisp("Kazama","Absolutely, I hope so......");
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
StlOpen("ev_01_20");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_250");
MsgDisp("Kazama","......Ah, that's right. This. It looks
similar to your hair accessory doesn't it?");
MsgDisp("主人公","Wow, it's beautiful...!");
VoicePlay("T020101000_01_260");
MsgDisp("Kazama","I found and bought it when I was in
England.");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020101000_01_270");
MsgDisp("Kazama","——I promised to definitely give it to
you one day.");
MsgDisp("主人公","｛風真＊＊｝...... Thank you.");
StlEyeOpenLevel(1,0,1);
Wait(8,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020101000_01_280");
MsgDisp("Kazama","I'll put it on for you.");
BGMStop(5);
MsgClear();
ScrFadeOut(0,1);
StlClose();
SEPlay("EV_SE_694",0,0.7);
SEWait();
VoicePlay("T020101000_01_290");
MsgDisp("Kazama","And then......");
StlOpen("ev_01_22");
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("T020101000_01_300");
MsgDisp("Kazama","｛主人公｝, let me see your face
properly.");
MsgDisp("主人公","Eh?");
VoicePlay("T020101000_01_310");
MsgDisp("Kazama","I won't let you forget again.");
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
StlMouth(1,1);
Wait(6,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_320");
MsgDisp("Kazama","It's ringing...!
Our wedding bells.");
StlEyeOpenLevel(1,0,1);
Wait(6,0);
StlEyeOpenLevel(1,#1);
StlMouth(1,0);
VoicePlay("T020101000_01_330");
MsgDisp("Kazama","Then, let's go!");
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
