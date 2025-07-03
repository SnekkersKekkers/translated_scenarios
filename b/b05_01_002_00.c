BGOpen("tr520",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B050100200_01_000");
MsgDisp("Kazama","How about we finish the day with some
coffee boiled over charcoal, whilst
watching the autumn leaves?");
MsgDisp("主人公","Waa, that sounds wonderful");
MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_523",1.2,0.5);
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Phew, thank you for the coffee.");
VoicePlay("B050100200_01_010");
MsgDisp("Kazama","We're not done yet.");
MsgClose();
ChClose(1,0,0);
StlOpen("ev_01_05");
StlEye(1,0);
StlMouth(1,0);
StlCheek(1,3);
BGMPlay("BGM_C01_RYOUTA_D",0.01);
SEVol(0.5,1);
ScrFadeIn(0);
VoicePlay("B050100200_01_020");
MsgDisp("Kazama","Here!
You like this don't you?");
MsgDisp("主人公","Waa, when did you get this?
｛風真＊＊｝, you're like a magician!");
StlEyeOpenLevel(1,5);
VoicePlay("B050100200_01_030");
MsgDisp("Kazama","I haven't heard of a magician
that pulls out sweet potatoes.");
StlEyeOpenLevel(1,-1);
VoicePlay("B050100200_01_040");
MsgDisp("Kazama","Here.
It's piping hot, so be careful.");
MsgDisp("主人公","Yeah.
Looks delicious.
Thank you for the food!");
StlEyeOpenLevel(1,5);
StlMouthOpenLevel(1,0);
StlCheek(1,5);
VoicePlay("B050100200_01_050");
MsgDisp("Kazama","…………");
MsgDisp("主人公","Hey...
If you stare at me like that, 
it'll be hard for me to eat.");
StlEye(1,1);
StlMouth(1,1);
StlCheek(1,7);
VoicePlay("B050100200_01_060");
MsgDisp("Kazama","Eh, ah that's right.
You just looked so dazed
when taking a bite.");
StlEyeOpenLevel(1,0);
Wait(14,0);
StlEye(1,0);
StlMouth(1,0);
StlCheek(1,5);
VoicePlay("B050100200_01_070");
MsgDisp("Kazama","Look, you're going to choke.");
StlEyeOpenLevel(1,0);
Wait(14,0);
StlEyeOpenLevel(1,5);
MsgDisp("主人公","Hey, you're just a worrywart.");
MsgClose();
ScrFadeOut(0,0);
StlClose();
SEStop("EV_SE_523",1.8);
BGMVol(0.5,2);
Wait(60,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for the meal.
Thank you, ｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100200_01_080");
MsgDisp("Kazama","It's fine.
I thank you too.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100200_01_090");
MsgDisp("Kazama","When you have a nice reaction like that, 
it's worthwhile for me too.");
MsgDisp("主人公","Next time I'll be the one to surprise
｛風真＊＊｝ with something he likes. What
would be good for you?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B050100200_01_100");
MsgDisp("Kazama","Hey, that's not a surprise then.");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
ChCheek(1,7);
VoicePlay("B050100200_01_110");
MsgDisp("Kazama","Well, what I like is always 
right in front of me.");
MsgDisp("主人公","(Always in front of him? 
What is that...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
ChPrmTblAdd(1,0);
