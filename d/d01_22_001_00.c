BGOpen("sc603",0);
ChLayout(1);
SEPlay("EV_SE_752",0.1,0.6);
ScrFadeIn(0);
Wait(10,0);
SEStop("EV_SE_752",2);
MsgDisp("主人公","(Phew...I managed to finish my
performance. This joint practice session
makes me nervous.)");
MsgDisp("主人公","(Ah...
Next up it's ｛ひかる＊｝'s turn.)");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_22_02");
StlEye(22,0);
StlMouth(22,0);
EnvAutoSet(0);
BGMPlay("BGM_C22_HIKARU_I",0.01);
Wait(15,0);
ScrFadeIn(0);
SEPlay("EV_SE_GAYA_025",0,0.6);
MsgDisp("主人公","(Woah...
｛ひかる＊｝, so beautiful!)");
VoicePlay("D012200100_47_000");
MsgDisp("School Girl A","Amazing...
Just like you'd expect from Hikaru-san...");
SEStop("EV_SE_GAYA_025",1);
VoicePlay("D012200100_46_000");
MsgDisp("School Girl B","The performance and visuals are both
great...
You could watch her for hours...");
MsgDisp("主人公","(Hehe.
People from other schools are also
watching.)");
SEPlay("EV_SE_752",0.5,0.6);
MsgClose();
ScrFadeOut(0);
Wait(30,0);
SEStop("EV_SE_GAYA_025",2);
SEStop("EV_SE_752",3);
Wait(50,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGOpen("sc603",0);
MsgClose();
ChOpen(22,37,0,3,3,#1,#1,0,0);
EnvAutoSet(1);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("D012200100_22_000");
MsgDisp("Hikaru","Phew～
It's over!");
MsgDisp("主人公","｛ひかる＊｝, yours was the best
performance.
Everyone was really impressed!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("D012200100_22_010");
MsgDisp("Hikaru","Ehe▼
Hikaru really enjoyed it too～♪");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("D012200100_22_020");
MsgDisp("Hikaru","After all, dancing is most fun when you
dance with all your heart!");
MsgDisp("主人公","(As expected of ｛ひかる＊｝.
I should take note!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(22,0,0);
ChPrmTblAdd(22,1);
