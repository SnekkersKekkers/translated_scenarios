BGOpen("sc130",1);
ChLayout(2);
MsgClose();
ChOpen(1,254,0,0,2,0,-1,0,0,0,30);
Wait(15,0);
ChOpen(3,254,5,3,3,-1,-1,0,1,0,30);
Wait(15,0);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,2,0,30);
ScrFadeIn(0);
ChEye(1,0);
VoicePlay("D120B00200_03_000");
MsgDisp("Honda","She's here!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
MsgDisp("主人公","Huh?
What's everyone doing?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D120B00200_01_000");
MsgDisp("Kazama","I've been waiting for you.
Why do I have to go to the coffee shop
with these guys.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D120B00200_04_000");
MsgDisp("Nanatsumori","Kazama's going to buy us something
cold to drink.");
MsgDisp("主人公","Eh, really?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("D120B00200_01_010");
MsgDisp("Kazama","I never promised anything like that——");
MsgDisp("主人公","…………");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D120B00200_01_020");
MsgDisp("Kazama","Just for you, then.");
MsgDisp("主人公","(Yay!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_0b_04");
StlEye(1,0);
StlMouth(1,0);
StlEye(3,0);
StlMouth(3,0);
StlEye(4,0);
StlMouth(4,0);
Wait(6,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Phew......
It's nice and cold inside the store!");
StlMouthOpenLevel(1,0);
VoicePlay("D120B00200_01_030");
MsgDisp("Kazama","…………");
StlEyeOpenLevel(4,5,1);
StlMouthOpenLevel(4,0);
VoicePlay("D120B00200_04_010");
MsgDisp("Nanatsumori","…………");
StlEyeOpenLevel(3,5,1);
StlMouthOpenLevel(3,0);
VoicePlay("D120B00200_03_010");
MsgDisp("Honda","…………");
MsgDisp("主人公","(Eh?
Everyone has a scary look on their
face......∋)");
StlEyeOpenLevel(4,0,1);
StlMouth(4,0);
VoicePlay("D120B00200_04_020");
MsgDisp("Nanatsumori","......So.
Why don't you explain it.");
StlEyeOpenLevel(3,-1);
StlMouth(3,0);
VoicePlay("D120B00200_03_020");
MsgDisp("Honda","Right.
I want an explanation from Ryo-kun that
makes sense. ");
StlEyeOpenLevel(1,0,1);
StlMouth(1,1);
VoicePlay("D120B00200_01_040");
MsgDisp("Kazama","I don't need any explanation.
It's just natural.");
StlEyeOpenLevel(4,-1);
VoicePlay("D120B00200_04_030");
MsgDisp("Nanatsumori","You're making a move, huh......");
StlEyeOpenLevel(3,5,1);
VoicePlay("D120B00200_03_030");
MsgDisp("Honda","You're more aggressive than usual......");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("D120B00200_01_050");
MsgDisp("Kazama","Shut up.");
MsgDisp("主人公","H-Hey.
What's with you all?
Everyone looks so scary......");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("D120B00200_04_040");
MsgDisp("Nanatsumori","Hmm?
It's not something you should worry
about.");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("D120B00200_03_040");
MsgDisp("Honda","That's right!
This is a behavior that all living
creatures demonstrate.");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D120B00200_01_060");
MsgDisp("Kazama","Honda, you just said something good.
That's exactly how it is.");
StlEye(3,0);
StlMouth(3,0);
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(1,0);
VoicePlay("D120B00200_01_070");
MsgDisp("Kazama","So, it's be my victory.");
MsgDisp("主人公","？？？");
StlEyeOpenLevel(1,-1);
VoicePlay("D120B00200_01_080");
MsgDisp("Kazama","And I won't lose from now on.");
StlEyeOpenLevel(3,5,1);
VoicePlay("D120B00200_03_050");
MsgDisp("Honda","Come to think of it, Ryo-kun has been
standing next to me since we were
walking here.");
StlEyeOpenLevel(4,5,1);
StlMouth(4,1);
VoicePlay("D120B00200_04_050");
MsgDisp("Nanatsumori","Reserving your spot like that before
we even sit is really smart......");
MsgDisp("主人公","(Are they maybe talking about the
way we're sitting......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
ChPrmTblAdd(1,0);
ChPrmTblAdd(3,0);
ChPrmTblAdd(4,0);
