MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
BGOpen("tr460",0);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("B050500100_05_000");
MsgDisp("Hiiragi","I thought you weren't very good with
this sort of thing?");
MsgDisp("主人公","That may be true, but my legs
just brought me here......");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500100_05_010");
MsgDisp("Hiiragi","That's fine.
Let's find whatever it is you're 
subconciously searching for.");
MsgDisp("主人公","Y-Yeah.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_706");
Wait(30,0);
MsgDisp("主人公","Kyaa!");
SEPlay("EV_SE_707");
Wait(60,0);
MsgDisp("主人公","Aah!");
SEPlay("EV_SE_708");
SEWait();
MsgDisp("主人公","Eep......!");
VoicePlay("B050500100_05_020");
MsgDisp("Hiiragi","......Mmm.");
SEPlay("EV_SE_AMUSE_008",0,0.8);
VoicePlay("B050500100_39_000");
MsgDisp("Ghost","I curse you～!");
MsgDisp("主人公","∋");
SEStop("EV_SE_AMUSE_008",1);
VoicePlay("B050500100_05_030");
MsgDisp("Hiiragi","That is unacceptable.");
MsgDisp("主人公","Eh......｛柊＊＊＊｝?");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_I",0.01);
StlOpen("ev_05_03");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
VoicePlay("B050500100_05_040");
MsgDisp("Hiiragi","First of all......
The right side should be wrapped
over the left when you're dead.");
StlEyeOpenLevel(5,5);
SEPlay("EV_SE_623",0.3);
SEWait();
VoicePlay("B050500100_39_010");
MsgDisp("Ghost","Eh......Ah, yes.");
MsgDisp("主人公","｛柊＊＊＊｝?");
StlEyeOpenLevel(5,0,1);
VoicePlay("B050500100_05_050");
MsgDisp("Hiiragi","I couldn't help but notice.
Even in a broad sense, professionally
we aren't on the same level. ");
StlEyeOpenLevel(5,5,1);
SEPlay("EV_SE_552",0,0.8);
SEWait();
VoicePlay("B050500100_39_020");
MsgDisp("Ghost","I curse you～!");
StlEyeOpenLevel(5,-1);
VoicePlay("B050500100_05_060");
MsgDisp("Hiiragi","The headscarf is also completely wrong.");
StlEyeOpenLevel(5,5,1);
SEPlay("EV_SE_623",0.3,0.6);
SEWait();
VoicePlay("B050500100_39_030");
MsgDisp("Ghost","Ah, thank you so much......");
MsgDisp("主人公","Hehe, as expected of the chairman.");
StlEyeOpenLevel(5,-1);
VoicePlay("B050500100_05_070");
MsgDisp("Hiiragi","It's fine.
There's also room for improvement in the
timing of your appearance.");
VoicePlay("B050500100_39_040");
MsgDisp("Ghost","Ah, yes......
Thank you so much. P-Please excuse me.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(5,255,4,2,2,0,-1,0,0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ScrFadeIn(0);
VoicePlay("B050500100_05_080");
MsgDisp("Hiiragi","Sorry, it's a work habit.");
MsgDisp("主人公","It's fine.
The ghost said thank you, didn't he?");
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B050500100_05_090");
MsgDisp("Hiiragi","What about you?
I didn't spoil your fun, did I?");
MsgDisp("主人公","Ah, I guess because of 
｛柊＊＊＊｝ it was
a bit less scary?");
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,8);
VoicePlay("B050500100_05_100");
MsgDisp("Hiiragi","Hmm......
Is that a good thing?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
