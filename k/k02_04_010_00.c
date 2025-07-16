BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(4);
BGOpen("ho000",0);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for today.
Well then-");
ChMotion(4,1,1);
VoicePlay("K020401000_04_000");
MsgDisp("Nanatsumori","Ah, just wait a sec.");
MsgDisp("主人公","Hm?");
ChMotion(4,0,1);
VoicePlay("K020401000_04_010");
MsgDisp("Nanatsumori","January 1st.
It's your birthday, right?");
MsgDisp("主人公","Ah, yeah.
You remembered?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("K020401000_04_020");
MsgDisp("Nanatsumori","Well......
It's the happiest day of the year, right?");
MsgDisp("主人公","Ah, that's true too, it?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("K020401000_04_030");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","Right.
Happy birthday,
｛主人公｝.");
MsgDisp("主人公","Thanks, ｛七ツ森＊｝.");
SEPlay("EV_SE_665");
SEWait();
ChMotion(4,1,1);
VoicePlay("K020401000_04_040");
MsgDisp("Nanatsumori","Here's your present.
Open it carefully later.");
MsgDisp("主人公","Okay.");
ChMotion(4,0,1);
VoicePlay("K020401000_04_050");
MsgDisp("Nanatsumori","I hope you like it.
See you later.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(4,0,30);
Wait(30);
MsgDisp("主人公","(I'm so happy......
It seems like this year will really be a
great one!)");
MsgClose();
ScrFadeOut(0,0);
