ChEye(1,5);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,6);
VoicePlay("T020100000_01_590");
MsgDisp("Kazama","Wait!
What's wrong?");
ChEye(1,3);
MsgDisp("主人公","I'm sorry,
I can't put it into words......");
MsgDisp("主人公","Thank you for always thinking of me. I
also like ｛風真＊＊｝.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,2);
VoicePlay("T020100000_01_600");
MsgDisp("Kazama","That hug just now......
Does that mean you'd be okay with it?
Marrying me?");
MsgDisp("主人公","Yeah. I've let down ｛風真＊＊｝ because I
forgot so many things, I'm sorry.");
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,7);
VoicePlay("T020100000_01_610");
MsgDisp("Kazama","It's okay. You remembered the most
important memory of all.");
MsgDisp("主人公","A wish made by a pinwheel......");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("T020100000_01_440");
MsgDisp("Kazama","Ah, let's make a wish together.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("T020100000_01_640");
MsgDisp("Kazama","May we always be happy and healthy,
and may we get married.");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("T020100000_01_650");
MsgDisp("Ryota","I absolutely hope it can come true......");
ChEye(1,0);
ChMouth(1,3);
ChEyeOpenLevel(1,10);
VoicePlay("T020100000_01_660");
MsgDisp("Kazama","Absolutely, I hope so......");
MsgClear();
ScrFadeOut(0,1);
ChClose(1,0,0);
StlOpen("ev_01_20");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("T020100000_01_670");
MsgDisp("Kazama","......Ah, that's right. This. It looks
similar to your hair accessory doesn't it?");
MsgDisp("主人公","Wow, it's beautiful...!");
VoicePlay("T020100000_01_680");
MsgDisp("Kazama","I found and bought it when I
was in England.");
StlEyeOpenLevel(1,5,1);
VoicePlay("T020100000_01_690");
MsgDisp("Kazama","——I'll definitely give it to you one
day.");
MsgDisp("主人公","｛風真＊＊｝......
Thank you.");
StlEyeOpenLevel(1,0,1);
Wait(8,0);
StlEyeOpenLevel(1,#1);
VoicePlay("T020100000_01_700");
MsgDisp("Kazama","I'll put it on for you.");
BGMStop(5);
MsgClear();
ScrFadeOut(0,1);
StlClose();
SEPlay("EV_SE_694",0,0.7);
SEWait();
VoicePlay("T020100000_01_710");
MsgDisp("Kazama","Like this......");
StlOpen("ev_01_22");
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("T020100000_01_720");
MsgDisp("Kazama","｛主人公｝,
Let's go ahead and hold the ceremony 
like this.");
MsgDisp("主人公","......Yes.");
VoicePlay("T020100000_01_730");
MsgDisp("Kazama","I'll hold you close......");
VoicePlay("T020100000_01_740");
MsgDisp("Kazama","And never let you go.");
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
VoicePlay("T020100000_01_750");
MsgDisp("Kazama","The bell is ringing...! Come on!");
StlEyeOpenLevel(1,5,1);
StlMouth(1,1);
VoicePlay("T020100000_01_760");
MsgDisp("Kazama","I don't need to wish any more.
As long as you're in my arms.");
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
