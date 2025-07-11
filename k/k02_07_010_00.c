MsgClose();
ChClose(7);
BGMStop();
BGOpen("ho000",0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChOpen(7,255,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝,
thank you very much!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("K020701000_07_000");
MsgDisp("Mikage","Today really is a happy day～
Your birthday, and New Years!");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("K020701000_07_010");
MsgDisp("Mikage","Was I being too proud?");
MsgDisp("主人公","Ah......!");
SEPlay("EV_SE_665");
SEWait();
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("K020701000_07_020");
VoiceEVSPlay(7);
MsgDisp("Mikage","Happy birthday, ｛主人公｝.");
MsgDisp("主人公","You remembered?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
ChEyeOpenLevel(7,8);
VoicePlay("K020701000_07_030");
MsgDisp("Mikage","Even if I look like this, I still
know the birthdays of everyone in class.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("K020701000_07_040");
MsgDisp("Mikage","Besides, having an easy birthday
like yours helps.");
MsgDisp("主人公","Hehe, I guess it is easy to remember.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,7);
VoicePlay("K020701000_07_050");
MsgDisp("Mikage","Yeah.
As long as I live, I won't forget it.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
ChEyeOpenLevel(7,10);
VoicePlay("K020701000_07_060");
MsgDisp("Mikage","Well, then.
Sorry I kept you this late.
Looking forward to this year.");
MsgDisp("主人公","Yes, please take care of me
again this year!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(7);
Wait(30);
MsgDisp("主人公","(We visited a shrine together, and
even celebrated my birthday.
This year looks like a good one!)");
MsgClose();
ScrFadeOut(0,0);
