MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex060",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Haa.. Don't you feel like letting out a
sigh of relief?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B360450300_04_000");
MsgDisp("Nanatsumori","Yeah. Today has been hectic. Finally, we
can have some quiet time.");
MsgDisp("主人公","Hehe.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B360450300_04_010");
MsgDisp("Nanatsumori","What about you?
Aren't you tired?");
MsgDisp("主人公","No. It was so fun, my heart is still
racing.");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("B360450300_04_020");
MsgDisp("Nanatsumori","Your heart is still racing...
You mean the aftertaste?");
MsgDisp("主人公","Hmm... I wonder.
It's a bit different.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B360450300_04_030");
MsgDisp("Nanatsumori","Hey, look into my eyes.");
MsgDisp("主人公","Y-Yeah.");
ChMouthOpenLevel(4,0);
VoicePlay("B360450300_04_040");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","............");
ChMouthOpenLevel(4,#1);
VoicePlay("B360450300_04_050");
MsgDisp("Nanatsumori","Does this make your 
heart race?");
MsgDisp("主人公","Maybe it's even faster...?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B360450300_04_060");
MsgDisp("Nanatsumori","Alright.");
MsgDisp("主人公","(???)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ChCheek(4,0);
