BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc740",0);
BGMPlay("BGM_ENGEKI_E",0.01);
ChLayout(1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("P240501000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","｛柊＊＊＊｝, good work.
IS the Habataki Castle set alright?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P240501000_05_010");
MsgDisp("Hiiragi","Just now, 
I viewed it from the audience.
It looks splendid.");
MsgDisp("主人公","Hehe, I'm glad.
All thats left to do is give our support.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P240501000_05_020");
MsgDisp("Hiiragi","Yes,
we'll be watching over. ");
MsgClose();
ScrFadeOut(0,0);
BGMVol(0.5,2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ScrFadeIn(0);
VoicePlay("P240501000_40_000");
MsgDisp("Castle Lord","Tonight is the last time
I will meet you like this.");
VoicePlay("P240501000_47_000");
MsgDisp("Town girl","...Why is that?");
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P240501000_05_030");
MsgDisp("Hiiragi","It's perfect.");
MsgDisp("主人公","That's because of ｛柊＊＊＊｝'s 
acting direction.");
ChEye(5,0);
VoicePlay("P240501000_05_040");
MsgDisp("Hiiragi","No.
My advice was not needed.
Look, this is a vital scene.");
VoicePlay("P240501000_40_020");
MsgDisp("Castle Lord","There are many in the castle who 
do not think favourably of me.");
VoicePlay("P240501000_47_010");
MsgDisp("Town girl","But you...
Aren't you the castle lord?");
ChEye(5,4);
ChEyeOpenLevel(5,8);
VoicePlay("P240501000_40_040");
MsgDisp("Castle Lord","A Castle Lord is but a mere figurehead. If
someone easier to support appears, they
will go with that person. That is the era
we live in.");
ChEyeOpenLevel(5,0);
VoicePlay("P240501000_40_050");
MsgDisp("Castle Lord","However, 
My governance is the flames of my ideals.
I cannot let it be extinguished.");
ChEyeOpenLevel(5,-1);
VoicePlay("P240501000_05_050");
MsgDisp("Hiiragi","That line just now...
It sounds completely different 
compared to when I wrote it.");
MsgDisp("主人公","Eh?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P240501000_05_060");
MsgDisp("Hiiragi","Are the Lord's ideals really everyone's
ideals?");
MsgDisp("主人公","｛柊＊＊＊｝...?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("P240501000_05_070");
MsgDisp("Hiiragi","The one who gave me the strength to think
this way might be you or our companions.");
ChEye(5,0);
VoicePlay("P240501000_05_080");
MsgDisp("Hiiragi","...Ah, this is the last scene.");
VoicePlay("P240501000_47_020");
MsgDisp("Town girl","Castle lord...");
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P240501000_47_030");
MsgDisp("Town girl","I will live with this sword at my side.
My soul will be with you forevermore.");
BGMStop();
SEPlay("EV_SE_GAYA_021");
MsgClose();
ScrFadeOut(0,0);
Wait(120,0);
SEStop("EV_SE_GAYA_021",2);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
ScrFadeIn(0);
MsgDisp("主人公","I'm so glad!");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
Wait(22,0);
VoicePlay("P240501000_05_090");
MsgDisp("Hiiragi","Yes, it was a great success. Producing a
play like this with everyone is fun.");
MsgDisp("主人公","(Seems like ｛柊＊＊＊｝ also enjoyed our
school play. That's a relief...)");
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
