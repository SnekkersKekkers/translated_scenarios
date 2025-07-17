BGOpen("sc310",0);
BGMPlay("BGM_C04_NANA_A",0.01);
ChLayout(1);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,2,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("D100400000_04_000");
MsgDisp("Nanatsumori","｛主人公｝.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
What's the issue?");
ChMotion(4,1,1);
VoicePlay("D100400000_04_010");
MsgDisp("Nanatsumori","Do you have your Japanese Lit textbook?
I forgot mine...");
MsgDisp("主人公","I do.
Here, take it.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D100400000_04_020");
MsgDisp("Nanatsumori","Thank you.
I'll give you some sweets later as thanks.
Cya!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(4,0,30);
MsgDisp("主人公","(Hehe! ｛七ツ森＊｝
borrowed something from me. How rare.)");
MsgClose();
ScrFadeOut(0,0);
