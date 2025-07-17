BGOpen("sc310",0);
ChLayout(2);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,30);
Wait(15,0);
ChOpen(1,254,0,0,0,#1,#1,0,1,0,30);
Wait(15,0);
ChOpen(3,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
SEPlay("EV_SE_618");
SEWait();
ChMouth(1,3);
VoicePlay("D120B00000_01_000");
MsgDisp("Kazama","... Ah.
For this Habatcher entry, are we doing a
special feature on Nanatsumori?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,4,1);
VoicePlay("D120B00000_04_000");
MsgDisp("Nanatsumori","Shhh!");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("D120B00000_01_010");
MsgDisp("Kazama","No one's listening.");
ChMouth(1,2);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("D120B00000_04_010");
MsgDisp("Nanatsumori","You're not careful enough.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D120B00000_03_000");
MsgDisp("Honda","That's right.
Ryo-kun is well-known, so the people
around him pay attention to him, right?");
ChMouth(4,2);
ChMotion(4,0,1);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D120B00000_01_020");
MsgDisp("Kazama","Pay attention, how?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D120B00000_03_010");
MsgDisp("Honda","\"The Young Mastery of Habataki City\".
Some girls always have their antennas up
for everything Ryo-kun says and does.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChMouthOpenLevel(1,0);
VoicePlay("D120B00000_01_030");
MsgDisp("Kazama","......");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D120B00000_03_020");
MsgDisp("Honda","Heyhey, Mii-kun, show me your page!");
ChEye(4,1);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("D120B00000_04_020");
MsgDisp("Nanatsumori","The two of you...your attentiveness
level is ZERO!");
MsgDisp("主人公","(Attentiveness level...)");
ChEye(4,5);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D120B00000_04_030");
MsgDisp("Nanatsumori","∈");
ChEye(4,1);
ChMouth(4,3);
VoicePlay("D120B00000_04_040");
MsgDisp("Nanatsumori","...I just had a great idea.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
MsgDisp("主人公","?");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChClose(1,0,0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_0b_02");
StlEye(1,0);
StlMouth(1,0);
StlEye(3,0);
StlEyeOpenLevel(3,5,1);
StlMouth(3,0);
StlEye(4,0);
StlMouth(4,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("D120B00000_04_050");
MsgDisp("Nanatsumori","...Alright, it's done.");
MsgDisp("主人公","Uwaah...
You two look completely different!");
StlEyeOpenLevel(3,#1);
VoicePlay("D120B00000_03_030");
MsgDisp("Honda","Amazing!
Is this the special edition: \"Change your
look in just 5 minutes\"∈");
StlEyeOpenLevel(3,5,1);
MsgDisp("主人公","(It seems so!
But using my hair clip...)");
StlEyeOpenLevel(1,5,1);
VoicePlay("D120B00000_01_040");
MsgDisp("Kazama","... Hey, we're done here.
So you can take it off now——");
StlEyeOpenLevel(4,5,1);
VoicePlay("D120B00000_04_060");
MsgDisp("Nanatsumori","No.");
StlEyeOpenLevel(1,0,1);
VoicePlay("D120B00000_01_050");
MsgDisp("Kazama","Ahhh...
I feel weird without my bangs...");
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
SEPlay("EV_SE_588",0,0.4);
SEPlay("EV_SE_863",0,0.6);
Wait(30,0);
StlEye(1,1);
StlEye(3,1);
StlEye(4,1);
VoicePlay("D120B00000_44_000");
MsgDisp("School Girl A","Kazama-kun's hairstyle looks like
something I saw in a special edition of
Nana's magazine! Let me take a picture!");
StlEyeOpenLevel(1,5,1);
StlEyeOpenLevel(4,5,1);
VoicePlay("D120B00000_45_000");
MsgDisp("School Girl B","Kazama-kun is SUPER cute～▼
Honda-kun is also very handsome～▼");
SEStop("EV_SE_588",2);
SEStop("EV_SE_863",2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("sc310",0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0,0,30);
Wait(15,0);
ChOpen(1,254,0,2,2,#1,#1,0,1,0,30);
Wait(15,0);
ChOpen(3,254,0,0,0,#1,#1,0,2);
ScrFadeIn(0);
MsgDisp("主人公","Phew...
That suddenly turned into a photoshoot?");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D120B00000_04_070");
MsgDisp("Nanatsumori","Do the two of you get it now?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D120B00000_01_060");
MsgDisp("Kazama","... That was bad.
Those girls have an incredible antenna.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D120B00000_04_080");
MsgDisp("Nanatsumori","Even if you're not always aware of it, you
should try to remember that the people are
you are always watching.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D120B00000_01_070");
MsgDisp("Kazama","I'll keep that in mind.");
ChEye(1,0);
ChMouth(1,2);
ChSet(3,3);
VoicePlay("D120B00000_03_040");
MsgDisp("Honda","That was fun!
Being a celebrity is really popular, huh");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,4,1);
VoicePlay("D120B00000_04_090");
MsgDisp("Nanatsumori","Shh∈");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("D120B00000_01_080");
MsgDisp("Kazama","The treatment didn't work on one of us,
huh?");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("D120B00000_04_100");
MsgDisp("Nanatsumori","And Dahon is sort of a celebrity too
...
It's unfair.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D120B00000_03_050");
MsgDisp("Honda","What's wrong?
The two of you have a scary look on your
face.");
MsgDisp("主人公","(It's true...
All three of them are celebrities but they
have varying levels of awareness.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
ChPrmTblAdd(3,0);
ChPrmTblAdd(4,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
