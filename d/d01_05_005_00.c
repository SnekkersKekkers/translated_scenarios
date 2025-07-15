MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, it's from Habatcher's Editorial
Department.
It says......)");
MsgDisp("主人公","(\"We'd like you to sneak into the Habataki
Theater Company rehearsal studio for an
insider scoop!\"......Ehh∋)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("bh500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This is ｛柊＊＊＊｝'s home, right?
It seems like the rehearsal studio is on
the property......)");
MsgClose();
SEPlay("EV_SE_723");
Wait(50,0);
VoicePlay("D010500500_43_000");
MsgDisp("Theater Member A","Ooogh!　Taah!");
VoicePlay("D010500500_05_000");
MsgDisp("Hiiragi?","If you can't do it in practice, how will
you be able to do it during the
performance?");
MsgDisp("主人公","(That voice is......)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_737",0,0.3);
Wait(50,0);
MsgDisp("主人公","Excuse me......");
BGMPlay("BGM_C05_HIIRAGI_I",0.01);
StlOpen("ev_05_12");
StlEye(5,0);
StlMouth(5,1);
ScrFadeIn(0);
SEPlay("EV_SE_723");
Wait(50,0);
VoicePlay("D010500500_43_010");
MsgDisp("Theater Member A","Ouugh!　Ahhh!");
MsgDisp("主人公","(Wow, so intense......)");
StlEyeOpenLevel(5,5);
VoicePlay("D010500500_33_020");
MsgDisp("Theater Member B","The chairman is difficult today too......");
VoicePlay("D010500500_46_000");
MsgDisp("Theater Member C","Yeah, the chairman is on a completely
different level......If you're not
careful, you'll get hurt.");
MsgDisp("主人公","(............)");
StlEye(5,1);
StlMouth(5,0);
VoicePlay("D010500500_05_010");
MsgDisp("Hiiragi","There!
Look carefully. Remember it..");
VoicePlay("D010500500_33_040");
MsgDisp("Theater Member B","Y-Yes sir!");
StlEye(5,0);
StlMouth(5,1);
VoicePlay("D010500500_05_020");
MsgDisp("Hiiragi","Let's do it again.
Starting from the beginning.");
VoicePlay("D010500500_38_000");
MsgDisp("Theater Members","Yes sir!");
SEPlay("EV_SE_723");
Wait(50,0);
SEStop("EV_SE_723",2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("bh500",0);
MsgClose();
ChOpen(5,35,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010500500_05_030");
MsgDisp("Hiiragi","My apologies.
I was just told that there was someone
here for an interview......");
MsgDisp("主人公","Yes. Thank you very much for allowing me
to intrude on your important practice.");
VoicePlay("D010500500_05_040");
MsgDisp("Hiiragi","I hope you are able to write a good
article.");
ChMouth(5,2);
VoicePlay("D010500500_38_010");
MsgDisp("Theater Members","Hahaha.");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D010500500_05_050");
MsgDisp("Hiiragi","......It can't be helped.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("D010500500_05_060");
MsgDisp("Hiiragi","Thanks to Habatcher's support, we have
been recruiting new members.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("D010500500_05_070");
MsgDisp("Hiiragi","I'm grateful for it, but we're lacking
intensity......");
MsgDisp("主人公","I don't see it like that——");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("D010500500_05_080");
MsgDisp("Hiiragi","No, since the city is supporting us, we
have to do better.
It's our obligation.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChEye(5,2);
ChMouth(5,2);
ChEyeOpenLevel(5,9);
VoicePlay("D010500500_38_020");
MsgDisp("Theater Members","Hahaha.");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D010500500_05_090");
MsgDisp("Hiiragi","Sigh......I'm going back to the rehearsal.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(Is ｛柊＊＊＊｝ okay......?
I wanted to tell him to relax a bit but
that's not something anyone can say.)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
