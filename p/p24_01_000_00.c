BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc741",0);
BGMPlay("BGM_ENGEKI_A",0.01);
ChLayout(1);
MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_588",0,0.8);
SEPlay("EV_SE_858");
Wait(50,0);
VoicePlay("P240100000_47_000");
MsgDisp("Audience","Kazama-kun, look this way～!");
SEStop("EV_SE_588",3);
SEStop("EV_SE_858",2);
MsgDisp("主人公","(｛風真＊＊｝ is really popular huh......
Ah, I need to concentrate more∈)");
MsgClose();
SEPlay("EV_SE_544",0,0.7);
ChOpen(1,38,0,0,4,#1,#1,0,0);
ChMotion(1,3);
VoicePlay("P240100000_01_000");
MsgDisp("Kazama","I'm looking for the owner of this glass
slipper.");
VoicePlay("P240100000_46_000");
MsgDisp("Stepsister A","Prince, I am the owner of those slippers.
...Ah, it won't fit.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("P240100000_01_010");
MsgDisp("Kazama","...It doesn't seem to fit.");
ChEye(1,0);
VoicePlay("P240100000_48_000");
MsgDisp("Stepsister B","Dear sister, it is my turn next.
...It's in.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("P240100000_01_020");
MsgDisp("Kazama","......It's a bit too small.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,10);
VoicePlay("P240100000_01_030");
MsgDisp("Kazama","The owner doesn't seem to be here either.");
MsgDisp("主人公","Um, please wait a moment...
Please let me try it on too——");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P240100000_01_040");
MsgDisp("Kazama","You...");
VoicePlay("P240100000_46_010");
MsgDisp("Stepsister A","Hohoho, 
They won't fit your feet, right? ");
ChEye(1,4);
VoicePlay("P240100000_48_010");
MsgDisp("Stepsister B","Stand back, Cinderella!");
ChEye(1,0);
ChMouth(1,4);
ChMotion(1,0,1);
VoicePlay("P240100000_01_050");
MsgDisp("Kazama","Cinderella...
...Please step forward.");
MsgDisp("主人公","Y-Yes, Prince.");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
SEPlay("EV_SE_544",0,0.6);
Wait(20,0);
SEPlay("EV_SE_677",0,0.5);
Wait(60,0);
StlOpen("ev_01_18");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
Wait(30,0);
MsgDisp("主人公","(Wow... ｛風真＊＊｝ really looks like a
prince, huh?)");
StlEye(1,0,0);
StlEyeOpenLevel(1,5,1);
StlMouth(1,1);
StlMouthOpenLevel(1,0);
VoicePlay("P240100000_01_060");
MsgDisp("Kazama","...?");
MsgDisp("主人公","(Ah, no good...
｛風真＊＊｝, that's the wrong foot.)");
StlEye(1,1);
StlMouthOpenLevel(1,#1);
StlCheek(1,7);
VoicePlay("P240100000_01_070");
MsgDisp("Kazama","!");
MsgClose();
Wait(20,0);
StlEye(1,0);
StlEyeOpenLevel(1,5);
StlMouth(1,2);
StlNear(1,0,30);
Wait(100,1);
StlEyeOpenLevel(1,0,1);
Wait(6,0);
StlEye(1,0);
StlMouth(1,0);
StlCheek(1,0);
VoicePlay("P240100000_01_080");
MsgDisp("Kazama","I finally met you at last, Cinderella.");
VoicePlay("P240100000_01_090");
MsgDisp("Kazama","On the night of the ball, you stole my
heart away. And as the clock struck 12,
you disappeared.");
MsgDisp("主人公","Prince......");
SEPlay("EV_SE_676");
Wait(150,1);
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc741",0);
ChLayout(0);
MsgClose();
ChOpen(1,38,3,0,3,#1,#1,0,0,0,0);
SEPlay("EV_SE_675",0.5,0.7,0.2);
Wait(70,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("P240100000_01_100");
MsgDisp("Kazama","I won't let you go anywhere again.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P240100000_01_110");
MsgDisp("Kazama","From today, the sound of this bell will
not be a symbol of farewell, but a symbol
of reunion and eternal promise.");
SEStop("EV_SE_676",1.5);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P240100000_01_120");
MsgDisp("Kazama","——Let's get married.");
SEPlay("EV_SE_588",0,0.5);
SEPlay("EV_SE_GAYA_021",0,0.9);
MsgClose();
BGMStop(3);
MsgClose();
ScrFadeOut(0,0,120);
Wait(60,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEStop("EV_SE_588",1.5);
SEStop("EV_SE_GAYA_021",1.5);
BGOpen("sc740",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝, 
that was the wrong foot right?
I was surprised!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P240100000_01_130");
MsgDisp("Kazama","I was worried too. But thanks to you, it
all worked out, right?");
MsgDisp("主人公","Yeah, 
we got a huge round of applause, 
Everyone seemed really happy.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P240100000_01_140");
MsgDisp("Kazama","That's good.
Well, I'll be waiting for your reply. ");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Reply...?
Eh...could it be, about marriage∋)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);
