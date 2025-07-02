ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,2);
ChEyeOpenLevel(5,0);
Wait(20,0);
ChMotion(5,0);
Wait(16,0);
ChMouth(5,4);
ChEyeOpenLevel(5,9);
VoiceEVSPlay(5);
VoicePlay("T020520022_05_000");
MsgDisp("Hiiragi","｛主人公｝,
What's the matter?");
MsgDisp("主人公","I was worried I couldn't fully express it
in words...... I also like ｛柊＊＊＊｝.");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,0);
ChMouth(5,3);
ChCheek(5,5);
VoicePlay("T020520022_05_010");
MsgDisp("Hiiragi","Is that so? 
To make sure I understand. ");
Wait(60,0);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,3);
ChMouth(5,4);
ChCheek(5,0);
VoicePlay("T020520022_05_020");
MsgDisp("Hiiragi","Hehe. I got a reply in a way that's very
typical of you——");
ChEye(5,4);
VoicePlay("T020520022_05_030");
MsgDisp("Hiiragi","I think Inori-kun and Mikage-sensei will
be surprised.");
MsgDisp("主人公","Eehhh∋
I wish you wouldn't tell them that......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,0);
ChMouth(5,3);
ChEyeOpenLevel(5,10);
VoicePlay("T020520022_05_040");
MsgDisp("Hiiragi","I understand. But, you know,
I've been beaten so many times——");
MsgDisp("主人公","?");
ChEye(5,4);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020520022_05_050");
MsgDisp("Hiiragi","Now it's my turn.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(5,0,0);
Wait(120,0);
StlOpen("ev_05_17");
ScrFadeIn(0);
VoicePlay("T020520022_05_060");
MsgDisp("Hiiragi","From now on, 
I will definitely return the favour.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
