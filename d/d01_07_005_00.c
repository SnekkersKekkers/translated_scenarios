BGOpen("sc300",1);
ChLayout(1);
SEPlay("EV_SE_845",0.5);
ScrFadeIn(0);
VoicePlay("D010700500_44_000");
MsgDisp("School Girl","Bye then～!");
MsgDisp("主人公","Yeah, byebye!");
SEStop("EV_SE_845",2);
MsgDisp("主人公","(Okay......I guess I should study for
that test a bit before I go home......)");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","Sigh......It's no use.
I don't get it......");
VoicePlay("D010700500_07_000");
MsgDisp("Mikage?","Which one?");
MsgDisp("主人公","Ah, ｛御影＊＊｝!
What are you doing here?");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("D010700500_07_010");
MsgDisp("Mikage","An honest girl is working hard,
so I came here to help.");
MsgClose();
ScrFadeOut(0);
ChClose(7,0,0);
SEPlay("EV_SE_621");
Wait(30,0);
SEPlay("EV_SE_530",1,0.5);
SEWait();
BGMPlay("BGM_C07_MIKAGE_C",0.01);
StlOpen("ev_07_11");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
VoicePlay("D010700500_07_020");
MsgDisp("Mikage","——So, which part of it don't you
understand?");
MsgDisp("主人公","Uhm......I guess I don't even know what
I don't know......");
StlEye(7,2);
VoicePlay("D010700500_07_030");
MsgDisp("Mikage","Hahaha, how refreshing.");
StlEye(7,1);
VoicePlay("D010700500_07_040");
MsgDisp("Mikage","Let's find out together, then.");
MsgDisp("主人公","O-Okay.
Will it really be alright, though?");
StlEye(7,0,0);
StlEyeOpenLevel(7,5,1);
VoicePlay("D010700500_07_050");
MsgDisp("Mikage","An honest girl can do anything she
tries, can't she?");
MsgDisp("主人公","Y-Yeah......");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc300",1);
ScrFadeIn(0);
VoicePlay("D010700500_07_060");
MsgDisp("Mikage","Okay, we're done.
That's all for today!");
MsgDisp("主人公","Yes!");
MsgClose();
BGOpen("sc300",1);
SEPlay("EV_SE_621");
Wait(30,0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010700500_07_070");
MsgDisp("Mikage","Got it? The best thing about you is that
you approach everything sincerely.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D010700500_07_080");
MsgDisp("Mikage","There's nothing wrong with that.
It's a good thing, so keep trying your
best.");
MsgDisp("主人公","｛御影＊＊｝......
You're right, thank you so much!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("D010700500_07_090");
MsgDisp("Mikage","Oh, and be careful on your way home.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Thanks to ｛御影＊＊｝, I learned
a few studying tricks!)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
