ChEye(1,5);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,8);
VoicePlay("T020101000_01_500");
MsgDisp("Kazama","Wait!
What's wrong?");
MsgDisp("主人公","I'm sorry, I can't put it into words...");
ChEye(1,3);
MsgDisp("主人公","Thank you for always thinking of me.
I also like ｛風真＊＊｝.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,2);
ChCheek(1,6);
VoicePlay("T020101000_01_510");
MsgDisp("Kazama","Would you be okay with it?
Marriage that is...");
MsgDisp("主人公","Yeah. I've let down
｛風真＊＊｝ because I forgot
so many things, I'm sorry.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("T020101000_01_520");
MsgDisp("Kazama","It's okay.
You remembered the most important memory
of all.");
MsgDisp("主人公","A wish made by a pinwheel...");
ChMotion(1,0,1);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("T020101000_01_530");
MsgDisp("Kazama","Ah, it really came true.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("T020101000_01_550");
MsgDisp("Kazama","May we always be happy and healthy, and
may we get married.");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("T020101000_01_560");
MsgDisp("Ryota","I absolutely hope it can come true...");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,10);
VoicePlay("T020101000_01_570");
MsgDisp("Kazama","Absolutely, I hope so...");
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
StlOpen("ev_01_20");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_580");
MsgDisp("Kazama","...Ah, that's right. This. It looks
similar to your hair accessory doesn't it?");
MsgDisp("主人公","Wow, it's beautiful...!");
VoicePlay("T020101000_01_590");
MsgDisp("Kazama","I found and bought it when I was in
England.");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020101000_01_600");
MsgDisp("Kazama","——I promised to definitely give it to
you one day.");
MsgDisp("主人公","｛風真＊＊｝...
Thank you.");
StlEyeOpenLevel(1,0,1);
Wait(8,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020101000_01_610");
MsgDisp("Kazama","I'll put it on for you.");
BGMStop(5);
MsgClear();
ScrFadeOut(0,1);
StlClose();
SEPlay("EV_SE_694",0,0.7);
SEWait();
VoicePlay("T020101000_01_620");
MsgDisp("Kazama","Also...");
StlOpen("ev_01_22");
ScrFadeIn(0);
VoicePlay("T020101000_01_630");
MsgDisp("Kazama","Keep your eyes open.");
MsgDisp("主人公","...Eh.");
VoiceEVSPlay(1);
VoicePlay("T020101000_01_640");
MsgDisp("Kazama","｛主人公｝, you won't
forget this, right?");
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
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020101000_01_650");
MsgDisp("Kazama","These are our wedding bells.
Come on!");
StlEyeOpenLevel(1,5,1);
StlMouth(1,1);
VoicePlay("T020101000_01_660");
MsgDisp("Kazama","I will never let you go again.");
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
