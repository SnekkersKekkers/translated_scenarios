MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf110",1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
MsgClose();
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4,1);
ScrFadeIn(0);
VoicePlay("B360501101_05_000");
MsgDisp("Hiiragi","Phew, we made it in time for the sunset.");
MsgDisp("主人公","Yeah, it's beautiful...");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B360501101_05_010");
MsgDisp("Hiiragi","I wanted to see it, just you and me.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("B360501101_05_020");
MsgDisp("Hiiragi","Ah, if I say something like that, Inori
will scold me.");
MsgDisp("主人公","Hehe, that's probably right.
How about ｛御影＊＊｝?");
ChEye(5,3);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B360501101_05_030");
MsgDisp("Hiiragi","Haha, what do you think?
Maybe he'll be angry along with Inori.");
MsgDisp("主人公","Yeah.
Should we invite them next time?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(40,1);
VoicePlay("B360501101_05_040");
MsgDisp("Hiiragi","...I don't want to.");
ChEyeOpenLevel(5,#1);
Wait(40,1);
MsgDisp("主人公","｛柊＊＊＊｝?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B360501101_05_050");
MsgDisp("Hiiragi","...Hehe.
That face is unfair.");
ChEye(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B360501101_05_060");
MsgDisp("Hiiragi","That always makes me laugh.");
MsgDisp("主人公","I'm not trying to make you laugh, though?");
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B360501101_05_070");
MsgDisp("Hiiragi","I see, excuse me.
But I still think it's better when it's
just us two.");
MsgDisp("主人公","(｛柊＊＊＊｝...Seems like he's having
fun, but he's also acting strange. What
happened...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,0);
