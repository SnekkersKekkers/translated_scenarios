MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr300",1);
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChLayout(1);
MsgClose();
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,4,1);
ChEyeOpenLevel(5,0);
ScrFadeIn(0);
VoicePlay("B360522101_05_000");
MsgDisp("Hiiragi","Ahh, I didn't make it in time......");
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,9);
VoicePlay("B360522101_05_010");
MsgDisp("Hiiragi","I'm sorry.
I wanted you to see the sunset from the
castle tower.");
MsgDisp("主人公","There's no helping it.");
ChEyeOpenLevel(5,0);
VoicePlay("B360522101_05_020");
MsgDisp("Hiiragi","Maybe it's because I was greedy.");
MsgDisp("主人公","Greedy?");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B360522101_05_030");
MsgDisp("Hiiragi","Yeah, I wanted to see it with you.");
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("B360522101_05_040");
MsgDisp("Hiiragi","If I had invited Inori-kun and
Mikage-sensei as well, we would have made
it on time──");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,5);
ChMouthOpenLevel(5,6);
VoicePlay("B360522101_05_050");
MsgDisp("Hiiragi","Ah!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(5,0,30);
VoicePlay("B360522101_05_060");
MsgDisp("Hiiragi","We can see the castle being dyed in red
from here. It looks beautiful.");
MsgDisp("主人公","Ah, you're right......
The castle and sky are both dyed red.");
VoicePlay("B360522101_05_070");
MsgDisp("Hiiragi","You can't see this view from inside
the castle.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(5,255,4,3,4,-1,-1,0,0);
VoicePlay("B360522101_05_080");
MsgDisp("Hiiragi","What a strange coincidence.
If we made it in time for the viewing,
we wouldn't have seen this.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B360522101_05_090");
MsgDisp("Hiiragi","I'm glad I came with you after all......");
MsgDisp("主人公","(｛柊＊＊＊｝……)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
